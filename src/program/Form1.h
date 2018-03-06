#pragma once
#include <stdlib.h>
#include <string>
#include "extremum.cpp"
#include "inform.h"
#include "help.h"



namespace program {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int nomstr=1;
	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;






	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  FileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  CloseToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  InformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  HelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;

	private: System::Windows::Forms::DomainUpDown^  domainUpDown1;
	private: System::Windows::Forms::Label^  label7;
















	private: System::ComponentModel::IContainer^  components;









	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CloseToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Расчитать экстремум";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-2, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите интервал:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 149);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"от";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"до";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(3, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(166, 72);
			this->panel1->TabIndex = 0;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(3, 52);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(124, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"2cos(x)cos(2x)+(x/5)²";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(3, 29);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(117, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"3sin(2x)/2+x(8-x)²/8";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(3, 6);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(145, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"-4sin(1,5x)cos(x)-(x-3)²+10";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(172, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(286, 242);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(29, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 0;
			this->textBox3->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(29, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(140, 20);
			this->textBox4->TabIndex = 0;
			this->textBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(-1, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"F(x)=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"x=";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(172, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(286, 242);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(172, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(286, 242);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(100, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 22);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Очистка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(130, 246);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 19);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"1500";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(-4, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Время жизни популяции:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->FileToolStripMenuItem, 
				this->InformToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(460, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->CloseToolStripMenuItem1});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->FileToolStripMenuItem->Text = L"Файл";
			// 
			// CloseToolStripMenuItem1
			// 
			this->CloseToolStripMenuItem1->Name = L"CloseToolStripMenuItem1";
			this->CloseToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->CloseToolStripMenuItem1->Text = L"Закрыть";
			this->CloseToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::CloseToolStripMenuItem1_Click_1);
			// 
			// InformToolStripMenuItem
			// 
			this->InformToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->HelpToolStripMenuItem, 
				this->AboutToolStripMenuItem});
			this->InformToolStripMenuItem->Name = L"InformToolStripMenuItem";
			this->InformToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->InformToolStripMenuItem->Text = L"Справка";
			// 
			// HelpToolStripMenuItem
			// 
			this->HelpToolStripMenuItem->Name = L"HelpToolStripMenuItem";
			this->HelpToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->HelpToolStripMenuItem->Text = L"Просмотр справки";
			this->HelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::HelpToolStripMenuItem_Click);
			// 
			// AboutToolStripMenuItem
			// 
			this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
			this->AboutToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->AboutToolStripMenuItem->Text = L"О программе";
			this->AboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AboutToolStripMenuItem_Click_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Location = System::Drawing::Point(3, 99);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(97, 25);
			this->panel2->TabIndex = 20;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(52, 4);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(45, 17);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->Text = L"MIN";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(3, 4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(48, 17);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"MAX";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(0, 277);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(460, 20);
			this->domainUpDown1->TabIndex = 22;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Form1::domainUpDown1_SelectedItemChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(-4, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"История:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 297);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск глобального экстремума в многомерных функциях с помощью ГА";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
                
				if(((textBox1->Text!="") & (textBox2->Text!="")) & (Convert::ToDouble(textBox1->Text)<Convert::ToDouble(textBox2->Text)))
				{
				if(radioButton1->Checked==true) NomerF=1;
				if(radioButton2->Checked==true) NomerF=2;
				if(radioButton3->Checked==true) NomerF=3;
				if(radioButton4->Checked==true) MinOrMax=1; // max
				if(radioButton5->Checked==true) MinOrMax=-1;// min
			    xL=Convert::ToDouble(textBox1->Text);
	            xR=Convert::ToDouble(textBox2->Text);
				timelive=Convert::ToInt32(textBox5->Text);
				go();
				double res=(int)(x[0].result*10000)/10000.0;
				textBox3->Text=Convert::ToString(res);
				double xres=(int)(x[0].n*10000)/10000.0;
				textBox4->Text=Convert::ToString(xres);
		        if (MinOrMax==1) domainUpDown1->Items->Add(String::Concat( nomstr++,". ", "Функция №" , NomerF,", интервал: от " ,(textBox1->Text), " до ", (textBox2->Text), ", timeLive=", timelive, ", MAX f(x)=" , res, ", x=",xres));
				else domainUpDown1->Items->Add(String::Concat( nomstr++,". ", "Функция №" , NomerF,", интервал: от " ,(textBox1->Text), " до ", (textBox2->Text), ", timeLive=", timelive, ", MIN f(x)=" , res, ", x=",xres));
				}
				else textBox3->Text="НЕверно введены данные";
		}

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Visible=true;
		     pictureBox2->Visible=false;
			 pictureBox3->Visible=false;		
		 }


private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(!((Convert::ToChar(e->KeyChar)>47) & (Convert::ToChar(e->KeyChar)<58) | ( e->KeyChar==(char)8) | ( e->KeyChar==(char)45) | ( e->KeyChar==(char)44)))
				 e->Handled = true;
		 }

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Visible=false;
			 pictureBox2->Visible=true;
			 pictureBox3->Visible=false;
		
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Visible=false;
			 pictureBox2->Visible=false;
			 pictureBox3->Visible=true;
	
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";
			 textBox2->Text="";
			 textBox3->Text="";
			 textBox4->Text="";
			 radioButton1->Checked=true;
			 radioButton4->Checked=true;
		 }
private: System::Void CloseToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
		 }
private: System::Void AboutToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 inform^ frm2= gcnew inform(); 
             frm2->Show();
		 }
private: System::Void HelpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 help^ frm3= gcnew help(); 
             frm3->Show();
		 }
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


