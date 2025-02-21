#include <AdvancedTable.h>

using namespace std;
namespace AdvancedTable
{
	void AdvancedTable()
	{
		cout << setiosflags(ios::left) << setfill(' ') << setw(15)
			<< "Фамилия" << setw(15) << "Имя" << setw(15) << "Адрес" << setw(15) << "Город" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << setiosflags(ios::left) << setw(15) << "Петров" << setw(15) << "Василий"
			<< setw(15) << "Кленовая 16" << setw(15) << "Санкт-Петербург" << endl;
		cout << setiosflags(ios::left) << setw(15) << "Иванов" << setw(15) << "Сергей"
			<< setw(15) << "Осиновая 3" << setw(15) << "Находка" << endl;
		cout << setiosflags(ios::left) << setw(15) << "Сидоров" << setw(15) << "Иван"
			<< setw(15) << "Березовая 21" << setw(15) << "Калининград" << endl << endl;
	}
}