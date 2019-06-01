#include "pch.h"
#include <iostream>
#include "sTable.h"
using namespace std;

int main()
{
	TSortTable<int> table(7);
	TSortElem<int> elem;
	table.Put("a", 0);
	table.Put("ab", 1);
	table.Put("abc", 2);
	table.Put("abcd", 3);
	table.Put("abcde", 5);
	table.Put("abcdea", 8);
	elem = table.Search("abcf");
	table.Del("abcd");
	elem = table.Search("abcd");
	cout << "Abcd " << elem.GetKey() << elem.GetData() << "\n";
	return 0;
}

