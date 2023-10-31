#pragma once
#include "SucheForm.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_Datei;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_oeffnen;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_speichern;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_beenden;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_bearbeiten;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_markieren;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_kopieren;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_ausschneiden;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_einfuegen;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_gelb;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_gruenn;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_rot;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_blau;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_keine_farbe;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_extras;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_info;
	private: System::Windows::Forms::RichTextBox^ rtb_script;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tsm_Datei = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_oeffnen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_speichern = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsm_beenden = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_bearbeiten = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_markieren = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_gelb = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_gruenn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_rot = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_blau = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsm_keine_farbe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_kopieren = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_ausschneiden = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_einfuegen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_extras = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsm_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rtb_script = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsm_Datei, this->tsm_bearbeiten,
					this->tsm_extras, this->tsm_info
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(810, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tsm_Datei
			// 
			this->tsm_Datei->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsm_oeffnen,
					this->tsm_speichern, this->toolStripSeparator1, this->tsm_beenden
			});
			this->tsm_Datei->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tsm_Datei->Name = L"tsm_Datei";
			this->tsm_Datei->Size = System::Drawing::Size(73, 32);
			this->tsm_Datei->Text = L"&Datei";
			// 
			// tsm_oeffnen
			// 
			this->tsm_oeffnen->Name = L"tsm_oeffnen";
			this->tsm_oeffnen->Size = System::Drawing::Size(188, 32);
			this->tsm_oeffnen->Text = L"&Öffnen";
			this->tsm_oeffnen->Click += gcnew System::EventHandler(this, &Form1::tsm_oeffnen_Click);
			// 
			// tsm_speichern
			// 
			this->tsm_speichern->Name = L"tsm_speichern";
			this->tsm_speichern->Size = System::Drawing::Size(188, 32);
			this->tsm_speichern->Text = L"&Speichern";
			this->tsm_speichern->Click += gcnew System::EventHandler(this, &Form1::tsm_speichern_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(185, 6);
			// 
			// tsm_beenden
			// 
			this->tsm_beenden->Name = L"tsm_beenden";
			this->tsm_beenden->Size = System::Drawing::Size(188, 32);
			this->tsm_beenden->Text = L"Beenden";
			this->tsm_beenden->Click += gcnew System::EventHandler(this, &Form1::tsm_beenden_Click);
			// 
			// tsm_bearbeiten
			// 
			this->tsm_bearbeiten->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsm_markieren,
					this->tsm_kopieren, this->tsm_ausschneiden, this->tsm_einfuegen
			});
			this->tsm_bearbeiten->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tsm_bearbeiten->Name = L"tsm_bearbeiten";
			this->tsm_bearbeiten->Size = System::Drawing::Size(124, 32);
			this->tsm_bearbeiten->Text = L"&Bearbeiten";
			// 
			// tsm_markieren
			// 
			this->tsm_markieren->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->tsm_gelb,
					this->tsm_gruenn, this->tsm_rot, this->tsm_blau, this->toolStripSeparator2, this->tsm_keine_farbe
			});
			this->tsm_markieren->Name = L"tsm_markieren";
			this->tsm_markieren->Size = System::Drawing::Size(225, 32);
			this->tsm_markieren->Text = L"Markieren";
			// 
			// tsm_gelb
			// 
			this->tsm_gelb->Name = L"tsm_gelb";
			this->tsm_gelb->Size = System::Drawing::Size(204, 32);
			this->tsm_gelb->Text = L"Gelb";
			this->tsm_gelb->Click += gcnew System::EventHandler(this, &Form1::tsm_gelb_Click);
			// 
			// tsm_gruenn
			// 
			this->tsm_gruenn->Name = L"tsm_gruenn";
			this->tsm_gruenn->Size = System::Drawing::Size(204, 32);
			this->tsm_gruenn->Text = L"Grünn";
			this->tsm_gruenn->Click += gcnew System::EventHandler(this, &Form1::tsm_gruenn_Click);
			// 
			// tsm_rot
			// 
			this->tsm_rot->Name = L"tsm_rot";
			this->tsm_rot->Size = System::Drawing::Size(204, 32);
			this->tsm_rot->Text = L"Rot";
			this->tsm_rot->Click += gcnew System::EventHandler(this, &Form1::tsm_rot_Click);
			// 
			// tsm_blau
			// 
			this->tsm_blau->Name = L"tsm_blau";
			this->tsm_blau->Size = System::Drawing::Size(204, 32);
			this->tsm_blau->Text = L"Blau";
			this->tsm_blau->Click += gcnew System::EventHandler(this, &Form1::tsm_blau_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(201, 6);
			// 
			// tsm_keine_farbe
			// 
			this->tsm_keine_farbe->Name = L"tsm_keine_farbe";
			this->tsm_keine_farbe->Size = System::Drawing::Size(204, 32);
			this->tsm_keine_farbe->Text = L"Keine Farbe";
			this->tsm_keine_farbe->Click += gcnew System::EventHandler(this, &Form1::tsm_keine_farbe_Click);
			// 
			// tsm_kopieren
			// 
			this->tsm_kopieren->Name = L"tsm_kopieren";
			this->tsm_kopieren->Size = System::Drawing::Size(225, 32);
			this->tsm_kopieren->Text = L"Kopieren";
			this->tsm_kopieren->Click += gcnew System::EventHandler(this, &Form1::tsm_kopieren_Click);
			// 
			// tsm_ausschneiden
			// 
			this->tsm_ausschneiden->Name = L"tsm_ausschneiden";
			this->tsm_ausschneiden->Size = System::Drawing::Size(225, 32);
			this->tsm_ausschneiden->Text = L"Ausschneiden";
			this->tsm_ausschneiden->Click += gcnew System::EventHandler(this, &Form1::tsm_ausschneiden_Click);
			// 
			// tsm_einfuegen
			// 
			this->tsm_einfuegen->Name = L"tsm_einfuegen";
			this->tsm_einfuegen->Size = System::Drawing::Size(225, 32);
			this->tsm_einfuegen->Text = L"Einfügen";
			this->tsm_einfuegen->Click += gcnew System::EventHandler(this, &Form1::tsm_einfuegen_Click);
			// 
			// tsm_extras
			// 
			this->tsm_extras->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tsm_extras->Name = L"tsm_extras";
			this->tsm_extras->Size = System::Drawing::Size(79, 32);
			this->tsm_extras->Text = L"Extras";
			this->tsm_extras->Click += gcnew System::EventHandler(this, &Form1::tsm_extras_Click);
			// 
			// tsm_info
			// 
			this->tsm_info->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tsm_info->Name = L"tsm_info";
			this->tsm_info->Size = System::Drawing::Size(35, 32);
			this->tsm_info->Text = L"\?";
			this->tsm_info->Click += gcnew System::EventHandler(this, &Form1::tsm_info_Click);
			// 
			// rtb_script
			// 
			this->rtb_script->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rtb_script->Location = System::Drawing::Point(0, 39);
			this->rtb_script->Name = L"rtb_script";
			this->rtb_script->Size = System::Drawing::Size(810, 611);
			this->rtb_script->TabIndex = 1;
			this->rtb_script->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 641);
			this->Controls->Add(this->rtb_script);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"MS Editor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void tsm_oeffnen_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
}

private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}

private: System::Void tsm_speichern_Click(System::Object^ sender, System::EventArgs^ e) {
	/*saveFileDialog1->ShowDialog();*/
	SaveFileDialog^ speichernDialog = gcnew SaveFileDialog;
	speichernDialog->Filter = "Textdateien (*.txt)|*.txt|Alle Dateien (*.*)|*.*";
	speichernDialog->FilterIndex = 1; // Hier wird das Standardformat auf .txt gesetzt.

	if (speichernDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ dateiname = speichernDialog->FileName;
		rtb_script->SaveFile(dateiname, RichTextBoxStreamType::PlainText);
	}
}

private: System::Void tsm_beenden_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (MessageBox::Show("Text", "Titel", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information)  == System::Windows::Forms::DialogResult::Yes)
	{
		saveFileDialog1->ShowDialog();
	}

	if (MessageBox::Show("Text", "Titel", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No)
	{
		Application::Exit();
	}
	
}

private: System::Void tsm_info_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Text Editor v1.0 \n \n Made with Love by : Mohammad Aljbawi ", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void tsm_gelb_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedText = rtb_script->SelectedText; 
	rtb_script->SelectionBackColor = Color::FromArgb(255, 215, 0);
	rtb_script->SelectionColor = Color::Black;
}

private: System::Void tsm_gruenn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedText = rtb_script->SelectedText;
	rtb_script->SelectionBackColor = Color::FromArgb(50, 205, 50);
	rtb_script->SelectionColor = Color::Black;
}

private: System::Void tsm_rot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedText = rtb_script->SelectedText;
	rtb_script->SelectionBackColor = Color::FromArgb(255, 69, 0);
	rtb_script->SelectionColor = Color::Black;
}

private: System::Void tsm_blau_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedText = rtb_script->SelectedText;
	rtb_script->SelectionBackColor = Color::FromArgb(135, 206, 250);
	rtb_script->SelectionColor = Color::Black;
}

private: System::Void tsm_keine_farbe_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedText = rtb_script->SelectedText;
	rtb_script->SelectionBackColor = Color::White;
	rtb_script->SelectionColor = Color::Black;
}

private: System::Void tsm_kopieren_Click(System::Object^ sender, System::EventArgs^ e) {
	rtb_script->Copy();
}

private: System::Void tsm_ausschneiden_Click(System::Object^ sender, System::EventArgs^ e) {
	rtb_script->Cut();
}

private: System::Void tsm_einfuegen_Click(System::Object^ sender, System::EventArgs^ e) {
	rtb_script->Paste();
}

private: System::Void tsm_extras_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Texteditor::SucheForm^ fenster = gcnew Texteditor::SucheForm;
	fenster->Show();*/

}
};
}
