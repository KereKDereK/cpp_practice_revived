#include <Chapter2.h>
#include <Chapter3.h>

int main(int argc, char* argv[]) {
	using namespace std;
	if (argc < 2) {
		cout << "[!] No chapter number. Abort." << endl;
		return -1;
	}

	switch (argv[1][0]) {
		case '2':
			Chapter2::Chapter2();
			break;
		case '3':
			Chapter3();
			break;
		default:
			cout << "[!] Chapter is not implemented yet or incorrect input. Abort." << endl;
			return -1;
	}
	return 0;
}