#ifndef LIST_HPP
#define LIST_HPP

#include <string>
#include <iostream>
using namespace std;

typedef struct ListNode {
	ListNode(string _value, ListNode* _next = NULL) :value(_value), next(_next) {}
	string value;
	ListNode *next;
}Node;

class List {
public:
	List();
	bool insert(int index, string newValue);
	bool remove(int index);
	void print() const;
	~List();
private:
	int size;
	Node *head;
};


#endif