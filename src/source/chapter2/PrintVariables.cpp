#include <PrintVariables.h>

using namespace std;
namespace PrintVariables
{
	void PrintVariables()
	{
		int firstVariable = 10;
		cout << firstVariable << endl;
		firstVariable += 10;
		cout << firstVariable << endl;
		cout << --firstVariable << endl << endl;
	}
}
