#include "pch.h"
#include <iostream>
#include "THashTable.h"

int main()
{
	THashTable<int> table;
	int count;
	cout << "Write count of elements in table: ";
	cin >> count;
	TElem<int> curr_elem;
	char str[100];
	for (int i = 0; i < count; i++)
	{
		int data;
		cout << "Write key " << i + 1 << ": ";
		cin >> str;
		cout << "Write data " << i + 1 << ": ";
		cin >> data;
		String curr_key(str);
		curr_elem.SetData(data);
		curr_elem.SetKey(curr_key);
		table.Add(curr_elem);
	}
	cout << endl << table;
	cout << "Write count of elements in table that you want to delete: ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Write key: ";
		cin >> str;
		String curr_key(str);
		table.Del(curr_key);
	}
	cout << endl << table;
}
