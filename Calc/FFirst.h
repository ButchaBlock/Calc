#pragma once

namespace Calc {

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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Label^ lblMessage;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(360, 285);
			this->btnClose->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(150, 46);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(201, 285);
			this->btnReset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(150, 46);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(360, 5);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(150, 46);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(165, 15);
			this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 25);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(8, 66);
			this->lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(119, 20);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое число:";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(8, 111);
			this->lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(118, 20);
			this->lbl2->TabIndex = 5;
			this->lbl2->Text = L"Второе число:";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(18, 155);
			this->lblResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(93, 20);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"Результат:";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(136, 62);
			this->txt1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(163, 26);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(136, 106);
			this->txt2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(163, 26);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::SystemColors::Menu;
			this->txtResult->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtResult->Location = System::Drawing::Point(136, 151);
			this->txtResult->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(163, 26);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSubtract
			// 
			this->btnSubtract->Location = System::Drawing::Point(360, 57);
			this->btnSubtract->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(150, 46);
			this->btnSubtract->TabIndex = 10;
			this->btnSubtract->Text = L"Вычесть";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(360, 109);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(150, 46);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Location = System::Drawing::Point(360, 162);
			this->btnDivide->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(150, 46);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"Разделить";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// lblMessage
			// 
			this->lblMessage->AutoSize = true;
			this->lblMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMessage->Location = System::Drawing::Point(86, 223);
			this->lblMessage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(0, 23);
			this->lblMessage->TabIndex = 13;
			this->lblMessage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 340);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool DummyProtect() {
		if ((txt1->Text->Length == 0) || (txt2->Text->Length == 0)) {
			return false;
		}
		
		for (int i = 0; i < txt1->Text->Length; ++i) {
			if ((txt1->Text[i] < '0' || txt1->Text[i] > '9') && (txt1->Text[i] != '.') && (txt1->Text[i] != '-')) {
				return false;
			}
			else {
				int counter = 0;
				for (int i = 0; i < txt1->Text->Length; ++i) {
					if (txt1->Text[i] == '.') {
						counter++;
						if (counter > 1) {
							return false;
						}
					}
				}
				int countMinus = 0;
				for (int i = 0; i < txt1->Text->Length; ++i) {
					if (txt1->Text[i] == '-') {
						countMinus++;
						if (countMinus > 1) {
							return false;
						}
						else {
							for (int i = 0; i < txt1->Text->Length; ++i) {
								if (txt1->Text[0] != '-') {
									return false;
								}
							}
						}
					}
				}
			}
		}
		for (int i = 0; i < txt2->Text->Length; ++i) {
			if ((txt2->Text[i] < '0' || txt2->Text[i] > '9') && (txt2->Text[i] != '.') && (txt2->Text[i] != '-')) {
				return false;
			}
			else {
				int counter = 0;
				for (int i = 0; i < txt2->Text->Length; ++i) {
					if (txt2->Text[i] == '.') {
						counter++;
						if (counter > 1) {
							return false;
						}
					}
				}
				int countMinus = 0;
				for (int i = 0; i < txt2->Text->Length; ++i) {
					if (txt2->Text[i] == '-') {
						countMinus++;
						if (countMinus > 1) {
							return false;
						}
						else {
							for (int i = 0; i < txt2->Text->Length; ++i) {
								if (txt2->Text[0] != '-') {
									return false;
								}
							}
						}
					}
				}
			}
		}
		return true;
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->lblMessage->Text = L"";
	}
	private: System::Void btnAdd_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (DummyProtect()) {
			
			double i1, i2, i3;
			this->lblOper->Text = L"Сложение";
			this->lblMessage->Text = L"";
			i1 = System::Double::Parse(txt1->Text);
			i2 = System::Double::Parse(txt2->Text);
			i3 = i1 + i2;
			this->txt1->Text = Convert::ToString(i1);
			this->txt2->Text = Convert::ToString(i2);
			this->txtResult->Text = Convert::ToString(i3);
		}
		else { 
			this->lblMessage->Text = L"Ошибка ввода исходных данных";
			this->txtResult->Text = L"";
		}
	}

	private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DummyProtect()) {
			double i1, i2, i3;
			this->lblOper->Text = L"Вычитание";
			this->lblMessage->Text = L"";
			i1 = System::Double::Parse(txt1->Text);
			i2 = System::Double::Parse(txt2->Text);
			i3 = i1 - i2;
			this->txt1->Text = Convert::ToString(i1);
			this->txt2->Text = Convert::ToString(i2);
			this->txtResult->Text = Convert::ToString(i3);
		}
		else { 
			this->lblMessage->Text = L"Ошибка ввода исходных данных";
			this->txtResult->Text = L"";
		}
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DummyProtect()) {
			double i1, i2, i3;
			this->lblOper->Text = L"Умножение";
			this->lblMessage->Text = L"";
			i1 = System::Double::Parse(txt1->Text);
			i2 = System::Double::Parse(txt2->Text);
			i3 = i1 * i2;
			this->txt1->Text = Convert::ToString(i1);
			this->txt2->Text = Convert::ToString(i2);
			this->txtResult->Text = Convert::ToString(i3);
		}
		else { 
			this->lblMessage->Text = L"Ошибка ввода исходных данных";
			this->txtResult->Text = L"";
		}
	}

	private: System::Void btnDivide_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (DummyProtect()) {
			double i1, i2, i3;
			this->lblOper->Text = L"Деление";
			i1 = System::Double::Parse(txt1->Text);
			i2 = System::Double::Parse(txt2->Text);
			if (i2 == 0) {
				this->lblMessage->Text = L"Ошибка: деление на ноль";
				this->txtResult->Text = L"";
			}
			else {
				i3 = i1 / i2;
				this->txtResult->Text = Convert::ToString(i3);
			}
			this->txt1->Text = Convert::ToString(i1);
			this->txt2->Text = Convert::ToString(i2);
		}
		else { 
			this->lblMessage->Text = L"Ошибка ввода исходных данных";
			this->txtResult->Text = L"Ошибка";
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
