#pragma once

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TitleBar;
	protected:
	private: System::Windows::Forms::Panel^ TItleBar_border;
	private: System::Windows::Forms::Button^ Minimize;
	private: System::Windows::Forms::Button^ Maximize;
	private: System::Windows::Forms::Button^ CLose;
	private: System::Windows::Forms::Label^ AppTitle;
	private: System::Windows::Forms::Panel^ Add_Contact_Box;
	private: System::Windows::Forms::Button^ Add_Contact;
	private: System::Windows::Forms::RichTextBox^ Contact;




	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->TItleBar_border = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->Maximize = (gcnew System::Windows::Forms::Button());
			this->CLose = (gcnew System::Windows::Forms::Button());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->Add_Contact_Box = (gcnew System::Windows::Forms::Panel());
			this->Add_Contact = (gcnew System::Windows::Forms::Button());
			this->Contact = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TitleBar->SuspendLayout();
			this->Add_Contact_Box->SuspendLayout();
			this->SuspendLayout();
			// 
			// TitleBar
			// 
			this->TitleBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->TitleBar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->TitleBar->Controls->Add(this->TItleBar_border);
			this->TitleBar->Controls->Add(this->Minimize);
			this->TitleBar->Controls->Add(this->Maximize);
			this->TitleBar->Controls->Add(this->CLose);
			this->TitleBar->Controls->Add(this->AppTitle);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(614, 41);
			this->TitleBar->TabIndex = 1;
			// 
			// TItleBar_border
			// 
			this->TItleBar_border->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TItleBar_border->Location = System::Drawing::Point(3, 40);
			this->TItleBar_border->Name = L"TItleBar_border";
			this->TItleBar_border->Size = System::Drawing::Size(3000, 10);
			this->TItleBar_border->TabIndex = 12;
			// 
			// Minimize
			// 
			this->Minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Minimize.BackgroundImage")));
			this->Minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Minimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minimize->FlatAppearance->BorderSize = 0;
			this->Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Minimize->Location = System::Drawing::Point(396, 9);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(62, 26);
			this->Minimize->TabIndex = 10;
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm2::Minimize_Click);
			// 
			// Maximize
			// 
			this->Maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Maximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Maximize.BackgroundImage")));
			this->Maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Maximize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Maximize->FlatAppearance->BorderSize = 0;
			this->Maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Maximize->Location = System::Drawing::Point(472, 9);
			this->Maximize->Name = L"Maximize";
			this->Maximize->Size = System::Drawing::Size(62, 26);
			this->Maximize->TabIndex = 9;
			this->Maximize->UseVisualStyleBackColor = false;
			this->Maximize->Click += gcnew System::EventHandler(this, &MyForm2::Maximize_Click);
			// 
			// CLose
			// 
			this->CLose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CLose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->CLose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CLose.BackgroundImage")));
			this->CLose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->CLose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CLose->FlatAppearance->BorderSize = 0;
			this->CLose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CLose->Location = System::Drawing::Point(540, 9);
			this->CLose->Name = L"CLose";
			this->CLose->Size = System::Drawing::Size(62, 26);
			this->CLose->TabIndex = 8;
			this->CLose->UseVisualStyleBackColor = false;
			this->CLose->Click += gcnew System::EventHandler(this, &MyForm2::CLose_Click);
			// 
			// AppTitle
			// 
			this->AppTitle->AutoSize = true;
			this->AppTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AppTitle->ForeColor = System::Drawing::Color::White;
			this->AppTitle->Location = System::Drawing::Point(12, 9);
			this->AppTitle->Name = L"AppTitle";
			this->AppTitle->Size = System::Drawing::Size(126, 26);
			this->AppTitle->TabIndex = 4;
			this->AppTitle->Text = L"Nesr Scene";
			// 
			// Add_Contact_Box
			// 
			this->Add_Contact_Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Add_Contact_Box->Controls->Add(this->Add_Contact);
			this->Add_Contact_Box->Controls->Add(this->Contact);
			this->Add_Contact_Box->Controls->Add(this->label13);
			this->Add_Contact_Box->Controls->Add(this->label14);
			this->Add_Contact_Box->Location = System::Drawing::Point(47, 92);
			this->Add_Contact_Box->Name = L"Add_Contact_Box";
			this->Add_Contact_Box->Size = System::Drawing::Size(531, 371);
			this->Add_Contact_Box->TabIndex = 4;
			// 
			// Add_Contact
			// 
			this->Add_Contact->AutoEllipsis = true;
			this->Add_Contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->Add_Contact->FlatAppearance->BorderSize = 0;
			this->Add_Contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_Contact->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Bold));
			this->Add_Contact->ForeColor = System::Drawing::Color::White;
			this->Add_Contact->Location = System::Drawing::Point(158, 278);
			this->Add_Contact->Name = L"Add_Contact";
			this->Add_Contact->Size = System::Drawing::Size(196, 49);
			this->Add_Contact->TabIndex = 10;
			this->Add_Contact->Text = L"Add";
			this->Add_Contact->UseVisualStyleBackColor = false;
			this->Add_Contact->Click += gcnew System::EventHandler(this, &MyForm2::Add_Contact_Click);
			// 
			// Contact
			// 
			this->Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact->Location = System::Drawing::Point(279, 169);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(208, 35);
			this->Contact->TabIndex = 7;
			this->Contact->Text = L"+20";
			this->Contact->TextChanged += gcnew System::EventHandler(this, &MyForm2::Contact_TextChanged);
			this->Contact->Enter += gcnew System::EventHandler(this, &MyForm2::Contact_Enter);
			this->Contact->Leave += gcnew System::EventHandler(this, &MyForm2::Contact_Leave);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 167);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(201, 32);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Phone Number :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm2::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(135, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(261, 60);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Add Contact";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Click += gcnew System::EventHandler(this, &MyForm2::label14_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ClientSize = System::Drawing::Size(614, 551);
			this->Controls->Add(this->Add_Contact_Box);
			this->Controls->Add(this->TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->Add_Contact_Box->ResumeLayout(false);
			this->Add_Contact_Box->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CLose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Maximize_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
			this->StartPosition = FormStartPosition::CenterScreen;
			//form1->WindowState = FormWindowState::Normal;
		}
		else {
			//form1->WindowState = FormWindowState::Maximized;
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Contact_Enter(System::Object^ sender, System::EventArgs^ e) {
	Contact->Text = "";
}
private: System::Void Contact_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (Contact->Text == "")
		Contact->Text = "+20";
}
public: String^ getContact(){
	return Contact->Text;
}
private: System::Void Add_Contact_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void Contact_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
