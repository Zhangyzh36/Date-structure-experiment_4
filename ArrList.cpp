#include "ArrList.hpp"

ArrList::ArrList()
{
	size = 0;
}

bool ArrList::insert(int index, string value)
{
	if (size == MAX_SIZE || index > size || index < 0)
		return false;
	for (int i = size; i >= index + 1; --i)
		data[i] = data[i - 1];
	data[index] = value;
	size++;
	return true;

}

bool ArrList::remove(int index)
{
	if (size == 0 || index >= size || index < 0)
		return false;
	for (int i = index; i < size - 1; ++i)
		data[i] = data[i + 1];
	size--;
	return true;
}

void ArrList::print() const
{
	if (!size)
	{	
		cout << "empty list" << endl;
		return;
	}
	for (int i = 0; i < size; ++i)
		cout << data[i] << " ";
	cout << endl;
}

