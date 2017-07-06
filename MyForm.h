#pragma once
#include <iostream>
#include <string>
using namespace System::Collections::Generic;
namespace CppWinForm3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;


	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  input;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 233);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(245, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(33, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(139, 177);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(245, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(33, 121);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(139, 121);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(245, 121);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 50);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(139, 289);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 50);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(384, 121);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 50);
			this->button11->TabIndex = 10;
			this->button11->Text = L"÷";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(384, 177);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 50);
			this->button12->TabIndex = 11;
			this->button12->Text = L"x";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(384, 233);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 50);
			this->button13->TabIndex = 12;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(384, 289);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 50);
			this->button14->TabIndex = 13;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(384, 47);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 50);
			this->button15->TabIndex = 14;
			this->button15->Text = L"c";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(490, 121);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"!";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(490, 47);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 50);
			this->button17->TabIndex = 17;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input->Location = System::Drawing::Point(33, 47);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(312, 50);
			this->input->TabIndex = 18;
			this->input->Text = L"0";
			this->input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 344);
			this->Controls->Add(this->input);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	List<int>^ num1 = gcnew List<int>();
	List<int>^ num2 = gcnew List<int>();
	List<int>^ num3 = gcnew List<int>();
	List<int>^ tempA = gcnew List<int>();
	List<int>^ decimal = gcnew List<int>();
	int stop, size1, size2, size3, csize, Tsize, sizeA, Decsize;
	bool LessThan = true;
	float Number1;
	char operation;
	bool negative;
	private:System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "1";
		}
		else
		{
			input->Text += "1";
		}
	}
	private:System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "2";
		}
		else
		{
			input->Text += "2";
		}
	}
	private:System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "3";
		}
		else
		{
			input->Text += "3";
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (input->Text == "0")
		{
			input->Text = "4";
		}
		else
		{
			input->Text += "4";
		}
	}
	private:System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "5";
		}
		else
		{
			input->Text += "5";
		}
	}
	private:System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "6";
		}
		else
		{
			input->Text += "6";
		}
	}
	private:System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "7";
		}
		else
		{
			input->Text += "7";
		}
	}
	private:System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "8";
		}
		else
		{
			input->Text += "8";
		}
	}
	private:System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text == "0")
		{
			input->Text = "9";
		}
		else
		{
			input->Text += "9";
		}
	}
	private:System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input->Text != "0")
		{
			input->Text += "0";
		}
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
	{
		size1 = this->input->Text->Length;
		if (negative)
		{
			stop = 1;
		}
		else
		{
			stop = 0;
		}
		for (int i = size1-1; i >= stop; i--)
		{
			num1->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		input->Text = "0";
		operation = '/';
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		size1 = this->input->Text->Length;
		if (negative)
		{
			stop = 1;
		}
		else
		{
			stop = 0;
		}
		for (int i = size1-1; i >= stop; i--)
		{
			num1->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		input->Text = "0";
		operation = 'x';
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
	{
		size1 = this->input->Text->Length;
		if (negative)
		{
			stop = 1;
			operation = '+';
		}
		else
		{
			stop = 0;
			operation = '-';
		}
		for (int i = size1-1; i >= stop; i--)
		{
			num1->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		input->Text = "0";
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
	{
		size1 = this->input->Text->Length;
		if (negative)
		{
			stop = 1;
		}
		else
		{
			stop = 0;
		}
		for (int i = size1 - 1; i >= stop; i--)
		{
			num1->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		if (negative)
		{
			size1 -= 1;
			operation = '-';
		}	
		else
		{
			operation = '+';
		}
		input->Text = "0";
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1->Clear();
		size1 = 0;
		num2->Clear();
		size2 = 0;
		num3->Clear();
		size3 = 0;
		Number1 = 0;
		this->input->Text = "0";
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e)
	{
		size1 = this->input->Text->Length;
		if (negative)
		{
			stop = 1;
		}
		else
		{
			stop = 0;
		}
		for (int i = size1 - 1; i >= stop; i--)
		{
			num1->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		if (negative)
		{
			size1 -= 1;
		}
		input->Text = "0";
		operation = '!';
	}
	private: System::Void Balance(List<int>^ %MyList, int %Mysize)
	{
		for (int h = 0; h < Mysize; h++)
		{
			if (MyList[h] >= 10)
			{
				int ExtraValues = MyList[h] / 10;
				MyList[h] -= ExtraValues * 10;
				if ((h + 1) == Mysize)
				{
					MyList->Add(ExtraValues);
					Mysize += 1;
				}
				else
				{
					MyList[h + 1] += ExtraValues;
				}
			}
		}
	}
	private: System::Void SubtractionHelp(int i)
	{
		int j = 1;
		while (num1[i + j] == 0)
		{
			num1[i + j] += 9;
			j += 1;
		}
		num1[i + j] -= 1;
		num1[i] += 10;

		j = size1 - 1;
		while (num1[j] == 0)
		{
			size1 -= 1;
			j -= 1;
			if (j == -1)
			{
				break;
			}
		}
	}
	private: System::Void subtract()
	{
		if (size1 > size2)
		{
			for (int i = 0; i < size2; i++)
			{
				if (num1[i] <= num2[i])
				{
					SubtractionHelp(i);
				}
				num3->Add(num1[i] - num2[i]);
				size3 += 1;
			}
			for (int j = size2; j < size1; j++)
			{
				num3->Add(num1[j]);
				size3 += 1;
			}
		}
		else if (size1 < size2)
		{
			negative = true;
			for (int i = 0; i < size1; i++)
			{
				if (num1[i] <= num2[i])
				{
					SubtractionHelp(i);
				}
				num3->Add(num2[i] - num1[i]);
				size3 += 1;
			}
			for (int j = size1; j < size2; j++)
			{
				num3->Add(num2[j]);
				size3 += 1;
			}
		}
		else if ((size1 == 1) && (size2 == 1))
		{
			num3->Add(num1[0] - num2[0]);
			size3 += 1;
			if (num1[0] < num2[0])
			{
				negative = true;
			}
		}
		else
		{
			int i = size1 - 1;
			while (num1[i] == num2[i])
			{
				i -= 1;
				if (i == -1)
				{
					break;
				}
			}
			if (i != -1)
			{
				if (num1[i] > num2[i])
				{
					for (int k = 0; k < size1 - 1; k++)
					{
						if (num1[k] <= num2[k])
						{
							SubtractionHelp(k);
						}
						num3->Add(num1[k] - num2[k]);
						size3 += 1;
					}
				}
				else if (num2[i] > num1[i])
				{
					if (negative)
					{
						negative = false;
					}
					else
					{
						negative = true;
					}
					for (int k = 0; k < size1; k++)
					{
						if (num1[k] <= num2[k])
						{
							SubtractionHelp(k);
						}
						num3->Add(num2[k] - num1[k]);
						size3 += 1;
					}
				}
			}
			else
			{
				num3->Clear();
				size3 = 0;
			}
		}
	}
	private: System::Boolean Less(List<int>^ Number1, List<int>^ Number2, int sizeF, int sizeS)
	{
		if (sizeF > sizeS)
		{
			return(true);
		}
		else if (sizeF < sizeS)
		{
			return(false);
		}
		else
		{
			int i = sizeF - 1;
			while (Number1[i] == Number2[i])
			{
				i -= 1;
				if (i == -1)
				{
					break;
				}
			}
			if ((i == -1) || (Number1[i] > Number2[i]))
			{
				return(true);
			}
			else
			{
				return(false);
			}
		}
	}
	private: System::Void DivisionHelp()
	{
		while (Less(num1, num2, size1, size2))
		{
			subtract();
			Balance(num3, size3);
			num1->Clear();
			size1 = size3;
			for (int i = 0; i < size3; i++)
			{
				num1->Add(num3[i]);
			}
			num3->Clear();
			size3 = 0;
			if (sizeA == 0)
			{
				tempA->Add(1);
				sizeA = 1;
			}
			else
			{
				tempA[0] += 1;
				Balance(tempA, sizeA);
			}
		}
		num3->Clear();
		size3 = sizeA;
		for (int i = 0; i < sizeA; i++)
		{
			num3->Add(tempA[i]);
		}
		tempA->Clear();
		sizeA = 0;
	}
	private: System::Boolean NotZero()
	{
		if ((num1[0] == 0) && (size1 == 1))
		{
			return(false);
		}
		else
		{
			return(true);
		}
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e)
	{
		size2 = this->input->Text->Length;
		for (int i = size2-1; i >= 0; i--)
		{
			num2->Add(Convert::ToInt32(this->input->Text[i].ToString()));
		}
		input->Text = "";
		switch (operation)
		{
			case '/':
			{
				DivisionHelp();
				print();
				if (!((num1[0] == 0) && (size1 == 1)))
				{
					this->input->Text += ".";
				}
				int counter = 0;
				for (int i = 0; i < 5; i++)
				{
					if ((num1[0] == 0) && (size1 == 1))
					{
						break;
					}
					num1->Add(num1[size1-1]);
					size1 += 1;
					for(int i = size1 - 2; i > 0; i--)
					{
						num1[i+1] = num1[i];
					}
					num1[0] = 0;
					num3->Clear();
					size3 = 0;
					DivisionHelp();
					print();
				}
			}
			break;
			case 'x':
			{
				for (int i = 0; i < size1; i++)
				{
					for (int j = 0; j < size2; j++)
					{
						int Store = i + j;
						if (Store >= size3)
						{
							num3->Add(num1[i] * num2[j]);
							size3 += 1;
						}
						else
						{
							num3[Store] += num1[i] * num2[j];
						}
					}
					Balance(num3, size3);
				}
			}
			break;
			case '-':
			{
				subtract();
				Balance(num3, size3);
			}
			break;
			case '+':
			{
				if (size1 >= size2)
				{
					for (int i = 0; i < size2; i++)
					{
						num3->Add(num1[i] + num2[i]);
						size3 += 1;
					}
					for (int j = size2; j < size1; j++)
					{
						num3->Add(num1[j]);
						size3 += 1;
					}
				}
				else if (size1 < size2)
				{
					for (int i = 0; i < size1; i++)
					{
						num3->Add(num1[i] + num2[i]);
						size3 += 1;
					}
					for (int j = size1; j < size2; j++)
					{
						num3->Add(num2[j]);
						size3 += 1;
					}
				}
				Balance(num3, size3);
			}
			break;
			case '!':
			{
				Number1 = 0;
				for (int i = 0; i < size1; i++)
				{
					Number1 += num1[i] * pow(10, i);
					num3->Add(num1[i]);
					size3 += 1;
				}
				for (int j = Number1 - 1; j > 0; j--)
				{
					for (int k = 0; k < size3; k++)
					{
						num3[k] *= j;
					}
					Balance(num3, size3);
				}
			}
			break;
		}
		if (operation != '/')
		{
			print();
			num1->Clear();
			size1 = size3;
			for (int i = 0; i < size1; i++)
			{
				num1->Add(num3[i]);
			}
			num3->Clear();
			num2->Clear();
			size2 = 0;
			size3 = 0;
		}
	}
	private: System::Void print()
	{
		if (negative)
		{
			input->Text = "-";
		}
		if (size3 != 0)
		{
			int j = size3 - 1;
			while (num3[j] == 0)
			{
				size3 -= 1;
				j -= 1;
				if (j == -1)
				{
					break;
				}
			}
		}
		if (size3 > 8)
		{
			this->input->Text = System::Convert::ToString(num3[size3 - 1]);
			this->input->Text += ".";
			this->input->Text += System::Convert::ToString(num3[size3 - 2]);
			this->input->Text += "E";
			this->input->Text += System::Convert::ToString(size3 - 1);
		}
		else
		{
			for (int i = size3 - 1; i >= 0; i--)
			{
				this->input->Text += System::Convert::ToString(num3[i]);
			}
			if (Decsize != 0)
			{
				this->input->Text += ".";
				for (int i = Decsize - 1; i >= 0; i--)
				{
					this->input->Text += System::Convert::ToString(decimal[i]);
				}
			}
		}
		if (size3 == 0)
		{
			input->Text = "0";
		}
	}
};
};