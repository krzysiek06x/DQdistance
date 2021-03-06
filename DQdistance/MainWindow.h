#include "true__random_number_generator.h"

#pragma once

namespace DQdistance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Podsumowanie informacji o MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{


	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_name;
	private: System::Windows::Forms::TextBox^  textBox_kilometers;


	private: System::Windows::Forms::Button^  button_generate;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs�ugi projektanta � nie nale�y modyfikowa� 
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_kilometers = (gcnew System::Windows::Forms::TextBox());
			this->button_generate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Imi� i nazwisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Liczba kilometr�w do rozpisania";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(373, 59);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(200, 20);
			this->textBox_name->TabIndex = 2;
			// 
			// textBox_kilometers
			// 
			this->textBox_kilometers->Location = System::Drawing::Point(373, 93);
			this->textBox_kilometers->Name = L"textBox_kilometers";
			this->textBox_kilometers->Size = System::Drawing::Size(200, 20);
			this->textBox_kilometers->TabIndex = 3;
			// 
			// button_generate
			// 
			this->button_generate->Location = System::Drawing::Point(235, 172);
			this->button_generate->Name = L"button_generate";
			this->button_generate->Size = System::Drawing::Size(305, 23);
			this->button_generate->TabIndex = 4;
			this->button_generate->Text = L"generuj";
			this->button_generate->UseVisualStyleBackColor = true;
			this->button_generate->Click += gcnew System::EventHandler(this, &MainWindow::button_generate_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 390);
			this->Controls->Add(this->button_generate);
			this->Controls->Add(this->textBox_kilometers);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_generate_Click(System::Object^  sender, System::EventArgs^  e) {

	int test = true_random_number_generator_generate_number();

	MessageBox::Show("test: " + test);

	}
};
}
