#include <CubicFoot.h>

using namespace std;

namespace CubicFoot
{
	double CubicFootTransform()
	{
		double gallons;
		cout << "Please, enter gallons count: ";
		cin >> gallons;
		double cubic = gallons / 7.481;
		cout << "Here is an equivalent amount of cubic foots: " << cubic << endl << endl;
		return cubic;
	}
}