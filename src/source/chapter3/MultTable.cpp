#include <MultTable.h>

using namespace std;

namespace MultTable {
	int MultTable() {
		unsigned int number;
		cout << "Please, enter number to mult: ";
		cin >> number;
		int setw_const = 8;

		cout << setw(setw_const) << setfill(' ') << "";
		for (int i = 1; i < 11; ++i) {
			cout << setw(setw_const) << setfill(' ') << i;
		}
		cout << endl;

		unsigned int current_mult = 1;
		for (int i = 0; i < 20; ++i) {
			cout << setw(setw_const) << setfill(' ') << i * 10;
			for (int j = 0; j < 10; ++j) {
				cout << setw(setw_const) << setfill(' ') << number * current_mult++;
			}
			cout << endl;
		}
		return 0;
	}
}