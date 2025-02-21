#include <SimpleMath.h>

using namespace std;
namespace SimpleMath
{
	void CountFractions()
	{
		int firstUpper, secondUpper, firstDown, secondDown, resultUpper, resultDown;
		char trash;
		cout << "Please, enter first fraction in \"a/b\" format: ";
		cin >> firstUpper >> trash >> firstDown;
		cout << "Please, enter second fraction in \"a/b\" format: ";
		cin >> secondUpper >> trash >> secondDown;

		resultUpper = firstUpper * secondDown + firstDown * secondUpper;
		resultDown = firstDown * secondDown;

		cout << "Resulting fraction: " << resultUpper << "/" << resultDown << endl << endl;
	}
}