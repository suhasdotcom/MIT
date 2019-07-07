/*
 * Main.cpp
 *
 *  Created on: 07-Jul-2019
 *  Author: suhas
 *  Insertion Sort
 *  Complexity O(n<sup>2</sup>)
 */

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &arrayToBeSorted);
void swap(int &,int &);

int main() {
	int numOfElements=0;
	cout << "Enter the number of elements to be sorted: ";
	cin>>numOfElements;
	vector<int> arrayToBeSorted(numOfElements);
	cout << "Enter " << numOfElements << " Elements:\n";
	for(int i=0; i<numOfElements; i++)
		cin >> arrayToBeSorted[i];

	insertionSort(arrayToBeSorted);
	copy(arrayToBeSorted.begin(), arrayToBeSorted.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

void insertionSort(vector<int> &arrayToBeSorted) {
	std::size_t sorted = 0, unsorted = 0;
	for (unsorted = 1; unsorted < arrayToBeSorted.size(); unsorted++)	//first element is already sorted
		for(sorted=0; sorted <unsorted; sorted++)
			if(arrayToBeSorted[sorted] > arrayToBeSorted[unsorted])
				swap(arrayToBeSorted[sorted], arrayToBeSorted[unsorted]);
}

void swap(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
}
