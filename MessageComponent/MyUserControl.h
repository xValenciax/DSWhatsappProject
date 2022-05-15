#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MessageComponent {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Label^ timelbl;
	public: System::Windows::Forms::Label^ user;
	public: System::Windows::Forms::Label^ msg_id;
	public: System::Windows::Forms::PictureBox^ seenicon;
	public: System::Windows::Forms::Button^ more;
	public: System::Windows::Forms::Label^ mssg;
	
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->timelbl = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->msg_id = (gcnew System::Windows::Forms::Label());
			this->seenicon = (gcnew System::Windows::Forms::PictureBox());
			this->more = (gcnew System::Windows::Forms::Button());
			this->mssg = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->BeginInit();
			this->SuspendLayout();
			// 
			// timelbl
			// 
			this->timelbl->AutoSize = true;
			this->timelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timelbl->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->timelbl->Location = System::Drawing::Point(3, 111);
			this->timelbl->MaximumSize = System::Drawing::Size(200, 0);
			this->timelbl->MinimumSize = System::Drawing::Size(0, 30);
			this->timelbl->Name = L"timelbl";
			this->timelbl->Size = System::Drawing::Size(0, 30);
			this->timelbl->TabIndex = 1;
			// 
			// user
			// 
			this->user->AutoSize = true;
			this->user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->user->Location = System::Drawing::Point(3, 3);
			this->user->MaximumSize = System::Drawing::Size(200, 0);
			this->user->MinimumSize = System::Drawing::Size(0, 30);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(0, 30);
			this->user->TabIndex = 2;
			// 
			// msg_id
			// 
			this->msg_id->Location = System::Drawing::Point(0, 0);
			this->msg_id->Name = L"msg_id";
			this->msg_id->Size = System::Drawing::Size(100, 23);
			this->msg_id->TabIndex = 0;
			// 
			// seenicon
			// 
			this->seenicon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->seenicon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seenicon.BackgroundImage")));
			this->seenicon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->seenicon->Location = System::Drawing::Point(193, 103);
			this->seenicon->Name = L"seenicon";
			this->seenicon->Size = System::Drawing::Size(41, 26);
			this->seenicon->TabIndex = 3;
			this->seenicon->TabStop = false;
			// 
			// more
			// 
			this->more->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->more->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"more.BackgroundImage")));
			this->more->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->more->Cursor = System::Windows::Forms::Cursors::Hand;
			this->more->FlatAppearance->BorderSize = 0;
			this->more->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->more->Location = System::Drawing::Point(224, 3);
			this->more->Name = L"more";
			this->more->Size = System::Drawing::Size(30, 30);
			this->more->TabIndex = 4;
			this->more->UseVisualStyleBackColor = true;
			// 
			// mssg
			// 
			this->mssg->AutoSize = true;
			this->mssg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mssg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mssg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mssg->Location = System::Drawing::Point(0, 40);
			this->mssg->MaximumSize = System::Drawing::Size(400, 0);
			this->mssg->MinimumSize = System::Drawing::Size(0, 60);
			this->mssg->Name = L"mssg";
			this->mssg->Size = System::Drawing::Size(0, 60);
			this->mssg->TabIndex = 5;
			this->mssg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Controls->Add(this->mssg);
			this->Controls->Add(this->more);
			this->Controls->Add(this->seenicon);
			this->Controls->Add(this->user);
			this->Controls->Add(this->timelbl);
			this->ForeColor = System::Drawing::Color::White;
			this->MaximumSize = System::Drawing::Size(400, 0);
			this->MinimumSize = System::Drawing::Size(0, 90);
			this->Name = L"MyUserControl";
			this->Padding = System::Windows::Forms::Padding(0, 40, 0, 0);
			this->Size = System::Drawing::Size(261, 141);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
