#pragma once

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ TitleBar;
	private: System::Windows::Forms::Button^ Minimize;
	private: System::Windows::Forms::Button^ Maximize;
	private: System::Windows::Forms::Button^ CLose;
	private: System::Windows::Forms::Label^ AppTitle;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ StatusList;
	private: System::Windows::Forms::Panel^ TItleBar_border;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->StatusList = (gcnew System::Windows::Forms::Panel());
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->TItleBar_border = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->Maximize = (gcnew System::Windows::Forms::Button());
			this->CLose = (gcnew System::Windows::Forms::Button());
			this->AppTitle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->TitleBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->TitleBar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1191, 670);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel2->Controls->Add(this->StatusList);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 41);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1191, 629);
			this->panel2->TabIndex = 2;
			// 
			// StatusList
			// 
			this->StatusList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->StatusList->Dock = System::Windows::Forms::DockStyle::Left;
			this->StatusList->Location = System::Drawing::Point(0, 0);
			this->StatusList->Name = L"StatusList";
			this->StatusList->Size = System::Drawing::Size(295, 629);
			this->StatusList->TabIndex = 12;
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
			this->TitleBar->Size = System::Drawing::Size(1191, 41);
			this->TitleBar->TabIndex = 1;
			// 
			// TItleBar_border
			// 
			this->TItleBar_border->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->TItleBar_border->Location = System::Drawing::Point(-902, 38);
			this->TItleBar_border->Name = L"TItleBar_border";
			this->TItleBar_border->Size = System::Drawing::Size(3000, 10);
			this->TItleBar_border->TabIndex = 13;
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
			this->Minimize->Location = System::Drawing::Point(973, 9);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(62, 26);
			this->Minimize->TabIndex = 10;
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm1::Minimize_Click);
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
			this->Maximize->Location = System::Drawing::Point(1049, 9);
			this->Maximize->Name = L"Maximize";
			this->Maximize->Size = System::Drawing::Size(62, 26);
			this->Maximize->TabIndex = 9;
			this->Maximize->UseVisualStyleBackColor = false;
			this->Maximize->Click += gcnew System::EventHandler(this, &MyForm1::Maximize_Click);
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
			this->CLose->Location = System::Drawing::Point(1117, 9);
			this->CLose->Name = L"CLose";
			this->CLose->Size = System::Drawing::Size(62, 26);
			this->CLose->TabIndex = 8;
			this->CLose->UseVisualStyleBackColor = false;
			this->CLose->Click += gcnew System::EventHandler(this, &MyForm1::CLose_Click);
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
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1191, 670);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;

	}
	private: System::Void Maximize_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
			this->StartPosition = FormStartPosition::CenterScreen;
		}
		else
			this->WindowState = FormWindowState::Maximized;
	}
	private: System::Void CLose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
