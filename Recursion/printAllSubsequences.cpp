// Print all the subsequences that are found in the array
// A subsequence is different from a subarray, it is non contigous
// Example: a = {3, 1, 2}
// Subarray : {}, {3}, {1}, {3}, {3,1}, {3,2}, {1,2}, {3,1,2} -> non contiguous
// Subarray: {}, {3}, {1}, {2}, {3,1}, {1,2}, {3,1,2}   (There's no {3,2} as it is breaking the sequence) -> continguous
//Refer the PNG image for further clarification

// THIS IS AN IMPORTANT ALGO FOR RECURSION AND DP AS WELL

#include<bits/stdc++.h>
using namespace std;


void subsequence(int a[], vector<int> ds, int n, int i){
	if(i == n){
		for(auto j : ds)
		    cout << j << " ";
		cout << endl;
	    return;
	}
	ds.push_back(a[i]);
	subsequence(a, ds, n, i + 1); // This takes the i'th value in the array
	ds.pop_back();
	subsequence(a, ds, n, i + 1);   //This doesnt not take the i'th value in the array
}


int main(){
	int a[] = {3,1,2};
	vector<int> ds;     // ds is used to add and remove the particular value in the array
	subsequence(a, ds, 3, 0);
}


//Idea behind   (take/dont take represents whether to take the i'th value int the array or not)
// {3,1,2}
// for 3 - take, dont take, dont take
// for 2 - dont take, dont take, take
// for 1 - dont take, take, dont take
// for 3, 2 - take, dont take, take
// .
// .
// .
// .
// .
// and so on

//Time complexity - O(2^n)
//Space Complexity - O(n)