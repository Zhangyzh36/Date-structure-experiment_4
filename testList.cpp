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
	cout << "请输入以下指令" << endl;
	cout << "  -[1] 建立顺序表" << endl;
	cout << "  -[2] 建立链式表" << endl;
	cout << "  -[0] 退出" << endl;
	cout << "*************************************" << endl << endl; 
}

int getCommand()
{
	string str;
	cout << "请输入指令：";
	cin >> str;
	fflush(stdin);
	while ( str[0] != '0' && str[0] != '1' && str[0] != '2' )
	{
		cout << "请输入正确的指令(0或1或2)：";
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
	cout << "顺序表已建立，请输入指令:" << endl;
	cout << "  -[1] 插入" << endl;
	cout << "  -[2] 删除" << endl;
	cout << "  -[0] 退出" << endl;
	cout << "*************************************" << endl << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					cout << "\n当前数据：";
					li.print();
					string value;
					int index;
					cout << "\n请输入要插入的值:";
					cin >> value;
					cout << "请输入要插入的位置：";
					cin >> index;
					fflush(stdin);
					if (li.insert(index,value))
						cout << value << "插入成功" << endl; 
					else
						cout << value << "插入失败" << endl;
					cout << "插入后：";
					li.print();
					cout << endl; 
				}
				break;
			
			case 2:
				{
					cout << "\n当前数据：";
					li.print();
					int index;
					cout << "请输入要删除的位置：";
					cin >> index;
					fflush(stdin);
					if (li.remove(index))
						cout << "删除成功" << endl; 
					else
						cout << "删除失败" << endl;
					cout << "删除后：";
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
	cout << "顺序表已建立，请输入指令:" << endl;
	cout << "  -[1] 插入" << endl;
	cout << "  -[2] 删除" << endl;
	cout << "  -[0] 退出" << endl;
	cout << "*************************************" << endl << endl;
	
	int command;
	while ( command = getCommand() ) 
	{
		switch (command) {
			case 1: 
				{
					cout << "\n当前数据：";
					li.print();
					string value;
					int index;
					cout << "\n请输入要插入的值:";
					cin >> value;
					cout << "请输入要插入的位置：";
					cin >> index;
					fflush(stdin);
					if (li.insert(index,value))
						cout << value << "插入成功" << endl; 
					else
						cout << value << "插入失败" << endl;
					cout << "插入后：";
					li.print();
					cout << endl;
				}
				break;
			
			case 2:
				{
					cout << "\n当前数据：";
					li.print();
					int index;
					cout << "请输入要删除的位置：";
					cin >> index;
					fflush(stdin);
					if (li.remove(index))
						cout << "删除成功" << endl; 
					else
						cout << "删除失败" << endl;
					cout << "删除后：";
					li.print();
					cout << endl;
				}
				break;
		}
	}
}

