#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data::OleDb;


	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  ���������;
	private: System::Windows::Forms::TabPage^  ���������;
	private: System::Windows::Forms::TabPage^  ��������;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->��������� = (gcnew System::Windows::Forms::TabPage());
			this->��������� = (gcnew System::Windows::Forms::TabPage());
			this->�������� = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->���������->SuspendLayout();
			this->���������->SuspendLayout();
			this->��������->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(247, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(247, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(381, 251);
			this->listBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"����������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(40, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 32);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(193, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 28);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 87);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 20);
			this->textBox5->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(43, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"��������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 39);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(199, 20);
			this->textBox6->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"������� ��� ��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"������� ������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"������� ID ��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"������� ��� ��������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"������� ������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"������� ID ��������";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->���������);
			this->tabControl1->Controls->Add(this->���������);
			this->tabControl1->Controls->Add(this->��������);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(216, 251);
			this->tabControl1->TabIndex = 17;
			// 
			// ���������
			// 
			this->���������->Controls->Add(this->button2);
			this->���������->Controls->Add(this->textBox5);
			this->���������->Controls->Add(this->label2);
			this->���������->Controls->Add(this->textBox4);
			this->���������->Controls->Add(this->label1);
			this->���������->Location = System::Drawing::Point(4, 22);
			this->���������->Name = L"���������";
			this->���������->Padding = System::Windows::Forms::Padding(3);
			this->���������->Size = System::Drawing::Size(208, 225);
			this->���������->TabIndex = 0;
			this->���������->Text = L"����������";
			this->���������->UseVisualStyleBackColor = true;
			// 
			// ���������
			// 
			this->���������->Controls->Add(this->label3);
			this->���������->Controls->Add(this->textBox3);
			this->���������->Controls->Add(this->label5);
			this->���������->Controls->Add(this->label4);
			this->���������->Controls->Add(this->button3);
			this->���������->Controls->Add(this->textBox2);
			this->���������->Controls->Add(this->textBox1);
			this->���������->Location = System::Drawing::Point(4, 22);
			this->���������->Name = L"���������";
			this->���������->Padding = System::Windows::Forms::Padding(3);
			this->���������->Size = System::Drawing::Size(208, 225);
			this->���������->TabIndex = 1;
			this->���������->Text = L"���������";
			this->���������->UseVisualStyleBackColor = true;
			// 
			// ��������
			// 
			this->��������->Controls->Add(this->label6);
			this->��������->Controls->Add(this->button4);
			this->��������->Controls->Add(this->textBox6);
			this->��������->Location = System::Drawing::Point(4, 22);
			this->��������->Name = L"��������";
			this->��������->Size = System::Drawing::Size(208, 225);
			this->��������->TabIndex = 2;
			this->��������->Text = L"��������";
			this->��������->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 364);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->���������->ResumeLayout(false);
			this->���������->PerformLayout();
			this->���������->ResumeLayout(false);
			this->���������->PerformLayout();
			this->��������->ResumeLayout(false);
			this->��������->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		OleDbConnection^ MyConnection =  gcnew OleDbConnection("provider=microsoft.jet.oledb.4.0; data source=database.mdb");

		//�������� �������
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			OleDbCommand^ cmd = gcnew OleDbCommand("SELECT * FROM Students", MyConnection);
			MyConnection->Open();
			OleDbDataReader^ reader = cmd->ExecuteReader();
			listBox1->Items->Clear();
			while (reader->Read())
			{
				listBox1->Items->Add(reader[0]->ToString() + "  " + reader[1]->ToString() + "   " + reader[2]->ToString());
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Wrong Data!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			MyConnection->Close();
		}
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
	}

			 //���������� ��������
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if (textBox4->Text != "" && textBox5->Text != "")
			{
				OleDbCommand^ insert = gcnew OleDbCommand("INSERT INTO Students(SName, Ratings) values(@SName, @Ratings)", MyConnection);
				MyConnection->Open();
				insert->Parameters->Add("@SName", textBox4->Text);
				insert->Parameters->Add("@Ratings", Convert::ToInt32(textBox5->Text));
				insert->ExecuteNonQueryAsync();

				OleDbCommand^ insert2 = gcnew OleDbCommand("INSERT INTO Student(SName) values(@SName)", MyConnection);
				insert2->Parameters->Add("@SName", textBox4->Text);
				insert2->ExecuteNonQueryAsync();
			}
			else
			{
				MessageBox::Show("������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch(...)
		{
			MessageBox::Show("������� �������� ������", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			MyConnection->Close();
		}
	}

			 //��������� ��������
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
			{
				OleDbCommand^ update = gcnew OleDbCommand("UPDATE Students SET SName=@SName, Ratings=@Ratings WHERE ID=@ID", MyConnection);
				MyConnection->Open();
				update->Parameters->Add("@SName", textBox1->Text);
				update->Parameters->Add("@Ratings", Convert::ToInt32(textBox2->Text));
				update->Parameters->Add("@ID", Convert::ToInt32(textBox3->Text));
				update->ExecuteNonQueryAsync();

				OleDbCommand^ update2 = gcnew OleDbCommand("UPDATE Student SET SName=@SName WHERE ID=@ID", MyConnection);
				update2->Parameters->Add("@SName", textBox1->Text);
				update2->Parameters->Add("@ID", Convert::ToInt32(textBox3->Text));
				update2->ExecuteNonQueryAsync();
			}
			else
			{
				MessageBox::Show("������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (...)
		{
			MessageBox::Show("������� �������� ������", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			MyConnection->Close();
		}
	}

			 //�������� ��������
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		if (textBox6->Text != "")
		{
			OleDbCommand^ dlt = gcnew OleDbCommand("DELETE FROM Students WHERE ID = @ID", MyConnection);
			MyConnection->Open();
			dlt->Parameters->Add("@ID", textBox6->Text);
			dlt->ExecuteNonQueryAsync();

			OleDbCommand^ dlt2 = gcnew OleDbCommand("DELETE FROM Student WHERE ID = " + textBox6->Text, MyConnection);
			dlt2->Parameters->Add("@ID", textBox6->Text);
			dlt2->ExecuteNonQueryAsync();
		}
		else
		{
			MessageBox::Show("������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (...)
	{
		MessageBox::Show("������� �������� ������", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		MyConnection->Close();
	}
}
};
}