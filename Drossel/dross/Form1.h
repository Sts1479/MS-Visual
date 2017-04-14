#pragma once
#include "resource.h"

namespace dross {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  Height1;
	private: System::Windows::Forms::TextBox^  Height2;
	private: System::Windows::Forms::TextBox^  Width1;
	private: System::Windows::Forms::TextBox^  Width2;
	private: System::Windows::Forms::TextBox^  Thickness;

	private: System::Windows::Forms::TextBox^  Coils;
	private: System::Windows::Forms::TextBox^  Inductance;
	private: System::Windows::Forms::TextBox^  CoeffForm;
	private: System::Windows::Forms::TextBox^  Length1;
	private: System::Windows::Forms::ListBox^  Induct_List;
	private: System::Windows::Forms::TextBox^  MaxCurrent;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  Perm_sat;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  Square;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ListBox^  Material_List;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  AirGrap;
	private: System::Windows::Forms::CheckBox^  checkBox2;









	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Height1 = (gcnew System::Windows::Forms::TextBox());
			this->Height2 = (gcnew System::Windows::Forms::TextBox());
			this->Width1 = (gcnew System::Windows::Forms::TextBox());
			this->Width2 = (gcnew System::Windows::Forms::TextBox());
			this->Thickness = (gcnew System::Windows::Forms::TextBox());
			this->Coils = (gcnew System::Windows::Forms::TextBox());
			this->Inductance = (gcnew System::Windows::Forms::TextBox());
			this->CoeffForm = (gcnew System::Windows::Forms::TextBox());
			this->Length1 = (gcnew System::Windows::Forms::TextBox());
			this->Induct_List = (gcnew System::Windows::Forms::ListBox());
			this->MaxCurrent = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Perm_sat = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->Square = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Material_List = (gcnew System::Windows::Forms::ListBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->AirGrap = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(372, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start computing";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Высота дросселя, cм";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ширина дросселя, cм";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Толщина сердечника, cм";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 321);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Выбор материала";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Число витков";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(381, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Длина средней линии, cм";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(38, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"ИСХОДНЫЕ ДАННЫЕ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(381, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(212, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"РЕЗУЛЬТАТЫ РАСЧЁТА";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(381, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Коэфф. формы магнитопровода";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(381, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Индуктивность";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(39, 190);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Высота окна, cм ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(38, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Ширина окна, cм";
			// 
			// Height1
			// 
			this->Height1->BackColor = System::Drawing::SystemColors::Window;
			this->Height1->Location = System::Drawing::Point(208, 80);
			this->Height1->Name = L"Height1";
			this->Height1->Size = System::Drawing::Size(100, 20);
			this->Height1->TabIndex = 22;
			this->Height1->Text = L"0";
			// 
			// Height2
			// 
			this->Height2->Location = System::Drawing::Point(208, 186);
			this->Height2->Name = L"Height2";
			this->Height2->Size = System::Drawing::Size(100, 20);
			this->Height2->TabIndex = 23;
			this->Height2->Text = L"0";
			// 
			// Width1
			// 
			this->Width1->Location = System::Drawing::Point(208, 132);
			this->Width1->Name = L"Width1";
			this->Width1->Size = System::Drawing::Size(100, 20);
			this->Width1->TabIndex = 24;
			this->Width1->Text = L"0";
			// 
			// Width2
			// 
			this->Width2->Location = System::Drawing::Point(208, 236);
			this->Width2->Name = L"Width2";
			this->Width2->Size = System::Drawing::Size(100, 20);
			this->Width2->TabIndex = 25;
			this->Width2->Text = L"0";
			// 
			// Thickness
			// 
			this->Thickness->Location = System::Drawing::Point(208, 284);
			this->Thickness->Name = L"Thickness";
			this->Thickness->Size = System::Drawing::Size(100, 20);
			this->Thickness->TabIndex = 26;
			this->Thickness->Text = L"0";
			// 
			// Coils
			// 
			this->Coils->Location = System::Drawing::Point(208, 377);
			this->Coils->Name = L"Coils";
			this->Coils->Size = System::Drawing::Size(100, 20);
			this->Coils->TabIndex = 28;
			this->Coils->Text = L"0";
			// 
			// Inductance
			// 
			this->Inductance->Location = System::Drawing::Point(584, 187);
			this->Inductance->Name = L"Inductance";
			this->Inductance->Size = System::Drawing::Size(100, 20);
			this->Inductance->TabIndex = 29;
			// 
			// CoeffForm
			// 
			this->CoeffForm->Location = System::Drawing::Point(584, 135);
			this->CoeffForm->Name = L"CoeffForm";
			this->CoeffForm->Size = System::Drawing::Size(100, 20);
			this->CoeffForm->TabIndex = 30;
			this->CoeffForm->Text = L"1";
			// 
			// Length1
			// 
			this->Length1->Location = System::Drawing::Point(584, 77);
			this->Length1->Name = L"Length1";
			this->Length1->Size = System::Drawing::Size(100, 20);
			this->Length1->TabIndex = 31;
			this->Length1->Text = L"0";
			// 
			// Induct_List
			// 
			this->Induct_List->FormattingEnabled = true;
			this->Induct_List->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"мкГн", L"мГн"});
			this->Induct_List->Location = System::Drawing::Point(507, 177);
			this->Induct_List->Name = L"Induct_List";
			this->Induct_List->Size = System::Drawing::Size(35, 30);
			this->Induct_List->TabIndex = 32;
			this->Induct_List->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Induct_List_SelectedIndexChanged);
			// 
			// MaxCurrent
			// 
			this->MaxCurrent->Location = System::Drawing::Point(208, 425);
			this->MaxCurrent->Name = L"MaxCurrent";
			this->MaxCurrent->Size = System::Drawing::Size(100, 20);
			this->MaxCurrent->TabIndex = 33;
			this->MaxCurrent->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(41, 432);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 13);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Предельный ток, А";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(382, 244);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(117, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"\"Мю\" при насыщении";
			// 
			// Perm_sat
			// 
			this->Perm_sat->Location = System::Drawing::Point(584, 237);
			this->Perm_sat->Name = L"Perm_sat";
			this->Perm_sat->Size = System::Drawing::Size(100, 20);
			this->Perm_sat->TabIndex = 36;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(385, 287);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(124, 17);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->Text = L"Учесть насыщение";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(374, 429);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 17);
			this->radioButton1->TabIndex = 38;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1-й вариант";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(497, 429);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(84, 17);
			this->radioButton2->TabIndex = 39;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2-й вариант";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// Square
			// 
			this->Square->Location = System::Drawing::Point(208, 472);
			this->Square->Name = L"Square";
			this->Square->Size = System::Drawing::Size(100, 20);
			this->Square->TabIndex = 40;
			this->Square->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(39, 475);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(130, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Площадь сечения, см^2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(440, 400);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 13);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Варианты расчёта";
			// 
			// Material_List
			// 
			this->Material_List->FormattingEnabled = true;
			this->Material_List->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"MS26", L"MS40", L"MS60", L"MS90", L"FS14", 
				L"FS26", L"FS40", L"FS60", L"FS75", L"FS90", L"HF26", L"HF60", L"OP26", L"OP40", L"OP60"});
			this->Material_List->Location = System::Drawing::Point(208, 321);
			this->Material_List->Name = L"Material_List";
			this->Material_List->Size = System::Drawing::Size(100, 30);
			this->Material_List->TabIndex = 43;
			this->Material_List->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Material_List_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(41, 514);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(118, 13);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Воздушный зазор, см";
			// 
			// AirGrap
			// 
			this->AirGrap->Location = System::Drawing::Point(208, 514);
			this->AirGrap->Name = L"AirGrap";
			this->AirGrap->Size = System::Drawing::Size(100, 20);
			this->AirGrap->TabIndex = 45;
			this->AirGrap->Text = L"0";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(385, 333);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 17);
			this->checkBox2->TabIndex = 46;
			this->checkBox2->Text = L"Учесть зазор";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 568);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->AirGrap);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->Material_List);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Square);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->Perm_sat);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->MaxCurrent);
			this->Controls->Add(this->Induct_List);
			this->Controls->Add(this->Length1);
			this->Controls->Add(this->CoeffForm);
			this->Controls->Add(this->Inductance);
			this->Controls->Add(this->Coils);
			this->Controls->Add(this->Thickness);
			this->Controls->Add(this->Width2);
			this->Controls->Add(this->Width1);
			this->Controls->Add(this->Height2);
			this->Controls->Add(this->Height1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Расчёт дросселя";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

		 }


 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (radioflag==1)
			 {
				// mu_r=mu;
			 float *mass = new float[];
			    //Height1->BackColor = System::Drawing::SystemColors::Highlight;
			    int N = System::Convert::ToDouble(Coils->Text);
			    //mu = System::Convert::ToDouble(Permeability->Text);
			    lvz=System::Convert::ToDouble(AirGrap->Text);
				float l1vn = System::Convert::ToDouble(Height1->Text);
				float l1vt = System::Convert::ToDouble(Height2->Text);
				float l2vn = System::Convert::ToDouble(Width1->Text);
				float l2vt = System::Convert::ToDouble(Width2->Text);
			    float h = System::Convert::ToDouble(Thickness->Text);
				float I = System::Convert::ToDouble(MaxCurrent->Text);
				l1vn=l1vn/100;
				l1vt=l1vt/100;
				l2vn=l2vn/100;
				l2vt=l2vt/100;
				h=h/100;
				if ((l1vn<=0)||(l1vt<=0)||(l2vn<=0)||(l2vt<=0)||(h<=0)||(mu<=0)||(N<=0))
				{
					MessageBox::Show( "Ты что, придурок?? Нельзя вводить отрицательные или нулевые значения", "Блядь №1!", MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
			    else if ((l1vt<=l2vt)||(l1vn<=l2vn)||(l1vn<l2vn)||(l1vt<l2vt))
				{
					MessageBox::Show( "Убивать таких надо дебилов! Размеры окна сердечника не могут быть больше самого сердечника!", "Блядь №2!", MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
				else if (N<=1)
				{
					MessageBox::Show( "Бхаха! Вот ты тупень..Витков у твоего дросселя сколько? Один или меньше того?", "Блядь №3!", MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
				else if (mu<=1)
				{
					MessageBox::Show( "Совсем тронулся..Магнитная проницаемость относительная! Больше 1!", "Блядь №4!", MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
				else
				{
				mass=Induct(N,mu_r,l1vn,l1vt,l2vn,l2vt,h);
				Inductance->Text=System::Convert::ToString(mass[0]);
				CoeffForm->Text=System::Convert::ToString(mass[1]);
				Length1->Text=System::Convert::ToString(mass[2]*100);
				Square->Text=System::Convert::ToString(mass[3]*10000);
				Ind=mass[0];
				mu_s=Saturation1(N, mu, mass[2]*100, I, a, b, c);
				Perm_sat->Text=System::Convert::ToString(mu_s);
				}
			 }
//////////////////////
			 else if (radioflag==2)
			 {
				// mu_r=mu;
				//float Ld;
				lvz=System::Convert::ToDouble(AirGrap->Text);
			    int N = System::Convert::ToDouble(Coils->Text);
//			    mu = System::Convert::ToDouble(Permeability->Text);
			    float lsr= System::Convert::ToDouble(Length1->Text);
				float I = System::Convert::ToDouble(MaxCurrent->Text);
				float kf=System::Convert::ToDouble(CoeffForm->Text);
				if (kf==0)
				{
					kf=1;
				}
				float Sc=System::Convert::ToDouble(Square->Text);
				Sc=Sc/10000;
				lsr=lsr/100;
				Ind=Induct1(N,mu_r,kf,lsr,Sc);
				Inductance->Text=System::Convert::ToString(Ind);
				lsr=lsr*100;
				mu_s=Saturation1(N, mu, lsr, I, a , b, c);
				Perm_sat->Text=System::Convert::ToString(mu_s);
				}
			  }
			  

private: System::Void Induct_List_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //float Ind = System::Convert::ToDouble(Inductance->Text);
			 if (Induct_List->Text =="мГн")
			 {
				 Inductance->Text=System::Convert::ToString(Ind*1000);
			 }
			 else if (Induct_List->Text =="мкГн")
			 {
              Inductance->Text=System::Convert::ToString(Ind*1000000);
			 }
		 }


private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked)
      {
         mu_r=mu_s;
		 satflag=1;
      }
			 else
	  {
		mu_r=mu;
		satflag=0;
	  }
			
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			radioflag=1;
			Height1->BackColor = System::Drawing::Color::LightGreen;
			Height2->BackColor = System::Drawing::Color::LightGreen;
			Width1->BackColor = System::Drawing::Color::LightGreen;
			Width2->BackColor = System::Drawing::Color::LightGreen;
			Thickness->BackColor = System::Drawing::Color::LightGreen;
			AirGrap->BackColor = System::Drawing::Color::LightGreen;
			Material_List->BackColor = System::Drawing::Color::LightGreen;
//			Permeability->BackColor = System::Drawing::Color::LightGreen;
			Coils->BackColor = System::Drawing::Color::LightGreen;
			MaxCurrent->BackColor = System::Drawing::Color::LightGreen;
			Square->BackColor = System::Drawing::Color::White;
			Length1->BackColor = System::Drawing::Color::White;
			CoeffForm->BackColor = System::Drawing::Color::White;
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 radioflag=2;
			 Height1->BackColor = System::Drawing::Color::White;
			Height2->BackColor = System::Drawing::Color::White;
			Width1->BackColor = System::Drawing::Color::White;
			Width2->BackColor = System::Drawing::Color::White;
			Thickness->BackColor = System::Drawing::Color::White;
//			Permeability->BackColor = System::Drawing::Color::LightGreen;
			Coils->BackColor = System::Drawing::Color::LightGreen;
			MaxCurrent->BackColor = System::Drawing::Color::LightGreen;
			Square->BackColor = System::Drawing::Color::LightGreen;
			Length1->BackColor = System::Drawing::Color::LightGreen;
			CoeffForm->BackColor = System::Drawing::Color::LightGreen;
			AirGrap->BackColor = System::Drawing::Color::LightGreen;
			Material_List->BackColor = System::Drawing::Color::LightGreen;
		 }
private: System::Void Material_List_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (Material_List->Text=="MS26")
			 {
				 a=1.0E-02;b=2.06E-07;c=2;mu=26;
			 }
			 else if (Material_List->Text=="MS40")
			 {
				 a=1.0E-02;b=2.65E-06;c=1.7;mu=40;
			 }
			 else if (Material_List->Text=="MS60")
			 {
				 a=1.0E-02;b=2.15E-06;c=1.84;mu=60;
			 }
			 else if (Material_List->Text=="MS90")
			 {
				 a=1.0E-02;b=3.99E-06;c=1.88;mu=90;
			 }
			 else if (Material_List->Text=="FS14")
			 {
				 a=1.0E-02;b=6.01E-07;c=1.48;mu=14;
			 }
			 else if (Material_List->Text=="FS26")
			 {
				 a=1.0E-02;b=2.07E-06;c=1.48;mu=26;
			 }
			 else if (Material_List->Text=="FS40")
			 {
				 a=1.0E-02;b=2.08E-06;c=1.6;mu=40;
			 }
			 else if (Material_List->Text=="FS60")
			 {
				 a=1.0E-02;b=1.71E-06;c=1.75;mu=60;
			 }
			 else if (Material_List->Text=="FS75")
			 {
				 a=1.0E-02;b=2.67E-06;c=1.75;mu=75;
			 }
			 else if (Material_List->Text=="FS90")
			 {
				 a=1.0E-02;b=3.12E-06;c=1.85;mu=90;
			 }
			 else if (Material_List->Text=="HF26")
			 {
				 a=1.0E-02;b=2.44E-06;c=1.44;mu=26;
			 }
			 else if (Material_List->Text=="HF60")
			 {
				 a=1.0E-02;b=7.65E-07;c=1.89;mu=60;
			 }
			 else if (Material_List->Text=="OP26")
			 {
				 a=1.0E-02;b=1.57E-06;c=1.56;mu=26;
			 }
			 else if (Material_List->Text=="OP40")
			 {
				 a=1.0E-02;b=2.04E-06;c=1.63;mu=40;
			 }
			 else if (Material_List->Text=="OP60")
			 {
				 a=1.0E-02;b=1.74E-07;c=1.75;mu=60;
			 }
			 mu_r=mu;
		 }
		 
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 	 if (checkBox2->Checked)
                 {
	            	float lsr= System::Convert::ToDouble(Length1->Text);
		           
			        if (satflag==0)
					{
						 mu_ekv=mu_vz(lvz,mu,lsr);
                         mu_r=mu_ekv;
				    }
					else if (satflag==1)
					{
						 mu_ekv=mu_vz(lvz,mu_s,lsr);
                         mu_r=mu_ekv;
					}
				 }
				 else 
				 {
					 if (satflag==0)
					 {
						 mu_r=mu;
					 }
					 else if (satflag==1)
					 {
						 mu_r=mu_s;
					 }
				 }
                   

	}
};
}
