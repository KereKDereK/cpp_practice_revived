#include <Chapter2.h>

using namespace std;
namespace Chapter2
{
	int Chapter2()
	{
		cout << "--------------CPP practice session--------------" << endl;
		cout << "-------------------Chapter 2--------------------" << endl;
		cout << "---------------------Task1----------------------" << endl << endl;
		CubicFoot::CubicFootTransform();
		cout << "---------------------Task2----------------------" << endl << endl;
		PrintTable::PrintTable(' ');
		cout << "---------------------Task3----------------------" << endl << endl;
		PrintVariables::PrintVariables();
		cout << "---------------------Task4----------------------" << endl << endl;
		PrintPoetry::Print();
		cout << "---------------------Task5----------------------" << endl << endl;
		IsLower::isLower();
		cout << "---------------------Task6----------------------" << endl << endl;
		CurrencyConvert::ConvertCurrency();
		cout << "---------------------Task7----------------------" << endl << endl;
		CF::CelciusToF();
		cout << "---------------------Task8----------------------" << endl << endl;
		PrintTable::PrintTable('.');
		cout << "---------------------Task9----------------------" << endl << endl;
		SimpleMath::CountFractions();
		cout << "---------------------Task10---------------------" << endl << endl;
		DoshConverter::OldToNew();
		cout << "---------------------Task11---------------------" << endl << endl;
		AdvancedTable::AdvancedTable();
		cout << "---------------------Task12---------------------" << endl << endl;
		DoshConverter::NewToOld();
		return 0;
	}
}