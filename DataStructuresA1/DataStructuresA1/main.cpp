#include <iostream>
#include "Array.h"
#include "OrderedArray.h"
#include "UnorderedArray.h"
using namespace std;

int main()
{
	cout << "Assignment 1 Testing" << endl << endl;

	OrderedArray<int> array(3); // initial size is going to be 3

	cout << "Pushing in values to ordered array. Allows duplicates for time being." << endl;
	cout << "When max size is reached, The grow value will multiply by 2 and the array will expand by the updated grow value" << endl;
	// Test the expansion of the array
	// for the time being, this allows duplicate data to be pushed
	// If there's enough pushes to the point it reaches the maximum size of the array, 
	array.push(43);
	array.push(8);
	array.push(23);
	array.push(94);
	array.push(17);
	array.push(83);
	array.push(44);
	array.push(28);
	array.push(23);
	array.push(44);
	array.push(46);
	array.push(2);
	array.push(3);
	array.push(96);
	array.push(34);

	cout << "Ordered Array Contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}
	cout << endl;

	cout << "Changing Constructor Flag so that we don't allow duplicates anymore" << endl; 
	// I want to set the constructor flag for duplicates to false 
	array.setDuplicateFlag(false);

	// push more values here with duplicates to test
	// it wouldn't allow any duplicates to be pushed from this point forward

	array.push(46);
	array.push(2);
	array.push(34);

	cout << endl << endl;
	cout << "Search for 43 was found at index" << endl;
	cout << array.search(43) << endl;
	cout << endl;
	cout << "Current Size of OrderedArray: " << array.GetSize() << endl << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "Unordered Array Test" << endl;
	cout << "Merge Sort Algorithm" << endl;

	// just here so that inherited unordered array class works
	UnorderedArray<int> uarray(5);
	uarray.push(80);
	uarray.push(64);
	uarray.push(99);
	uarray.push(76);
	uarray.push(5);

	cout << "Before sort: ";
	for (int i = 0; i < uarray.GetSize(); i++)
	{
		cout << " " << uarray[i];
	}

	cout << endl;

	uarray.MergeSort();

	cout << "After sort: ";
	for (int i = 0; i < uarray.GetSize(); i++)
	{
		cout << " " << uarray[i];
	}

	cout << endl << endl;

	return 0;
}