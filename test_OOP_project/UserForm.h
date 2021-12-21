#pragma once

namespace testOOPproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вивестиБалансКредитноїКарткиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ кредитнаКартаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рахунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ платежіToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ налаштуванняДляДодаткуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ допомогаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ звернутисьДоОператораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зворотнійДзвінокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ чатЗАдміністраторомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проДодатокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ версіяДодаткуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розробникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bagBountyToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вивестиБалансКредитноїКарткиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->кредитнаКартаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рахунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->платежіToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->налаштуванняДляДодаткуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->допомогаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->звернутисьДоОператораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зворотнійДзвінокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чатЗАдміністраторомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проДодатокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->версіяДодаткуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розробникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bagBountyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(572, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 22);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UserForm::pictureBox1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->вивестиБалансКредитноїКарткиToolStripMenuItem,
					this->допомогаToolStripMenuItem, this->проДодатокToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(624, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вивестиБалансКредитноїКарткиToolStripMenuItem
			// 
			this->вивестиБалансКредитноїКарткиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->кредитнаКартаToolStripMenuItem,
					this->рахунокToolStripMenuItem, this->платежіToolStripMenuItem, this->налаштуванняДляДодаткуToolStripMenuItem
			});
			this->вивестиБалансКредитноїКарткиToolStripMenuItem->Name = L"вивестиБалансКредитноїКарткиToolStripMenuItem";
			this->вивестиБалансКредитноїКарткиToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->вивестиБалансКредитноїКарткиToolStripMenuItem->Text = L"Дія з акаунтом";
			this->вивестиБалансКредитноїКарткиToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserForm::вивестиБалансКредитноїКарткиToolStripMenuItem_Click);
			// 
			// кредитнаКартаToolStripMenuItem
			// 
			this->кредитнаКартаToolStripMenuItem->Name = L"кредитнаКартаToolStripMenuItem";
			this->кредитнаКартаToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->кредитнаКартаToolStripMenuItem->Text = L"Кредитна карта";
			this->кредитнаКартаToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserForm::кредитнаКартаToolStripMenuItem_Click);
			// 
			// рахунокToolStripMenuItem
			// 
			this->рахунокToolStripMenuItem->Name = L"рахунокToolStripMenuItem";
			this->рахунокToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->рахунокToolStripMenuItem->Text = L"Рахунок";
			this->рахунокToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserForm::рахунокToolStripMenuItem_Click);
			// 
			// платежіToolStripMenuItem
			// 
			this->платежіToolStripMenuItem->Name = L"платежіToolStripMenuItem";
			this->платежіToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->платежіToolStripMenuItem->Text = L"Платежі";
			// 
			// налаштуванняДляДодаткуToolStripMenuItem
			// 
			this->налаштуванняДляДодаткуToolStripMenuItem->Name = L"налаштуванняДляДодаткуToolStripMenuItem";
			this->налаштуванняДляДодаткуToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->налаштуванняДляДодаткуToolStripMenuItem->Text = L"Налаштування для додатку";
			// 
			// допомогаToolStripMenuItem
			// 
			this->допомогаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->звернутисьДоОператораToolStripMenuItem,
					this->зворотнійДзвінокToolStripMenuItem, this->чатЗАдміністраторомToolStripMenuItem
			});
			this->допомогаToolStripMenuItem->Name = L"допомогаToolStripMenuItem";
			this->допомогаToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->допомогаToolStripMenuItem->Text = L"Допомога";
			// 
			// звернутисьДоОператораToolStripMenuItem
			// 
			this->звернутисьДоОператораToolStripMenuItem->Name = L"звернутисьДоОператораToolStripMenuItem";
			this->звернутисьДоОператораToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->звернутисьДоОператораToolStripMenuItem->Text = L"Відповіді на часті запитання";
			// 
			// зворотнійДзвінокToolStripMenuItem
			// 
			this->зворотнійДзвінокToolStripMenuItem->Name = L"зворотнійДзвінокToolStripMenuItem";
			this->зворотнійДзвінокToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->зворотнійДзвінокToolStripMenuItem->Text = L"Зворотній дзвінок";
			// 
			// чатЗАдміністраторомToolStripMenuItem
			// 
			this->чатЗАдміністраторомToolStripMenuItem->Name = L"чатЗАдміністраторомToolStripMenuItem";
			this->чатЗАдміністраторомToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->чатЗАдміністраторомToolStripMenuItem->Text = L"Чат з адміністратором";
			// 
			// проДодатокToolStripMenuItem
			// 
			this->проДодатокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->версіяДодаткуToolStripMenuItem,
					this->розробникиToolStripMenuItem, this->bagBountyToolStripMenuItem
			});
			this->проДодатокToolStripMenuItem->Name = L"проДодатокToolStripMenuItem";
			this->проДодатокToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->проДодатокToolStripMenuItem->Text = L"Про додаток";
			// 
			// версіяДодаткуToolStripMenuItem
			// 
			this->версіяДодаткуToolStripMenuItem->Name = L"версіяДодаткуToolStripMenuItem";
			this->версіяДодаткуToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->версіяДодаткуToolStripMenuItem->Text = L"Версія додатку";
			// 
			// розробникиToolStripMenuItem
			// 
			this->розробникиToolStripMenuItem->Name = L"розробникиToolStripMenuItem";
			this->розробникиToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->розробникиToolStripMenuItem->Text = L"Розробники";
			// 
			// bagBountyToolStripMenuItem
			// 
			this->bagBountyToolStripMenuItem->Name = L"bagBountyToolStripMenuItem";
			this->bagBountyToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->bagBountyToolStripMenuItem->Text = L"BagBounty";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(41, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(41, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(438, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Розблокувати кредитну картку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(438, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Погасити заборгованність";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(438, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 36);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Перерахувати кошти на особистий рахунок";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(438, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Анулювати баланс";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(438, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Перевести кошти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(438, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(174, 36);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Отримати реквізити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 333);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void вивестиБалансКредитноїКарткиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void кредитнаКартаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void рахунокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
