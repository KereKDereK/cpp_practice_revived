#include <PrintTable.h>

using namespace std;
namespace PrintTable
{
	void PrintTable(char symbol)
	{
		cout
			<< setw(4) << 1990 << setw(9) << setfill(symbol) << 135 << endl
			<< setw(4) << 1991 << setw(9) << setfill(symbol) << 7290 << endl
			<< setw(4) << 1992 << setw(9) << setfill(symbol) << 11300 << endl
			<< setw(4) << 1993 << setw(9) << setfill(symbol) << 16200 << endl << endl;
	}
}