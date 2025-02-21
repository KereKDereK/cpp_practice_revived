#include <CF.h>

using namespace std;
namespace CF
{
	double CelciusToF()
	{
		double celcius;
		cout << "Please, enter temperature in celcius: ";
		cin >> celcius;
		double farh = celcius * ((double)9 / 5) + 32;
		cout << "Here is an equivalent in F: " << farh << endl << endl;
		return farh;
	}

	double CelToF(int celcius)
	{
		double farh = celcius * ((double)9 / 5) + 32;
		cout << "Here is an equivalent in F: " << farh << endl;
		return farh;
	}

	double FtoC(int f)
	{	
		double celc = (f - 32) * ((double)5 / 9);
		cout << "Here is an equivalent in C: " << celc << endl;
		return celc;
	}
}