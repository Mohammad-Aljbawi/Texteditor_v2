#pragma once
#include "Form1.h"

namespace Texteditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für SucheForm
	/// </summary>
	public ref class SucheForm : public System::Windows::Forms::Form
	{
	public:
		SucheForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~SucheForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_suche;
	protected:
	private: System::Windows::Forms::TextBox^ tb_suche;
	private: System::Windows::Forms::CheckBox^ cb_gross_klein;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_suche = (gcnew System::Windows::Forms::Button());
			this->tb_suche = (gcnew System::Windows::Forms::TextBox());
			this->cb_gross_klein = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// btn_suche
			// 
			this->btn_suche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_suche->Location = System::Drawing::Point(122, 290);
			this->btn_suche->Name = L"btn_suche";
			this->btn_suche->Size = System::Drawing::Size(190, 76);
			this->btn_suche->TabIndex = 0;
			this->btn_suche->Text = L"Suchen";
			this->btn_suche->UseVisualStyleBackColor = true;
			this->btn_suche->Click += gcnew System::EventHandler(this, &SucheForm::btn_suche_Click);
			// 
			// tb_suche
			// 
			this->tb_suche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->tb_suche->Location = System::Drawing::Point(40, 143);
			this->tb_suche->Name = L"tb_suche";
			this->tb_suche->Size = System::Drawing::Size(391, 34);
			this->tb_suche->TabIndex = 1;
			// 
			// cb_gross_klein
			// 
			this->cb_gross_klein->AutoSize = true;
			this->cb_gross_klein->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->cb_gross_klein->Location = System::Drawing::Point(113, 201);
			this->cb_gross_klein->Name = L"cb_gross_klein";
			this->cb_gross_klein->Size = System::Drawing::Size(230, 29);
			this->cb_gross_klein->TabIndex = 2;
			this->cb_gross_klein->Text = L"Groß- Kleinschreibung";
			this->cb_gross_klein->UseVisualStyleBackColor = true;
			// 
			// SucheForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 500);
			this->Controls->Add(this->cb_gross_klein);
			this->Controls->Add(this->tb_suche);
			this->Controls->Add(this->btn_suche);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SucheForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SucheForm";
			this->Load += gcnew System::EventHandler(this, &SucheForm::SucheForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SucheForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_suche_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
