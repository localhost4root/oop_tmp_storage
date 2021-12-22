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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(500, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Voitsehovskuy-PC\\source\\repos\\test_OOP_project\\test_OOP_project\\img\\exit"
				L"_icon.jpg";
			this->pictureBox1->Location = System::Drawing::Point(9, 44);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 29);
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
			this->menuStrip1->Size = System::Drawing::Size(591, 24);
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
			this->платежіToolStripMenuItem->Text = L"Сплатити замовлення";
			this->платежіToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserForm::платежіToolStripMenuItem_Click);
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
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(12, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"СС";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(12, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"BCC";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(381, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Заблокувати кредитну картку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(381, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 33);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Погасити заборгованність";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(381, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 33);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Перерахувати кошти на особистий рахунок";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(381, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 33);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Анулювати баланс";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(381, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 33);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Перевести кошти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &UserForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(381, 212);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 33);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Отримати реквізити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(12, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 33);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ACCB";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(186, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Ваші замовлення:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(368, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(368, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button7->Location = System::Drawing::Point(190, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 44);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Оплатити замовлення";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &UserForm::button7_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\Users\\Voitsehovskuy-PC\\source\\repos\\test_OOP_project\\test_OOP_project\\img\\info"
				L"_icon.jpg";
			this->pictureBox2->Location = System::Drawing::Point(61, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(29, 29);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"C:\\Users\\Voitsehovskuy-PC\\source\\repos\\test_OOP_project\\test_OOP_project\\img\\info"
				L"rmation (1).png";
			this->pictureBox3->Location = System::Drawing::Point(109, 44);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 29);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 319);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void платежіToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
};
}
