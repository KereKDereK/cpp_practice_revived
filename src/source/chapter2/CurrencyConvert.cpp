#include <CurrencyConvert.h>

using namespace std;
namespace CurrencyConvert
{
	void ConvertCurrency()
	{
		double doshRate = 1.487, frankRate = 0.172, deutchRate = 0.584, yenRate = 0.00955;
		double dollars = 0;
		cout << "Please, enter money sum in dollars: ";
		cin >> dollars;
		cout
			<< setw(11) << setfill(' ') << "Dosh" << setw(15) << setfill('.') << dollars / doshRate << endl
			<< setw(11) << setfill(' ') << "Frank" << setw(15) << setfill('.') << dollars/frankRate << endl
			<< setw(11) << setfill(' ') << "Deutch Mark" << setw(15) << setfill('.') << dollars/deutchRate << endl
			<< setw(11) << setfill(' ') << "Yen" << setw(15) << setfill('.') << dollars/yenRate << endl << endl;
	}
}
