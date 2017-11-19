#include "ArrayInt.h"

int main() {
	//declaring array
	

	int array[5];
	cout << "Enter 5 numbers randomly : " << endl;
	for (int i = 0; i < 5; i++)
	{
		//Taking input in array  
		cin >> array[i];
	}
	cout << endl;
	cout << "Input array is: " << endl;
	ArrayInt m_arr(array,5);
	m_arr.Hi();
	m_arr.printArray();
	cout << endl;
	// Bubble Sort Starts Here
	m_arr.BubbleSort();

	// Displaying Sorted array
	cout << "  Sorted Array is: " << endl;

	m_arr.printArray();
	return 0;
}