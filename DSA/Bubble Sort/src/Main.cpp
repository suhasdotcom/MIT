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

void bubbleSort(vector<int> &arrayToBeSorted);
void swap(int &,int &);

int main() {
	int numOfElements=0;
	cout << "Enter the number of elements to be sorted: ";
	cin>>numOfElements;
	vector<int> arrayToBeSorted(numOfElements);
	cout << "Enter " << numOfElements << " Elements:\n";
	for(int i=0; i<numOfElements; i++)
		cin >> arrayToBeSorted[i];

	bubbleSort(arrayToBeSorted);
	copy(arrayToBeSorted.begin(), arrayToBeSorted.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

void bubbleSort(vector<int> &arrayToBeSorted) {
	std::size_t i = 0, j = 0;
	for (i = 0; i < arrayToBeSorted.size()-1; i++)	//first element is already sorted
		for(j=0; j<arrayToBeSorted.size(); j++)
			if(arrayToBeSorted[j] > arrayToBeSorted[j+1])
				swap(arrayToBeSorted[j], arrayToBeSorted[j+1]);
}

void swap(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
}
