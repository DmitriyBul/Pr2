#pragma once
#include "Header.h"
#include <string>
 
namespace Project22 {

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
	private: System::Windows::Forms::Label^ explanation;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::TextBox^ num2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ num3;

	private: System::Windows::Forms::Label^ label1;

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
			this->explanation = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// explanation
			// 
			this->explanation->AutoSize = true;
			this->explanation->Location = System::Drawing::Point(23, 34);
			this->explanation->Name = L"explanation";
			this->explanation->Size = System::Drawing::Size(231, 17);
			this->explanation->TabIndex = 0;
			this->explanation->Text = L"Введите серию и номер паспорта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Серия";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Номер";
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(154, 105);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(100, 22);
			this->num1->TabIndex = 3;
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(154, 139);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(100, 22);
			this->num2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(154, 245);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(100, 22);
			this->num3->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Результат";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 300);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->explanation);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int series = System::Convert::ToDouble(num1->Text);
		int number = System::Convert::ToDouble(num2->Text);
		System::String^ a = "incorrect";
		if (series > 6900 && series < 6905 && number > 100000 && number < 800000) {
			a = "correct";
		}
		else {
			a = "incorrect";
		}
		num3->Text = a;
		//num2->Text = System::Convert::ToString(a);
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
