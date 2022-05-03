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
	public: System::Windows::Forms::Label^ mssg;
	public: System::Windows::Forms::Label^ timelbl;
	public: System::Windows::Forms::Label^ user;
	public: System::Windows::Forms::PictureBox^ seenicon;

	public:

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->mssg = (gcnew System::Windows::Forms::Label());
			this->timelbl = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->seenicon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->BeginInit();
			this->SuspendLayout();
			// 
			// mssg
			// 
			this->mssg->AutoSize = true;
			this->mssg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mssg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mssg->Location = System::Drawing::Point(0, 40);
			this->mssg->MaximumSize = System::Drawing::Size(400, 0);
			this->mssg->MinimumSize = System::Drawing::Size(0, 60);
			this->mssg->Name = L"mssg";
			this->mssg->Padding = System::Windows::Forms::Padding(10);
			this->mssg->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mssg->Size = System::Drawing::Size(20, 60);
			this->mssg->TabIndex = 0;
			this->mssg->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			// seenicon
			// 
			this->seenicon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->seenicon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"seenicon.BackgroundImage")));
			this->seenicon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->seenicon->Location = System::Drawing::Point(154, 103);
			this->seenicon->Name = L"seenicon";
			this->seenicon->Size = System::Drawing::Size(41, 26);
			this->seenicon->TabIndex = 3;
			this->seenicon->TabStop = false;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->Controls->Add(this->seenicon);
			this->Controls->Add(this->user);
			this->Controls->Add(this->timelbl);
			this->Controls->Add(this->mssg);
			this->ForeColor = System::Drawing::Color::White;
			this->MaximumSize = System::Drawing::Size(400, 0);
			this->MinimumSize = System::Drawing::Size(0, 90);
			this->Name = L"MyUserControl";
			this->Padding = System::Windows::Forms::Padding(0, 40, 0, 0);
			this->Size = System::Drawing::Size(198, 144);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seenicon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
