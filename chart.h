#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <chrono>
#include <msclr/marshal_cppstd.h>

namespace cipherApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		void SetChartData(DataGridView^ dataGridView, int textLenColumnIndex, int timeExecutionColumnIndex, String^ keyLen)
		{
			for (int i = 0; i < dataGridView->Rows->Count; i++) {
				if (dataGridView->Rows[i]->Cells[timeExecutionColumnIndex]->Value == nullptr)
					break;
				int textLen = Convert::ToInt32(dataGridView->Rows[i]->Cells[textLenColumnIndex]->Value);
				std::string timeString = msclr::interop::marshal_as<std::string>(dataGridView->Rows[i]->Cells[timeExecutionColumnIndex]->Value->ToString());
				int timeExecution = std::stoi(timeString.substr(0, timeString.size()));

				chart1->Series["długość tekstu"]->Points->AddXY(i + 1, textLen);
				chart1->Series["czas wykonania"]->Points->AddXY(i + 1, timeExecution);
			}

			chart1->ChartAreas[0]->AxisX->Title = "Numer wiersza";
			chart1->ChartAreas[0]->AxisY->Title = "Długość tekstu";
			chart1->ChartAreas[0]->AxisY2->Title = "Czas wykonania [ms]";
			chart1->Titles[0]->Text = keyLen;
			chart1->Series["czas wykonania"]->YAxisType = AxisType::Secondary;
		}

		void setSeriesChart()
		{

		}
		void SetChartData(int textLen, int timeExecution)
		{
			chart1->Series["textLen"]->Points->AddXY(textLen);
			chart1->Series["timeExecution"]->Points->AddXY(timeExecution);
		}

		void AddChartData(int index, int textLen, int timeExecution)
		{
			if (index < 0 || index >= chart1->Series->Count)
				return;
			chart1->Series[index]->Points->AddXY(textLen, timeExecution);

		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"długość tekstu";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->MarkerBorderColor = System::Drawing::Color::White;
			series2->Name = L"czas wykonania";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(942, 457);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"title";
			this->chart1->Titles->Add(title1);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 457);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
