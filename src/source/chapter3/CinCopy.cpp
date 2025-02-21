#include <CinCopy.h>

using namespace std;
namespace CinCopy {
	int CinCopy() {
		int result = 0;
		cout << "Enter 6-digit number: ";
		for (int i = 0; i < 6; ++i) {
			result *= 10;
			result += getche() - '0';
		}
		cout << endl << "You entered: " << result << endl;
		return 0;
	}
}