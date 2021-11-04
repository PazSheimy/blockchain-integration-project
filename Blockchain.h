#pragma once

namespace BlockChainDemo {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 72);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 72);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Milestone1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(420, 85);
			this->button3->Name = L"MILESTONE";
			this->button3->Size = System::Drawing::Size(152, 72);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Milestone2";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(608, 85);
			this->button4->Name = L"MILESTONE";
			this->button4->Size = System::Drawing::Size(162, 72);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Mileston3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(824, 85);
			this->button5->Name = L"RUN";
			this->button5->Size = System::Drawing::Size(133, 71);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Run BlockChain";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 378);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"BlockchainDemo";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		if (MessageBox::Show("Do you want to exit?","Exit Prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
			
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (MessageBox::Show("A blockchain is a growing list of records, called blocks, that are linked together using cryptography. Click ok to learn more", "What is Blockchain", MessageBoxButtons::OKCancel,
			MessageBoxIcon::None) == System::Windows::Forms::DialogResult::OK) {
			MessageBox::Show("A class is used to specify the form of an object.\n It combines data representation and methods for manupulating data\n"
				+ "The data and functions with in a class are called member of a class.\n"+"A calss is blueprint for data type.", "Class Format", MessageBoxButtons::OK,
				MessageBoxIcon::None) == System::Windows::Forms::DialogResult::Yes;
			
		}
		else {
			button2->PerformClick();	
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
