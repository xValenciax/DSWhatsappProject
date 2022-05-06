#pragma once

namespace AddMember {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for member
	/// </summary>
	public ref class member : public System::Windows::Forms::Form
	{
	public:
		member(void)
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
		~member()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label13;
	protected:
	private: System::Windows::Forms::RichTextBox^ Contact;

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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Contact = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(7, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 32);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Phone Number :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &member::label13_Click);
			// 
			// Contact
			// 
			this->Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact->Location = System::Drawing::Point(242, 7);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(208, 35);
			this->Contact->TabIndex = 11;
			this->Contact->Text = L"+20";
			// 
			// member
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->ClientSize = System::Drawing::Size(459, 50);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Contact);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"member";
			this->Text = L"member";
			this->Load += gcnew System::EventHandler(this, &member::member_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void member_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
