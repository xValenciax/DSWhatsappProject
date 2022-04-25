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
			this->mssg = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mssg
			// 
			this->mssg->AutoSize = true;
			this->mssg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mssg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mssg->Location = System::Drawing::Point(0, 0);
			this->mssg->MaximumSize = System::Drawing::Size(400, 0);
			this->mssg->Name = L"mssg";
			this->mssg->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mssg->Size = System::Drawing::Size(0, 29);
			this->mssg->TabIndex = 0;
			this->mssg->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->ForeColor = System::Drawing::Color::White;
			this->MaximumSize = System::Drawing::Size(400, 0);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(22, 29);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
