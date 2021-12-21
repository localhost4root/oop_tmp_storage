#pragma once
#include "msclr\marshal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UserForm.h"
#include "AdminForm.h"
namespace testOOPproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;
	using namespace System::Timers;
	/// <summary>
	/// Сводка для Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		Auth(void)
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
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			
			// 
			// First
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 345);
			this->Name = L"First";
			this->Text = L"First";
			this->ResumeLayout(false);
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());

			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Khaki;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->Location = System::Drawing::Point(139, 92);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 23);
			this->textBox1->TabIndex = 0;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::Khaki;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->maskedTextBox1->Location = System::Drawing::Point(139, 173);
			this->maskedTextBox1->MinimumSize = System::Drawing::Size(197, 34);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(197, 23);
			this->maskedTextBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button1->Location = System::Drawing::Point(160, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Auth::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button2->Location = System::Drawing::Point(182, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Зареєструватись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Auth::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(200, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(195, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пароль";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(484, 362);

			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(500, 400);
			this->MinimumSize = System::Drawing::Size(500, 400);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &Auth::MyForm_Load);

			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = 0;
		int start = 0;


		if (textBox1->Text == "" || maskedTextBox1->Text == "")
		{
			MessageBox::Show("Введіть логін і пароль!");
		}
		else if (textBox1->Text == "Admin" && maskedTextBox1->Text == "Jq45w3h6i")
		{
			AdminForm^ admin = gcnew AdminForm();
			admin->Show();
			textBox1->Clear();
			maskedTextBox1->Clear();
		}
		else if (textBox1->Text == "User" && maskedTextBox1->Text == "User")
		{
			UserForm^ user = gcnew UserForm();
			user->Show();
			textBox1->Clear();
			maskedTextBox1->Clear();
		}
		else
		{
			MessageBox::Show("Не вірний логін чи пароль!");
			maskedTextBox1->Clear();

		}

		

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		/*registr->Show();*/
	}
	};
}
