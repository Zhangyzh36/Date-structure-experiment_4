#include "List.hpp"

List::List()
{
	head = NULL;
	size = 0;
}

bool List::insert(int index, string newValue)
{
	if (index > size || index < 0)
		return false;

	Node *newPtr = new Node(newValue);
	if (!newPtr)
		return false;

	if (!index)
	{
		newPtr->next = head;
		head = newPtr;
	}
	else
	{
		Node *prePtr = NULL;
		Node *curPtr = head;
		for (int i = 0; i < index; ++i)
		{
			prePtr = curPtr;
			curPtr = curPtr->next;
		}
		newPtr->next = curPtr;
		prePtr->next = newPtr;
	}
	size++;
	return true;
}

bool List::remove(int index)
{
	if (size == 0 || index >= size || index < 0)
		return false;

	if (!index)
	{
		Node *temp = head;
		head = head->next;
		delete temp;
	}
	else
	{
		Node *curPtr = head;
		for (int i = 0; i < index - 1; ++i)
			curPtr = curPtr->next;
		Node *temp = curPtr->next;
		curPtr->next = curPtr->next->next;
		delete temp;
	}
	size--;
	return true;
}

void List::print() const
{
	Node *curPtr = head;
	if (!curPtr)
	{
		cout << "empty list." << endl;
		return;
	}
	while (curPtr->next) {
		cout << curPtr->value << "->";
		curPtr = curPtr->next;
	}
	cout << curPtr->value << endl; 
}

List::~List()
{
	while (size) {
		remove(0);
	}
}