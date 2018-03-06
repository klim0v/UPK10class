// extremum.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <complex>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <time.h>


using namespace std;

const int size=100, maxsize=size+22;
int i,j,nom,best,potomok[20],r,parent[3],h,l,pr[maxsize-2],range_max,range_min,k,g=0,NomerF,timelive,MinOrMax;
long double better,last,xL,xR;
struct Population
	{
		int grey;
		long double n,f,result,ver,in,y,suitable,a;
	};
	Population x[maxsize];

void veroiatnost()
{
	last=0;
	for(i=0;i<20;i++)
	{
		x[i].ver=x[0].result/x[i].result*100;
		x[i].suitable=x[i].ver+last;
		last=x[i].suitable;
	}
	for(int i=0;i<18;i++)
	{
		r=(double)rand() / (RAND_MAX + 1) * (last - 0) + 0;
        for(int j=size;j>0;j--)
		    if (r<x[j].suitable)
			    potomok[i]=j;
    }
	x[maxsize-2].a=0;
	x[maxsize-1].a=65535;
	potomok[18]=maxsize-2;
	potomok[19]=maxsize-1;
}


int grayencode(int gray)   // код √ре€
{
    unsigned int bin;
    for (bin = 0; gray; gray >>= 1)// вправо на число битов
        bin ^= gray;// побитовое сложение 
    return bin;
}

void  poriadok(int k)
{
	for(i=0;i<k;i++)
	{
		best=i;
		for(int j=i;j<k;j++)
		    if (x[best].result<x[j].result) best=j;
		swap(x[best],x[i]);
		
	}
}

void  vivod()
{   
	cout << setw(10) << "1 Population" << setw(10) << "result"  << endl;
	for(i=0;i<size;i++)
	{
		cout << setw(10) << x[i].n << setw(10) << x[i].result <<  endl;
	} 
}

void  equation(int size1)
{   
	for(i=0;i<size1;i++)
	{   
		x[i].n=(x[i].a/10000+xL-1);
		switch(NomerF) 
		{
		case 1:
            x[i].result=-4*sin(x[i].n*1.5)*cos(x[i].n) - pow((x[i].n-3),2) + 10;
		    break;
		case 2:
            x[i].result=3*sin(2*x[i].n)/2 + x[i].n*pow((8-x[i].n),2)/8;
		    break;
		case 3:
            x[i].result=2*cos(x[i].n)*cos(2*x[i].n) + pow((x[i].n/5),2);
		    break;
		}
		x[i].result*=MinOrMax;
		x[i].grey=grayencode(x[i].a);	
	} 
}

void skreshchivanie()
{
	veroiatnost();
	for(int i=size;i<maxsize-2;i++)
	{
		do
		{
		int o=1;
		parent[1]=0;
		parent[2]=0;
		while((parent[1]==parent[2]) & (o=1)) 
		{
			
			o=0;
			h=(double)rand() / (RAND_MAX + 1) * (20 - 0) + 0;
			parent[1]=potomok[h];
			l=(double)rand() / (RAND_MAX + 1) * (20 - 0) + 0;
			parent[2]=potomok[l];
			
			if (parent[1]<parent[2]) 
		    {
			    pr[i]=parent[2]+100*parent[1];
		    }
		    else
		    {
			    pr[i]=parent[1]+100*parent[2];
		    };


			for(j=size;j<i;j++) 
				if(pr[i]==pr[j]) o=1;

		}
		
		h=(int)rand() / (RAND_MAX + 1) * (5 - 1) + 1;
		switch(h)
		{
		case 1:
            x[i].grey=((x[parent[1]].grey & 61440) | (x[parent[2]].grey & 4095));// 1 + 2, 3, 4
		    break;
		case 2:
			x[i].grey=((x[parent[1]].grey & 65280) | (x[parent[2]].grey & 255));// 1,2 + 3, 4
			break;
		case 3:
			x[i].grey=((x[parent[1]].grey & 65520) | (x[parent[2]].grey & 15));// 1, 2, 3 + 4
			break;
		case 4:
			x[i].grey=((x[parent[1]].grey & 61455) | (x[parent[2]].grey & 4080));// 1, 4 + 2, 3
			break;
		}
		if (potomok[h]<potomok[l]) 
		{
			pr[i]=potomok[h]+10*potomok[l];
		}
		else
		{
			pr[i]=potomok[l]+10*potomok[h];
		}
		x[i].a=grayencode(x[i].grey);
		x[i].n=(x[i].a/10000+xL-1);
		}
		while(!((x[i].n<xR) & (x[i].n>xL)));
	}
}

void mutation()
{
	for(j=0;j<2;j++)
	{
	i=(double)rand() / (RAND_MAX + 1) * (20 - 1) + 1;
	x[i].grey=(x[i].grey & 65520 | ((int)rand() / (RAND_MAX + 1) * (15 - 0) + 0));
	x[i].a=grayencode(x[i].grey);
	}
}

int go()
{ 
	srand( (unsigned)time( NULL ) );
	range_min=10000;
	range_max=(xR-xL+1)*10000;
    for(i=0;i<size;i++) x[i].a=(double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
	equation(size);
	poriadok(size);
	better=x[0].result;
	g=0;
	while(g<timelive)
	{
	    for(k=0;k<20;k++)
	    {
			
	        skreshchivanie();
	        equation(size+10);
	        poriadok(size+10);
			if (x[0].result > better)
			{
				better=x[0].result;
				g=0;
//				cout <<++nom << " promezutochie znachenie (#" << g <<  "): " << x[0].result << endl;
			}
	    }
	    mutation();
		equation(size+10);
	    poriadok(size+10);
		g++;
	}
	x[0].result*=MinOrMax;
//	cout << "best X: " << x[0].n << endl<< "rezult max: " << x[0].result << endl << "kol-Bo Paz: " << g << endl;
//	cout << "Press key..";
//	_getch();
	return 0;
}

