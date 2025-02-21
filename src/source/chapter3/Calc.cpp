#include <Calc.h>

using namespace std;
namespace Calc {
	int Calc() {
		char yn = 'n';
		do {
			int first = 0;
			int second = 0;
			char oper = '\0';
			cout << "Enter CALc input: ";
			cin >> first >> oper >> second;
			cout << endl << "Result: ";
			switch (oper) {
				case '/':
					cout << first / second;
					break;
				case '-':
					cout << first - second;
					break;
				case '*':
					cout << first * second;
					break;
				case '+':
					cout << first + second;
					break;
				default:
					cout << "unknown operation";
					break;
			}
			cout << endl << "Continue? (y/n): ";
			cin >> yn;
			cout << endl;
		} while (yn != 'n');
		return 0;
	}
}