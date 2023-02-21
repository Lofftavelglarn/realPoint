#pragma once

namespace realPoint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ AboutProgramm;
	private: System::Windows::Forms::ToolStripMenuItem^ Exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ OxOs;
	private: System::Windows::Forms::TextBox^ OyOs;
	private: System::Windows::Forms::TextBox^ OzOs;
	private: System::Windows::Forms::TextBox^ xOyPl;
	private: System::Windows::Forms::TextBox^ xOzPl;
	private: System::Windows::Forms::TextBox^ yOzPl;
	private: System::Windows::Forms::TextBox^ whatOct;
	private: System::Windows::Forms::TextBox^ bothOct;
	private: System::Windows::Forms::TextBox^ Sym0;
	private: System::Windows::Forms::TextBox^ SymxOy;
	private: System::Windows::Forms::TextBox^ SymxOz;
	private: System::Windows::Forms::TextBox^ SymyOz;
	private: System::Windows::Forms::TextBox^ distanceto0;
	private: System::Windows::Forms::TextBox^ pointEqu;
	private: System::Windows::Forms::TextBox^ pointComp;
	private: System::Windows::Forms::TextBox^ pointMult;
	private: System::Windows::Forms::TextBox^ distancetoxyz;
	private: System::Windows::Forms::TextBox^ SymOx;
	private: System::Windows::Forms::TextBox^ triangleArea;




















	private: System::Windows::Forms::TextBox^ SymOy;
	private: System::Windows::Forms::TextBox^ SymOz;
	private: System::Windows::Forms::TextBox^ isTriangle;



	private: System::Windows::Forms::TextBox^ X1box;
	private: System::Windows::Forms::TextBox^ Y1box;
private: System::Windows::Forms::TextBox^ Z1box;

	private: System::Windows::Forms::TextBox^ X2box;
	private: System::Windows::Forms::TextBox^ Y2box;
	private: System::Windows::Forms::TextBox^ Z2box;
	private: System::Windows::Forms::TextBox^ X3box;
	private: System::Windows::Forms::TextBox^ Y3box;
	private: System::Windows::Forms::TextBox^ Z3box;









	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->AboutProgramm = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->OxOs = (gcnew System::Windows::Forms::TextBox());
			this->OyOs = (gcnew System::Windows::Forms::TextBox());
			this->OzOs = (gcnew System::Windows::Forms::TextBox());
			this->xOyPl = (gcnew System::Windows::Forms::TextBox());
			this->xOzPl = (gcnew System::Windows::Forms::TextBox());
			this->yOzPl = (gcnew System::Windows::Forms::TextBox());
			this->whatOct = (gcnew System::Windows::Forms::TextBox());
			this->bothOct = (gcnew System::Windows::Forms::TextBox());
			this->Sym0 = (gcnew System::Windows::Forms::TextBox());
			this->SymxOy = (gcnew System::Windows::Forms::TextBox());
			this->SymxOz = (gcnew System::Windows::Forms::TextBox());
			this->SymyOz = (gcnew System::Windows::Forms::TextBox());
			this->distanceto0 = (gcnew System::Windows::Forms::TextBox());
			this->pointEqu = (gcnew System::Windows::Forms::TextBox());
			this->pointComp = (gcnew System::Windows::Forms::TextBox());
			this->pointMult = (gcnew System::Windows::Forms::TextBox());
			this->distancetoxyz = (gcnew System::Windows::Forms::TextBox());
			this->SymOx = (gcnew System::Windows::Forms::TextBox());
			this->triangleArea = (gcnew System::Windows::Forms::TextBox());
			this->SymOy = (gcnew System::Windows::Forms::TextBox());
			this->SymOz = (gcnew System::Windows::Forms::TextBox());
			this->isTriangle = (gcnew System::Windows::Forms::TextBox());
			this->X1box = (gcnew System::Windows::Forms::TextBox());
			this->Y1box = (gcnew System::Windows::Forms::TextBox());
			this->Z1box = (gcnew System::Windows::Forms::TextBox());
			this->X2box = (gcnew System::Windows::Forms::TextBox());
			this->Y2box = (gcnew System::Windows::Forms::TextBox());
			this->Z2box = (gcnew System::Windows::Forms::TextBox());
			this->X3box = (gcnew System::Windows::Forms::TextBox());
			this->Y3box = (gcnew System::Windows::Forms::TextBox());
			this->Z3box = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->AboutProgramm, this->Exit });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1457, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// AboutProgramm
			// 
			this->AboutProgramm->Name = L"AboutProgramm";
			this->AboutProgramm->Size = System::Drawing::Size(101, 20);
			this->AboutProgramm->Text = L"Об программе";
			this->AboutProgramm->Click += gcnew System::EventHandler(this, &MyForm::AboutProgramm_Click);
			// 
			// Exit
			// 
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(54, 20);
			this->Exit->Text = L"Выход";
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(18, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X1: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(31, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Лежит ли точка на плоскости xOy: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(31, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Лежит ли точка на оси Ox: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(31, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Лежит ли точка на оси Oy: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(31, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Лежит ли точка на оси Oz: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(31, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(274, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Лежит ли точка на плоскости yOz: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(31, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(274, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Лежит ли точка на плоскости xOz: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(31, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(270, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Лежат ли точки в одном октанте: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(31, 305);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Октант точки: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(182, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Z1: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(100, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 20);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Y1: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(274, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"X2: ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(356, 65);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 20);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Y2: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(438, 61);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(36, 20);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Z2: ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(31, 373);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(265, 20);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Симметрия относительно (0;0;0): ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(415, 181);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(222, 20);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Умножение точки на число: ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(415, 144);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(148, 20);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Сравнение точек: ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label18->Location = System::Drawing::Point(415, 105);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(146, 20);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Равенство точек: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label19->Location = System::Drawing::Point(31, 539);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(273, 20);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Расстояние от начала координат: ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label20->Location = System::Drawing::Point(31, 491);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(247, 20);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Симметрия относительно yOz: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label21->Location = System::Drawing::Point(31, 449);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(247, 20);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Симметрия относительно xOz: ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label22->Location = System::Drawing::Point(31, 408);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(246, 20);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Симметрия относительно xOy: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label23->Location = System::Drawing::Point(415, 213);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(282, 20);
			this->label23->TabIndex = 23;
			this->label23->Text = L"Расстояние до координатных осей: ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label24->Location = System::Drawing::Point(415, 243);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(239, 20);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Симметрия относительно Ox: ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label25->Location = System::Drawing::Point(415, 335);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(176, 20);
			this->label25->TabIndex = 25;
			this->label25->Text = L"Есть ли треугольник: ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label26->Location = System::Drawing::Point(415, 305);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(240, 20);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Симметрия относительно Oz: ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label27->Location = System::Drawing::Point(417, 274);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(239, 20);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Симметрия относительно Oy: ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label28->Location = System::Drawing::Point(415, 373);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(198, 20);
			this->label28->TabIndex = 28;
			this->label28->Text = L"Площадь треугольника: ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label29->Location = System::Drawing::Point(565, 63);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 20);
			this->label29->TabIndex = 29;
			this->label29->Text = L"X3: ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label30->Location = System::Drawing::Point(729, 61);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(36, 20);
			this->label30->TabIndex = 30;
			this->label30->Text = L"Z3: ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label31->Location = System::Drawing::Point(647, 63);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(37, 20);
			this->label31->TabIndex = 31;
			this->label31->Text = L"Y3: ";
			// 
			// OxOs
			// 
			this->OxOs->Location = System::Drawing::Point(307, 107);
			this->OxOs->Name = L"OxOs";
			this->OxOs->Size = System::Drawing::Size(100, 20);
			this->OxOs->TabIndex = 32;
			// 
			// OyOs
			// 
			this->OyOs->Location = System::Drawing::Point(307, 146);
			this->OyOs->Name = L"OyOs";
			this->OyOs->Size = System::Drawing::Size(100, 20);
			this->OyOs->TabIndex = 33;
			// 
			// OzOs
			// 
			this->OzOs->Location = System::Drawing::Point(307, 181);
			this->OzOs->Name = L"OzOs";
			this->OzOs->Size = System::Drawing::Size(100, 20);
			this->OzOs->TabIndex = 34;
			// 
			// xOyPl
			// 
			this->xOyPl->Location = System::Drawing::Point(307, 213);
			this->xOyPl->Name = L"xOyPl";
			this->xOyPl->Size = System::Drawing::Size(100, 20);
			this->xOyPl->TabIndex = 35;
			// 
			// xOzPl
			// 
			this->xOzPl->Location = System::Drawing::Point(307, 243);
			this->xOzPl->Name = L"xOzPl";
			this->xOzPl->Size = System::Drawing::Size(100, 20);
			this->xOzPl->TabIndex = 36;
			// 
			// yOzPl
			// 
			this->yOzPl->Location = System::Drawing::Point(307, 274);
			this->yOzPl->Name = L"yOzPl";
			this->yOzPl->Size = System::Drawing::Size(100, 20);
			this->yOzPl->TabIndex = 37;
			// 
			// whatOct
			// 
			this->whatOct->Location = System::Drawing::Point(307, 305);
			this->whatOct->Name = L"whatOct";
			this->whatOct->Size = System::Drawing::Size(100, 20);
			this->whatOct->TabIndex = 38;
			// 
			// bothOct
			// 
			this->bothOct->Location = System::Drawing::Point(307, 335);
			this->bothOct->Name = L"bothOct";
			this->bothOct->Size = System::Drawing::Size(100, 20);
			this->bothOct->TabIndex = 39;
			// 
			// Sym0
			// 
			this->Sym0->Location = System::Drawing::Point(307, 373);
			this->Sym0->Name = L"Sym0";
			this->Sym0->Size = System::Drawing::Size(100, 20);
			this->Sym0->TabIndex = 40;
			// 
			// SymxOy
			// 
			this->SymxOy->Location = System::Drawing::Point(307, 408);
			this->SymxOy->Name = L"SymxOy";
			this->SymxOy->Size = System::Drawing::Size(100, 20);
			this->SymxOy->TabIndex = 41;
			// 
			// SymxOz
			// 
			this->SymxOz->Location = System::Drawing::Point(307, 449);
			this->SymxOz->Name = L"SymxOz";
			this->SymxOz->Size = System::Drawing::Size(100, 20);
			this->SymxOz->TabIndex = 42;
			// 
			// SymyOz
			// 
			this->SymyOz->Location = System::Drawing::Point(307, 491);
			this->SymyOz->Name = L"SymyOz";
			this->SymyOz->Size = System::Drawing::Size(100, 20);
			this->SymyOz->TabIndex = 43;
			// 
			// distanceto0
			// 
			this->distanceto0->Location = System::Drawing::Point(307, 539);
			this->distanceto0->Name = L"distanceto0";
			this->distanceto0->Size = System::Drawing::Size(100, 20);
			this->distanceto0->TabIndex = 44;
			// 
			// pointEqu
			// 
			this->pointEqu->Location = System::Drawing::Point(704, 105);
			this->pointEqu->Name = L"pointEqu";
			this->pointEqu->Size = System::Drawing::Size(100, 20);
			this->pointEqu->TabIndex = 45;
			// 
			// pointComp
			// 
			this->pointComp->Location = System::Drawing::Point(704, 144);
			this->pointComp->Name = L"pointComp";
			this->pointComp->Size = System::Drawing::Size(100, 20);
			this->pointComp->TabIndex = 46;
			// 
			// pointMult
			// 
			this->pointMult->Location = System::Drawing::Point(704, 181);
			this->pointMult->Name = L"pointMult";
			this->pointMult->Size = System::Drawing::Size(100, 20);
			this->pointMult->TabIndex = 47;
			// 
			// distancetoxyz
			// 
			this->distancetoxyz->Location = System::Drawing::Point(704, 213);
			this->distancetoxyz->Name = L"distancetoxyz";
			this->distancetoxyz->Size = System::Drawing::Size(100, 20);
			this->distancetoxyz->TabIndex = 48;
			// 
			// SymOx
			// 
			this->SymOx->Location = System::Drawing::Point(704, 243);
			this->SymOx->Name = L"SymOx";
			this->SymOx->Size = System::Drawing::Size(100, 20);
			this->SymOx->TabIndex = 49;
			// 
			// triangleArea
			// 
			this->triangleArea->Location = System::Drawing::Point(704, 373);
			this->triangleArea->Name = L"triangleArea";
			this->triangleArea->Size = System::Drawing::Size(100, 20);
			this->triangleArea->TabIndex = 50;
			// 
			// SymOy
			// 
			this->SymOy->Location = System::Drawing::Point(704, 274);
			this->SymOy->Name = L"SymOy";
			this->SymOy->Size = System::Drawing::Size(100, 20);
			this->SymOy->TabIndex = 50;
			// 
			// SymOz
			// 
			this->SymOz->Location = System::Drawing::Point(704, 307);
			this->SymOz->Name = L"SymOz";
			this->SymOz->Size = System::Drawing::Size(100, 20);
			this->SymOz->TabIndex = 51;
			// 
			// isTriangle
			// 
			this->isTriangle->Location = System::Drawing::Point(704, 337);
			this->isTriangle->Name = L"isTriangle";
			this->isTriangle->Size = System::Drawing::Size(100, 20);
			this->isTriangle->TabIndex = 52;
			// 
			// X1box
			// 
			this->X1box->Location = System::Drawing::Point(61, 61);
			this->X1box->Name = L"X1box";
			this->X1box->Size = System::Drawing::Size(33, 20);
			this->X1box->TabIndex = 53;
			// 
			// Y1box
			// 
			this->Y1box->Location = System::Drawing::Point(143, 61);
			this->Y1box->Name = L"Y1box";
			this->Y1box->Size = System::Drawing::Size(33, 20);
			this->Y1box->TabIndex = 54;
			// 
			// Z1box
			// 
			this->Z1box->Location = System::Drawing::Point(224, 61);
			this->Z1box->Name = L"Z1box";
			this->Z1box->Size = System::Drawing::Size(33, 20);
			this->Z1box->TabIndex = 55;
			// 
			// X2box
			// 
			this->X2box->Location = System::Drawing::Point(317, 61);
			this->X2box->Name = L"X2box";
			this->X2box->Size = System::Drawing::Size(33, 20);
			this->X2box->TabIndex = 56;
			// 
			// Y2box
			// 
			this->Y2box->Location = System::Drawing::Point(399, 63);
			this->Y2box->Name = L"Y2box";
			this->Y2box->Size = System::Drawing::Size(33, 20);
			this->Y2box->TabIndex = 57;
			// 
			// Z2box
			// 
			this->Z2box->Location = System::Drawing::Point(480, 63);
			this->Z2box->Name = L"Z2box";
			this->Z2box->Size = System::Drawing::Size(33, 20);
			this->Z2box->TabIndex = 58;
			// 
			// X3box
			// 
			this->X3box->Location = System::Drawing::Point(604, 63);
			this->X3box->Name = L"X3box";
			this->X3box->Size = System::Drawing::Size(33, 20);
			this->X3box->TabIndex = 59;
			// 
			// Y3box
			// 
			this->Y3box->Location = System::Drawing::Point(690, 63);
			this->Y3box->Name = L"Y3box";
			this->Y3box->Size = System::Drawing::Size(33, 20);
			this->Y3box->TabIndex = 60;
			// 
			// Z3box
			// 
			this->Z3box->Location = System::Drawing::Point(771, 63);
			this->Z3box->Name = L"Z3box";
			this->Z3box->Size = System::Drawing::Size(33, 20);
			this->Z3box->TabIndex = 61;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(454, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 133);
			this->button1->TabIndex = 62;
			this->button1->Text = L"РАССЧЕТ ОКОНЧЕН";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label32->Location = System::Drawing::Point(115, 24);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(68, 20);
			this->label32->TabIndex = 63;
			this->label32->Text = L"Point A: ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label33->Location = System::Drawing::Point(370, 24);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(68, 20);
			this->label33->TabIndex = 64;
			this->label33->Text = L"Point B: ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label34->Location = System::Drawing::Point(647, 24);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(68, 20);
			this->label34->TabIndex = 65;
			this->label34->Text = L"Point C: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(877, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(524, 518);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 66;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1457, 602);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Z3box);
			this->Controls->Add(this->Y3box);
			this->Controls->Add(this->X3box);
			this->Controls->Add(this->Z2box);
			this->Controls->Add(this->Y2box);
			this->Controls->Add(this->X2box);
			this->Controls->Add(this->Z1box);
			this->Controls->Add(this->Y1box);
			this->Controls->Add(this->X1box);
			this->Controls->Add(this->isTriangle);
			this->Controls->Add(this->SymOz);
			this->Controls->Add(this->SymOy);
			this->Controls->Add(this->triangleArea);
			this->Controls->Add(this->SymOx);
			this->Controls->Add(this->distancetoxyz);
			this->Controls->Add(this->pointMult);
			this->Controls->Add(this->pointComp);
			this->Controls->Add(this->pointEqu);
			this->Controls->Add(this->distanceto0);
			this->Controls->Add(this->SymyOz);
			this->Controls->Add(this->SymxOz);
			this->Controls->Add(this->SymxOy);
			this->Controls->Add(this->Sym0);
			this->Controls->Add(this->bothOct);
			this->Controls->Add(this->whatOct);
			this->Controls->Add(this->yOzPl);
			this->Controls->Add(this->xOzPl);
			this->Controls->Add(this->xOyPl);
			this->Controls->Add(this->OzOs);
			this->Controls->Add(this->OyOs);
			this->Controls->Add(this->OxOs);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1473, 641);
			this->MinimumSize = System::Drawing::Size(1473, 641);
			this->Name = L"MyForm";
			this->Text = L"realPoint";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AboutProgramm_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e);
};
}
