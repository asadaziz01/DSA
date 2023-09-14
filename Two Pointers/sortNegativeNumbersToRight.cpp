// Given an array {12, -1, 20, -45, -34, 19, 20, -23}
// Sort the Array in such a way that all the negative numbers are to the left and postive to right
// There are 3 approaches
// 1. Use sorting -> Time Comp. - O(nlogn)
// 2. Take a temp array var and store all the -ve no. first, and then +ve -> Time Comp. - O(n) but Space Comp.
//  - O(n) becus we're making a new temp arr of n size.
// 3. Two pointers -> Time Comp. - O(n) and Space Comp. - O(1)

// Approach :
// We will use two variables index and j, index traverse's through the array and checks if the current
// arr value is negative or not.
// j is used to to swap places with the index no. if the that index has a negative number in the array and then
// j is incremented

#include<bits/stdc++.h>
using namespace std;

void sortNegativeNumbers(int *arr, int n){
	int j = 0;
	for (int index = 0; index < n; ++index)
	{
		if(arr[index] < 0){         //checks if the arr[i] has a negative value
			swap(arr[index], arr[j]);
			j++;
		}
	}
}


int main(){
	int a[] = {12, -1, 20, -45, -34, 19, 20, -23};  

	sortNegativeNumbers(a, 8);

	for (int i = 0; i < 8; ++i)
	{
		cout << a[i] << " ";
	}
	
}