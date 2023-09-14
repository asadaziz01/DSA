// Pretty obvious, sorted array, search for the index of target element
// Time Complexity :- O(logn)

//Using Loop:-
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
	int start = 0;
	int end = n - 1;
	
	while(start <= end){        //Checks if the start pointer exceeds the end pointer
		int mid = start + (end - start) / 2;

		if(arr[mid] == target){
			return mid;
		}

		else if(arr[mid] < target){     //Target element to the right half of the array
			start = mid + 1;
		}

		else if(arr[mid] > target){     //Target element to the left half of the array
			end = mid - 1;
		}
	} 
	return - 1;
}


int main(){
	int a[] = {1, 3, 5, 8, 10, 16, 24, 56, 90};

	int ansIndex = binarySearch(a, 9, 24);

	cout <<"Found at index: " << ansIndex;
	
}


//Using Recursion:- 
// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int start, int end, int target){

// 	if(start <= end){
// 		int mid = start + (end - start) / 2;

// 		if(arr[mid] == target){
// 			return mid;
// 		}

// 		else if(arr[mid] < target){
// 			return binarySearch(arr, mid + 1, end, target);
// 		}

// 		else if(arr[mid] > target){
// 			return binarySearch(arr, start	, mid - 1, target);
// 		}
// 	} 
// 	return - 1;
// }


// int main(){
// 	int a[] = {1, 3, 5, 8, 10, 16, 24, 56, 90};

// 	int ansIndex = binarySearch(a, 0, 9, 24);

// 	cout <<"Found at index: " << ansIndex;
	
// }