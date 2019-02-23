#include "pch.h"
#include <iostream>
#include "List.h"


using namespace std;


template <class T> bool AreEqual(T value1, T value2) {
	return value1 == value2 ? true : false;
}

int main()
{
	List<int> lst;
	
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	
	cout << AreEqual(lst.At(1), 2);

	return 0;
}