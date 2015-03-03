//Clint Mucha's Binary Search! 2/19/15

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

bool BinarySearch(int array[10], int size, int value)
{
	if (size==0)
		return false;

	else
	{
		int i, j, k;
		i = 0;
		j = size-1;

		while (i < j)
		{
			k = (i+j) / 2;
			
			if (value,array[k])
				j = k-1;
			else if (value,array[k+1])
				i = k+1;
			else
				i = j = k;
		}
		return (value,array[i]) ? true : false;
	}
}

int main()
{
Start:
	system("cls");
		//Searching:
	int guessnumber;
	int ArraySearch[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		//Huntin' for the numbah
	cout << "OK, now please input a number (0-999) to search for: ";
	cin >> guessnumber;
	if (BinarySearch(ArraySearch, 50, guessnumber))
		cout << "Your number: " << guessnumber << " was found!" << endl;
	else
		cout << "The number is not found!" << endl;
	system("pause");
	goto Start;
}