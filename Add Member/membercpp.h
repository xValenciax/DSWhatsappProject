#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace AddMember {

	/// <summary>
	/// Summary for membercpp
	/// </summary>
	public ref class membercpp : public System::Windows::Forms::UserControl
	{
	public:
		membercpp(void)
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
		~membercpp()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::RichTextBox^ Contact;
	protected:
	public: System::Windows::Forms::Label^ label13;

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
			this->Contact = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Contact
			// 
			this->Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact->Location = System::Drawing::Point(229, 13);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(208, 35);
			this->Contact->TabIndex = 9;
			this->Contact->Text = L"+20";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 14);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 32);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Phone Number :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &membercpp::label13_Click);
			// 
			// membercpp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Controls->Add(this->Contact);
			this->Controls->Add(this->label13);
			this->Name = L"membercpp";
			this->Size = System::Drawing::Size(459, 60);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
