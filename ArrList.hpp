#ifndef ARRLIST_H
#define ARRLIST_H

#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

class ArrList {
public:
	ArrList();
	bool insert(int index, string value);
	bool remove(int index);
	void print() const;
private:
	int size;
	string data[MAX_SIZE];
};

#endif