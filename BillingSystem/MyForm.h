#pragma once
#include <exception>

namespace BillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double hummus = 4.99;
		double humTotal = 0.00;
		double tabooli = 5.99;
		double tabTotal = 0.00;
		double falafel = 3.99;
		double falTotal = 0.00;
		double kibbee = 4.99;
		double kibTotal = 0.00;
		double baklava = 4.99;
		double bakTotal = 0.00;
		double yogurt = 4.99;
		double yogTotal = 0.00;
		double veggies = 0.99;
		double vegTotal = 0.00;
		double beans = 2.99;
		double bTotal = 0.00;
		double chicken = 7.99;
		double chicTotal = 0.00;
		double lamb = 9.99;
		double lamTotal = 0.00;
		double pasta = 3.89;
		double pTotal = 0.00;
		double turnips = 2.19;
		double turnTotal = 0.00;
		double total = 0.00;
		double tax = .06;
		

	private: System::Windows::Forms::Button^ totalHandler;
		   int qty = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnReciept;
	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ checkoutTotal;

	private: System::Windows::Forms::Label^ labelYogurt;
	private: System::Windows::Forms::Label^ labelVeggies;


	private: System::Windows::Forms::Label^ labelBaklava;
	private: System::Windows::Forms::Label^ labelPasta;


	private: System::Windows::Forms::Label^ labelKibbee;
	private: System::Windows::Forms::Label^ labelBeans;


	private: System::Windows::Forms::Label^ labelFalafel;
	private: System::Windows::Forms::Label^ labelLamb;


	private: System::Windows::Forms::Label^ labelTabooli;
	private: System::Windows::Forms::Label^ labelChicken;


	private: System::Windows::Forms::Label^ labelHummus;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numTurnips;

	private: System::Windows::Forms::NumericUpDown^ numYogurt;
	private: System::Windows::Forms::NumericUpDown^ numVeggies;


	private: System::Windows::Forms::NumericUpDown^ numBaklava;
	private: System::Windows::Forms::NumericUpDown^ numPasta;


	private: System::Windows::Forms::NumericUpDown^ numKibbee;
	private: System::Windows::Forms::NumericUpDown^ numBeans;


	private: System::Windows::Forms::NumericUpDown^ numFalafel;
	private: System::Windows::Forms::NumericUpDown^ numLamb;


	private: System::Windows::Forms::NumericUpDown^ numChicken;

	private: System::Windows::Forms::NumericUpDown^ numTabooli;

	private: System::Windows::Forms::NumericUpDown^ numHummus;
	private: System::Windows::Forms::Label^ quanityLabel;
private: System::Windows::Forms::Label^ checkoutTax;



	private: System::Windows::Forms::Label^ labelTurnips;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ taxLabel;
private: System::Windows::Forms::Label^ totalLabel;


	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label34;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->taxLabel = (gcnew System::Windows::Forms::Label());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->checkoutTotal = (gcnew System::Windows::Forms::Label());
			this->quanityLabel = (gcnew System::Windows::Forms::Label());
			this->checkoutTax = (gcnew System::Windows::Forms::Label());
			this->labelYogurt = (gcnew System::Windows::Forms::Label());
			this->labelTurnips = (gcnew System::Windows::Forms::Label());
			this->labelVeggies = (gcnew System::Windows::Forms::Label());
			this->labelBaklava = (gcnew System::Windows::Forms::Label());
			this->labelPasta = (gcnew System::Windows::Forms::Label());
			this->labelKibbee = (gcnew System::Windows::Forms::Label());
			this->labelBeans = (gcnew System::Windows::Forms::Label());
			this->labelFalafel = (gcnew System::Windows::Forms::Label());
			this->labelLamb = (gcnew System::Windows::Forms::Label());
			this->labelTabooli = (gcnew System::Windows::Forms::Label());
			this->labelChicken = (gcnew System::Windows::Forms::Label());
			this->labelHummus = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numTurnips = (gcnew System::Windows::Forms::NumericUpDown());
			this->numYogurt = (gcnew System::Windows::Forms::NumericUpDown());
			this->numVeggies = (gcnew System::Windows::Forms::NumericUpDown());
			this->numBaklava = (gcnew System::Windows::Forms::NumericUpDown());
			this->numPasta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numKibbee = (gcnew System::Windows::Forms::NumericUpDown());
			this->numBeans = (gcnew System::Windows::Forms::NumericUpDown());
			this->numFalafel = (gcnew System::Windows::Forms::NumericUpDown());
			this->numLamb = (gcnew System::Windows::Forms::NumericUpDown());
			this->numChicken = (gcnew System::Windows::Forms::NumericUpDown());
			this->numTabooli = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHummus = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnReciept = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->totalHandler = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnips))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numYogurt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVeggies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBaklava))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPasta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numKibbee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFalafel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLamb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numChicken))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTabooli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHummus))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1514, 820);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->totalHandler);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->taxLabel);
			this->panel3->Controls->Add(this->totalLabel);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->checkoutTotal);
			this->panel3->Controls->Add(this->quanityLabel);
			this->panel3->Controls->Add(this->checkoutTax);
			this->panel3->Controls->Add(this->labelYogurt);
			this->panel3->Controls->Add(this->labelTurnips);
			this->panel3->Controls->Add(this->labelVeggies);
			this->panel3->Controls->Add(this->labelBaklava);
			this->panel3->Controls->Add(this->labelPasta);
			this->panel3->Controls->Add(this->labelKibbee);
			this->panel3->Controls->Add(this->labelBeans);
			this->panel3->Controls->Add(this->labelFalafel);
			this->panel3->Controls->Add(this->labelLamb);
			this->panel3->Controls->Add(this->labelTabooli);
			this->panel3->Controls->Add(this->labelChicken);
			this->panel3->Controls->Add(this->labelHummus);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->numTurnips);
			this->panel3->Controls->Add(this->numYogurt);
			this->panel3->Controls->Add(this->numVeggies);
			this->panel3->Controls->Add(this->numBaklava);
			this->panel3->Controls->Add(this->numPasta);
			this->panel3->Controls->Add(this->numKibbee);
			this->panel3->Controls->Add(this->numBeans);
			this->panel3->Controls->Add(this->numFalafel);
			this->panel3->Controls->Add(this->numLamb);
			this->panel3->Controls->Add(this->numChicken);
			this->panel3->Controls->Add(this->numTabooli);
			this->panel3->Controls->Add(this->numHummus);
			this->panel3->Location = System::Drawing::Point(15, 106);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1004, 607);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(356, 497);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(81, 24);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Quanity";
			this->label31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// taxLabel
			// 
			this->taxLabel->AutoSize = true;
			this->taxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->taxLabel->Location = System::Drawing::Point(590, 497);
			this->taxLabel->Name = L"taxLabel";
			this->taxLabel->Size = System::Drawing::Size(45, 24);
			this->taxLabel->TabIndex = 3;
			this->taxLabel->Text = L"Tax";
			this->taxLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->Location = System::Drawing::Point(821, 497);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(56, 24);
			this->totalLabel->TabIndex = 3;
			this->totalLabel->Text = L"Total";
			this->totalLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(23, 17);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(100, 37);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Menu";
			this->label30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkoutTotal
			// 
			this->checkoutTotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkoutTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->checkoutTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkoutTotal->Location = System::Drawing::Point(737, 533);
			this->checkoutTotal->Name = L"checkoutTotal";
			this->checkoutTotal->Size = System::Drawing::Size(230, 42);
			this->checkoutTotal->TabIndex = 2;
			this->checkoutTotal->Text = L"$0.00";
			this->checkoutTotal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->checkoutTotal->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// quanityLabel
			// 
			this->quanityLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->quanityLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->quanityLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quanityLabel->Location = System::Drawing::Point(280, 533);
			this->quanityLabel->Name = L"quanityLabel";
			this->quanityLabel->Size = System::Drawing::Size(226, 42);
			this->quanityLabel->TabIndex = 2;
			this->quanityLabel->Text = L"0";
			this->quanityLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->quanityLabel->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// checkoutTax
			// 
			this->checkoutTax->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkoutTax->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->checkoutTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkoutTax->Location = System::Drawing::Point(512, 533);
			this->checkoutTax->Name = L"checkoutTax";
			this->checkoutTax->Size = System::Drawing::Size(219, 42);
			this->checkoutTax->TabIndex = 2;
			this->checkoutTax->Text = L"$0.00";
			this->checkoutTax->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->checkoutTax->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// labelYogurt
			// 
			this->labelYogurt->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelYogurt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelYogurt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelYogurt->Location = System::Drawing::Point(336, 351);
			this->labelYogurt->Name = L"labelYogurt";
			this->labelYogurt->Size = System::Drawing::Size(127, 42);
			this->labelYogurt->TabIndex = 2;
			this->labelYogurt->Text = L"$0.00";
			this->labelYogurt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelYogurt->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// labelTurnips
			// 
			this->labelTurnips->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelTurnips->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTurnips->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTurnips->Location = System::Drawing::Point(825, 348);
			this->labelTurnips->Name = L"labelTurnips";
			this->labelTurnips->Size = System::Drawing::Size(141, 42);
			this->labelTurnips->TabIndex = 2;
			this->labelTurnips->Text = L"$0.00";
			this->labelTurnips->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelTurnips->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// labelVeggies
			// 
			this->labelVeggies->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelVeggies->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelVeggies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVeggies->Location = System::Drawing::Point(825, 297);
			this->labelVeggies->Name = L"labelVeggies";
			this->labelVeggies->Size = System::Drawing::Size(141, 42);
			this->labelVeggies->TabIndex = 2;
			this->labelVeggies->Text = L"$0.00";
			this->labelVeggies->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelVeggies->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// labelBaklava
			// 
			this->labelBaklava->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelBaklava->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelBaklava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBaklava->Location = System::Drawing::Point(336, 300);
			this->labelBaklava->Name = L"labelBaklava";
			this->labelBaklava->Size = System::Drawing::Size(127, 42);
			this->labelBaklava->TabIndex = 2;
			this->labelBaklava->Text = L"$0.00";
			this->labelBaklava->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelPasta
			// 
			this->labelPasta->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelPasta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelPasta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPasta->Location = System::Drawing::Point(825, 246);
			this->labelPasta->Name = L"labelPasta";
			this->labelPasta->Size = System::Drawing::Size(141, 42);
			this->labelPasta->TabIndex = 2;
			this->labelPasta->Text = L"$0.00";
			this->labelPasta->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelPasta->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// labelKibbee
			// 
			this->labelKibbee->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelKibbee->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelKibbee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelKibbee->Location = System::Drawing::Point(336, 245);
			this->labelKibbee->Name = L"labelKibbee";
			this->labelKibbee->Size = System::Drawing::Size(127, 42);
			this->labelKibbee->TabIndex = 2;
			this->labelKibbee->Text = L"$0.00";
			this->labelKibbee->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelKibbee->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// labelBeans
			// 
			this->labelBeans->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelBeans->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBeans->Location = System::Drawing::Point(825, 190);
			this->labelBeans->Name = L"labelBeans";
			this->labelBeans->Size = System::Drawing::Size(141, 42);
			this->labelBeans->TabIndex = 2;
			this->labelBeans->Text = L"$0.00";
			this->labelBeans->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelBeans->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// labelFalafel
			// 
			this->labelFalafel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelFalafel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelFalafel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFalafel->Location = System::Drawing::Point(336, 189);
			this->labelFalafel->Name = L"labelFalafel";
			this->labelFalafel->Size = System::Drawing::Size(127, 42);
			this->labelFalafel->TabIndex = 2;
			this->labelFalafel->Text = L"$0.00";
			this->labelFalafel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelFalafel->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// labelLamb
			// 
			this->labelLamb->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelLamb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLamb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLamb->Location = System::Drawing::Point(825, 133);
			this->labelLamb->Name = L"labelLamb";
			this->labelLamb->Size = System::Drawing::Size(141, 42);
			this->labelLamb->TabIndex = 2;
			this->labelLamb->Text = L"$0.00";
			this->labelLamb->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelLamb->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// labelTabooli
			// 
			this->labelTabooli->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelTabooli->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTabooli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTabooli->Location = System::Drawing::Point(336, 132);
			this->labelTabooli->Name = L"labelTabooli";
			this->labelTabooli->Size = System::Drawing::Size(127, 42);
			this->labelTabooli->TabIndex = 2;
			this->labelTabooli->Text = L"$0.00";
			this->labelTabooli->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelTabooli->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// labelChicken
			// 
			this->labelChicken->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelChicken->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelChicken->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelChicken->Location = System::Drawing::Point(825, 78);
			this->labelChicken->Name = L"labelChicken";
			this->labelChicken->Size = System::Drawing::Size(141, 42);
			this->labelChicken->TabIndex = 2;
			this->labelChicken->Text = L"$0.00";
			this->labelChicken->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelChicken->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// labelHummus
			// 
			this->labelHummus->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelHummus->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelHummus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHummus->Location = System::Drawing::Point(336, 77);
			this->labelHummus->Name = L"labelHummus";
			this->labelHummus->Size = System::Drawing::Size(127, 42);
			this->labelHummus->TabIndex = 2;
			this->labelHummus->Text = L"$0.00";
			this->labelHummus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelHummus->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(509, 353);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 31);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Turnips";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(43, 538);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(152, 37);
			this->label29->TabIndex = 1;
			this->label29->Text = L"Checkout";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(27, 355);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 31);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Yogurt";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(502, 303);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(112, 31);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Veggies";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 298);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 31);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Baklava";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(532, 251);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 31);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Pasta";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(27, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 31);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Kibbee";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(525, 197);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(91, 31);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Beans";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(27, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 31);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Falafel";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(532, 140);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(81, 31);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Lamb";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 31);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Taboolie";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(509, 84);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 31);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Chicken";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hummus";
			// 
			// numTurnips
			// 
			this->numTurnips->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTurnips->Location = System::Drawing::Point(634, 352);
			this->numTurnips->Name = L"numTurnips";
			this->numTurnips->Size = System::Drawing::Size(168, 38);
			this->numTurnips->TabIndex = 0;
			this->numTurnips->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numTurnips->ValueChanged += gcnew System::EventHandler(this, &MyForm::turnipsHandler);
			// 
			// numYogurt
			// 
			this->numYogurt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numYogurt->Location = System::Drawing::Point(145, 355);
			this->numYogurt->Name = L"numYogurt";
			this->numYogurt->Size = System::Drawing::Size(168, 40);
			this->numYogurt->TabIndex = 0;
			this->numYogurt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numYogurt->ValueChanged += gcnew System::EventHandler(this, &MyForm::yogurtHandler);
			// 
			// numVeggies
			// 
			this->numVeggies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numVeggies->Location = System::Drawing::Point(634, 301);
			this->numVeggies->Name = L"numVeggies";
			this->numVeggies->Size = System::Drawing::Size(168, 38);
			this->numVeggies->TabIndex = 0;
			this->numVeggies->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numVeggies->ValueChanged += gcnew System::EventHandler(this, &MyForm::veggiesHandler);
			// 
			// numBaklava
			// 
			this->numBaklava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBaklava->Location = System::Drawing::Point(145, 298);
			this->numBaklava->Name = L"numBaklava";
			this->numBaklava->Size = System::Drawing::Size(168, 38);
			this->numBaklava->TabIndex = 0;
			this->numBaklava->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBaklava->ValueChanged += gcnew System::EventHandler(this, &MyForm::baklavaHandler);
			// 
			// numPasta
			// 
			this->numPasta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPasta->Location = System::Drawing::Point(634, 244);
			this->numPasta->Name = L"numPasta";
			this->numPasta->Size = System::Drawing::Size(168, 38);
			this->numPasta->TabIndex = 0;
			this->numPasta->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numPasta->ValueChanged += gcnew System::EventHandler(this, &MyForm::pastaHandler);
			// 
			// numKibbee
			// 
			this->numKibbee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numKibbee->Location = System::Drawing::Point(145, 245);
			this->numKibbee->Name = L"numKibbee";
			this->numKibbee->Size = System::Drawing::Size(168, 38);
			this->numKibbee->TabIndex = 0;
			this->numKibbee->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numKibbee->ValueChanged += gcnew System::EventHandler(this, &MyForm::kibbeeHandler);
			// 
			// numBeans
			// 
			this->numBeans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBeans->Location = System::Drawing::Point(634, 190);
			this->numBeans->Name = L"numBeans";
			this->numBeans->Size = System::Drawing::Size(168, 38);
			this->numBeans->TabIndex = 0;
			this->numBeans->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBeans->ValueChanged += gcnew System::EventHandler(this, &MyForm::beanHandler);
			// 
			// numFalafel
			// 
			this->numFalafel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numFalafel->Location = System::Drawing::Point(145, 188);
			this->numFalafel->Name = L"numFalafel";
			this->numFalafel->Size = System::Drawing::Size(168, 38);
			this->numFalafel->TabIndex = 0;
			this->numFalafel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numFalafel->ValueChanged += gcnew System::EventHandler(this, &MyForm::falafelHandler);
			// 
			// numLamb
			// 
			this->numLamb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numLamb->Location = System::Drawing::Point(634, 133);
			this->numLamb->Name = L"numLamb";
			this->numLamb->Size = System::Drawing::Size(168, 38);
			this->numLamb->TabIndex = 0;
			this->numLamb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numLamb->ValueChanged += gcnew System::EventHandler(this, &MyForm::lambHandler);
			// 
			// numChicken
			// 
			this->numChicken->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numChicken->Location = System::Drawing::Point(634, 77);
			this->numChicken->Name = L"numChicken";
			this->numChicken->Size = System::Drawing::Size(168, 38);
			this->numChicken->TabIndex = 0;
			this->numChicken->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numChicken->ValueChanged += gcnew System::EventHandler(this, &MyForm::chickenHandler);
			// 
			// numTabooli
			// 
			this->numTabooli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numTabooli->Location = System::Drawing::Point(145, 132);
			this->numTabooli->Name = L"numTabooli";
			this->numTabooli->Size = System::Drawing::Size(168, 38);
			this->numTabooli->TabIndex = 0;
			this->numTabooli->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numTabooli->ValueChanged += gcnew System::EventHandler(this, &MyForm::tabooliHandler);
			// 
			// numHummus
			// 
			this->numHummus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numHummus->Location = System::Drawing::Point(145, 77);
			this->numHummus->Name = L"numHummus";
			this->numHummus->Size = System::Drawing::Size(168, 38);
			this->numHummus->TabIndex = 0;
			this->numHummus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numHummus->ValueChanged += gcnew System::EventHandler(this, &MyForm::hummusHandler);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Info;
			this->panel4->Controls->Add(this->richTextBox1);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Location = System::Drawing::Point(1025, 106);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(476, 607);
			this->panel4->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(29, 64);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(415, 511);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(161, 17);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(123, 37);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Invoice";
			this->label34->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel6->Controls->Add(this->label1);
			this->panel6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->panel6->Location = System::Drawing::Point(12, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1489, 88);
			this->panel6->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(323, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(852, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Billing Management System";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnReciept);
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Location = System::Drawing::Point(12, 719);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1489, 88);
			this->panel5->TabIndex = 0;
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(229, 17);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(197, 54);
			this->btnPrint->TabIndex = 1;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(1057, 17);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(197, 54);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::handleReset);
			// 
			// btnReciept
			// 
			this->btnReciept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReciept->Location = System::Drawing::Point(26, 17);
			this->btnReciept->Name = L"btnReciept";
			this->btnReciept->Size = System::Drawing::Size(197, 54);
			this->btnReciept->TabIndex = 1;
			this->btnReciept->Text = L"Reciept";
			this->btnReciept->UseVisualStyleBackColor = true;
			// 
			// btnTotal
			// 
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->Location = System::Drawing::Point(1260, 17);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(197, 54);
			this->btnTotal->TabIndex = 1;
			this->btnTotal->Text = L"Exit";
			this->btnTotal->UseVisualStyleBackColor = true;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::handleExit);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(12, 719);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1489, 88);
			this->panel1->TabIndex = 0;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// totalHandler
			// 
			this->totalHandler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalHandler->Location = System::Drawing::Point(50, 533);
			this->totalHandler->Name = L"totalHandler";
			this->totalHandler->Size = System::Drawing::Size(161, 42);
			this->totalHandler->TabIndex = 1;
			this->totalHandler->Text = L"Total";
			this->totalHandler->UseVisualStyleBackColor = true;
			this->totalHandler->Click += gcnew System::EventHandler(this, &MyForm::totalHandler_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1538, 844);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnips))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numYogurt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numVeggies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBaklava))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPasta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numKibbee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBeans))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFalafel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLamb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numChicken))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTabooli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHummus))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void handleExit(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		System::Windows::Forms::DialogResult exit;
		exit = MessageBox::Show("Are you sure you want to exit?", "Billing Management", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (exit == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void handleReset(System::Object^ sender, System::EventArgs^ e) {
	try {
		//numbers for hummus
		numHummus->Value = 0; 
		numTabooli->Value = 0;
		numFalafel->Value = 0;
		numKibbee->Value = 0;
		numBaklava->Value = 0;
		numYogurt->Value = 0;
		numChicken->Value = 0;
		numLamb->Value = 0;
		numBeans->Value = 0;
		numPasta->Value = 0;
		numVeggies->Value = 0;
		numTurnips->Value = 0;
		
		//labels
		labelHummus->Text = "$0.00"; 
		labelTabooli->Text = "$0.00";
		labelFalafel->Text ="$0.00";
		labelKibbee->Text = "$0.00";
		labelBaklava->Text = "$0.00";
		labelYogurt->Text = "$0.00";
		labelChicken->Text = "$0.00";
		labelLamb->Text = "$0.00";
		labelBeans->Text = "$0.00";
		labelPasta->Text = "$0.00";
		labelVeggies->Text = "$0.00";
		labelTurnips->Text = "$0.00";

		//totals
		quanityLabel->Text = "";
		taxLabel->Text = "";
		totalLabel->Text = "";


	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

private: System::Void hummusHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numHummus->Value);
	double hummusTotal = qty * hummus;
	humTotal = hummusTotal;
	labelHummus->Text = String::Format("{0:c2}", hummusTotal);
}

private: System::Void tabooliHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numTabooli->Value);
	double tabooliTotal = qty * tabooli;
	tabTotal = tabooliTotal;
	labelTabooli->Text = String::Format("{0:c2}", tabooliTotal);
}

private: System::Void falafelHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numFalafel->Value);
	double falafelTotal = qty * falafel;
	falTotal = falafelTotal;
	labelFalafel->Text = String::Format("{0:c2}", falafelTotal);
}

private: System::Void kibbeeHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numKibbee->Value);
	double kibbeeTotal = qty * kibbee;
	kibTotal = kibbeeTotal;
	labelKibbee->Text = String::Format("{0:c2}", kibbeeTotal);
}

private: System::Void baklavaHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numBaklava->Value);
	double baklavaTotal = qty * baklava;
	bakTotal = baklavaTotal;
	labelBaklava->Text = String::Format("{0:c2}", baklavaTotal);
}

private: System::Void yogurtHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numYogurt->Value);
	double yogurtTotal = qty * yogurt;
	yogTotal = yogurtTotal;
	labelYogurt->Text = String::Format("{0:c2}", yogurtTotal);
}

private: System::Void chickenHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numChicken->Value);
	double chickenTotal = qty * chicken;
	chicTotal = chickenTotal;
	labelChicken->Text = String::Format("{0:c2}", chickenTotal);
}

private: System::Void lambHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numLamb->Value);
	double lambTotal = qty * lamb;
	lamTotal = lambTotal;
	labelLamb->Text = String::Format("{0:c2}", lambTotal);
}

private: System::Void beanHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numBeans->Value);
	double beansTotal = qty * beans;
	bTotal = beansTotal;
	labelBeans->Text = String::Format("{0:c2}", beansTotal);
}

private: System::Void pastaHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numPasta->Value);
	double pastaTotal = qty * pasta;
	pTotal = pastaTotal;
	labelPasta->Text = String::Format("{0:c2}", pastaTotal);
}

private: System::Void veggiesHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numVeggies->Value);
	double veggiesTotal = qty * veggies;
	vegTotal = veggiesTotal;
	labelVeggies->Text = String::Format("{0:c2}", veggiesTotal);
}

private: System::Void turnipsHandler(System::Object^ sender, System::EventArgs^ e) {
	double qty = Convert::ToDouble(numTurnips->Value);
	double turnipsTotal = qty * turnips;
	turnTotal = turnipsTotal;
	labelTurnips->Text = String::Format("{0:c2}", turnipsTotal);
}
private: System::Void totalHandler_Click(System::Object^ sender, System::EventArgs^ e) {
	double q[11];
	double sum;
	q[0] = Convert::ToDouble(numHummus->Value);
	q[1] = Convert::ToDouble(numTabooli->Value);
	q[2] = Convert::ToDouble(numFalafel->Value);
	q[3] = Convert::ToDouble(numKibbee->Value);
	q[4] = Convert::ToDouble(numYogurt->Value);
	q[5] = Convert::ToDouble(numBeans->Value);
	q[6] = Convert::ToDouble(numBaklava->Value);
	q[7] = Convert::ToDouble(numChicken->Value);
	q[8] = Convert::ToDouble(numLamb->Value);
	q[9] = Convert::ToDouble(numTurnips->Value);
	q[10] = Convert::ToDouble(numVeggies->Value);
	q[11] = Convert::ToDouble(numPasta->Value);


}
};
}

