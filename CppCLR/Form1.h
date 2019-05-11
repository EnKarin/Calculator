#include "../Calculator/Pars.cpp"
#include "../Calculator/GetFirNum.cpp"
#include "../Calculator/GetSecNum.cpp"
#include "../Calculator/Diff.cpp"
#include "../Calculator/Div.cpp"
#include "../Calculator/Expon.cpp"
#include "../Calculator/Root.cpp"
#include "../Calculator/Sum.cpp"
#include "../Calculator/Multi.cpp"
#include "../Calculator/Replace.cpp"
#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDisplay->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblDisplay->Location = System::Drawing::Point(12, 30);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(478, 51);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(42, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(124, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 69);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(209, 181);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 69);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(42, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 69);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(124, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 69);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(209, 265);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 69);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(42, 352);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(64, 69);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(124, 352);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 69);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(209, 352);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 69);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(42, 437);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 69);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(124, 437);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(64, 69);
			this->button11->TabIndex = 11;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(209, 437);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(64, 69);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(327, 352);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 154);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(403, 437);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 69);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(403, 352);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 69);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(327, 265);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(64, 69);
			this->button16->TabIndex = 16;
			this->button16->Text = L"X^2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(403, 265);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(72, 69);
			this->button17->TabIndex = 17;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(327, 181);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(64, 69);
			this->button18->TabIndex = 18;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(403, 181);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(72, 69);
			this->button19->TabIndex = 19;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(24, 97);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(112, 69);
			this->button20->TabIndex = 20;
			this->button20->Text = L"(";
			this->button20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button21->Location = System::Drawing::Point(172, 97);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(118, 69);
			this->button21->TabIndex = 21;
			this->button21->Text = L")";
			this->button21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(312, 97);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(163, 69);
			this->button22->TabIndex = 22;
			this->button22->Text = L"Backspace";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(502, 533);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblDisplay);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}

		int firstnum;
		int secondnum;
		int Result;
		char operation;
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "Sqrt";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "Sqrt";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "1";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "1";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "2";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "2";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "3";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "3";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "4";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "4";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "5";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "5";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "6";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "6";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "7";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "7";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "8";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "8";
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "9";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "9";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "0";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "0";
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "step";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "step";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = ",";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + ",";
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "+";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "+";
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "-";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "-";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "*";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "*";
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = "/";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + "/";
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lblDisplay->Text == "0") {
		lblDisplay->Text = ")";

	}
	else {
		lblDisplay->Text = (lblDisplay->Text) + ")";
	}
}
private:
	System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "(";

		}
		else {
			lblDisplay->Text = (lblDisplay->Text) + "(";
		}
	}

	System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		lblDisplay->Text = Сlear(lblDisplay->Text);
	}

	System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		lblDisplay->Text = Delete(lblDisplay->Text);
	}

	System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		lblDisplay->Text = parse(lblDisplay->Text);
	}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
}
;
};
