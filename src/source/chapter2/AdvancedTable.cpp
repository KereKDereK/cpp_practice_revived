#include <AdvancedTable.h>

using namespace std;
namespace AdvancedTable
{
	void AdvancedTable()
	{
		cout << setiosflags(ios::left) << setfill(' ') << setw(15)
			<< "�������" << setw(15) << "���" << setw(15) << "�����" << setw(15) << "�����" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << setiosflags(ios::left) << setw(15) << "������" << setw(15) << "�������"
			<< setw(15) << "�������� 16" << setw(15) << "�����-���������" << endl;
		cout << setiosflags(ios::left) << setw(15) << "������" << setw(15) << "������"
			<< setw(15) << "�������� 3" << setw(15) << "�������" << endl;
		cout << setiosflags(ios::left) << setw(15) << "�������" << setw(15) << "����"
			<< setw(15) << "��������� 21" << setw(15) << "�����������" << endl << endl;
	}
}