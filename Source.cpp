#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<fstream>
#include<algorithm>

#include "Array.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

    Array<int> arr(5); 
    arr.set(1, 10); 
    arr.print();

    
    arr.SetSize(10); 
    arr.print();

    arr.GetUpperBound();
    arr.IsEmpty();

    arr.FreeExtra(); 
    arr.print();

    Array<int> arr2(3);
    arr2.set(5, 15);
    arr2.print();

    arr2.GetAt(1);
    arr2.SetAt(1, 42); 
    arr2.print();

    arr2.InsertAt(1, 99); 
    arr2.print();

    arr2.RemoveAt(2); 
    arr2.print();

    Array<int> arr3(2);
    arr3.set(20, 30);
    arr3.print();

    arr2.Append(arr3); 
    arr2.print();

    Array<int> arr4;
    arr4 = arr2; 
    arr4.print();

}
