#include <DoshConverter.h>

using namespace std;
namespace DoshConverter
{
	void OldToNew()
	{
		int funt, shilling, pens;
		char dummy;
		cout << "Please, enter old style amount of dosh (FX.X.X): F";
		cin >> funt >> dummy >> shilling >> dummy >> pens;

		int resulting_pens = (shilling * 12 + pens)/2.4;
		cout << "Resulting decimal pounds: F" << funt << "." << resulting_pens << endl << endl;
	}

	void NewToOld()
	{
		int funt, shilling, pens;
		char dummy;
		cout << "Please, enter amount of decimal dosh (FX.X): F";
		cin >> funt >> dummy >> pens;

		int resulting_shillings = (pens * 2.4) / 12;
		int resulting_pens = (int)(pens * 2.4) % 12;
		cout << "Resulting old pounds: F" << funt << "." << resulting_shillings << "." << resulting_pens << endl << endl;
	}
}