#pragma once
#include <iostream>

using namespace std;



class ArrayInt
{
	int * array;
	int length;
public:
	ArrayInt(int * arr, int len);
	~ArrayInt();
	 inline void BubbleSort();
	 inline void Hi() { cout << "Hi" << endl; }
	inline void printArray();
};

void ArrayInt::BubbleSort() {
	int temp;
	for (int i2 = 0; i2 <= length - 1; i2++)
	{
		for (int j = 0; j<length - 1; j++)
		{
			if (array[j]>array[j + 1])
			{
				cout << "swap" << endl;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void ArrayInt::printArray()
{
	for (int i3 = 0; i3 < length; i3++)
	{
		cout << "\t\t\tValue at " << i3 << " Index: " << array[i3] << endl;
	}
}
