#include <IsLower.h>

using namespace std;
namespace IsLower
{
	void isLower()
	{
		cout << "Please, enter any symbol: ";
		char symbol;
		cin >> symbol;
		cout << islower(symbol) << endl << endl;
	}

}