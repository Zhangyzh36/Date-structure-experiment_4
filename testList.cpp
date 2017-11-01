#include "List.hpp"
#include "ArrList.hpp"
#include <stdio.h>

void instructions();
int getCommand();
bool doCommand(int command);
void testArrList();
void testList();

int main()
{
	instructions();
	while ( doCommand(getCommand())){
		instructions();
	}
	return 0;
}

void instructions()
{
	cout << endl << "*************************************" << endl;
	cout << "����������ָ��" << endl;
	cout << "  -[1] ����˳���" << endl;
	cout << "  -[2] ������ʽ��" << endl;
	cout << "  -[0] �˳�" << endl;
	cout << "*************************************" << endl << endl; 
}

int getCommand()
{
	string str;
	cout << "������ָ�";
	cin >> str;
	fflush(stdin);
	while ( str[0] != '0' && str[0] != '1' && str[0] != '2' )
	{
		cout << "��������ȷ��ָ��(0��1��2)��";
		cin >> str; 
	}
	
	return str[0] - '0';
}

bool doCommand(int command) {
	switch (command) {
		case 0:
			return false;
		case 1:
			testArrList();
			return true;
		case 2:
			testList();
			return true;
	}
}

void testArrList()
{
	ArrList li;
	
	cout << endl << "*************************************" << endl;
	cout << "˳����ѽ�����������ָ��:" << endl;
	cout << "  -[1] ����" << endl;
	cout << "  -[2] ɾ��" << endl;
	cout << "  -[0] �˳�" << endl;
	cout << "*************************************" << endl << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					cout << "\n��ǰ���ݣ�";
					li.print();
					string value;
					int index;
					cout << "\n������Ҫ�����ֵ:";
					cin >> value;
					cout << "������Ҫ�����λ�ã�";
					cin >> index;
					fflush(stdin);
					if (li.insert(index,value))
						cout << value << "����ɹ�" << endl; 
					else
						cout << value << "����ʧ��" << endl;
					cout << "�����";
					li.print();
					cout << endl; 
				}
				break;
			
			case 2:
				{
					cout << "\n��ǰ���ݣ�";
					li.print();
					int index;
					cout << "������Ҫɾ����λ�ã�";
					cin >> index;
					fflush(stdin);
					if (li.remove(index))
						cout << "ɾ���ɹ�" << endl; 
					else
						cout << "ɾ��ʧ��" << endl;
					cout << "ɾ����";
					li.print();
					cout << endl;
				}
				break;
		}
	}
}

void testList() 
{
	List li;
	
	cout << endl << "*************************************" << endl;
	cout << "˳����ѽ�����������ָ��:" << endl;
	cout << "  -[1] ����" << endl;
	cout << "  -[2] ɾ��" << endl;
	cout << "  -[0] �˳�" << endl;
	cout << "*************************************" << endl << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					cout << "\n��ǰ���ݣ�";
					li.print();
					string value;
					int index;
					cout << "\n������Ҫ�����ֵ:";
					cin >> value;
					cout << "������Ҫ�����λ�ã�";
					cin >> index;
					fflush(stdin);
					if (li.insert(index,value))
						cout << value << "����ɹ�" << endl; 
					else
						cout << value << "����ʧ��" << endl;
					cout << "�����";
					li.print();
					cout << endl;
				}
				break;
			
			case 2:
				{
					cout << "\n��ǰ���ݣ�";
					li.print();
					int index;
					cout << "������Ҫɾ����λ�ã�";
					cin >> index;
					fflush(stdin);
					if (li.remove(index))
						cout << "ɾ���ɹ�" << endl; 
					else
						cout << "ɾ��ʧ��" << endl;
					cout << "ɾ����";
					li.print();
					cout << endl;
				}
				break;
		}
	}
}

