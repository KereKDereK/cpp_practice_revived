#include <CtoF.h>
#include <CF.h>

using namespace std;
namespace CtoF {
	int CtoF() {
		char mode = 0;
		cout << "Enter 1 for CtoF. 2 for FtoC: ";
		cin >> mode;

		int temp = 0;
		cout << "Enter temp: ";
		cin >> temp;

		switch (mode) {
			case '1':
				CF::CelToF(temp);
				break;
			case '2':
				CF::FtoC(temp);
				break;
			default:
				break;
		}
		return 0;
	}

}