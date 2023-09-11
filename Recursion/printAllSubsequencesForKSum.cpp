//print All the Subsequences Fora k Sum
//Same as the printAllSubsequences code but with a condition to only print the subsequences that outputs only the ones that satify
//sum.

//THIS IS IMPORTANT

//assume k is 2 here, just an example
//so the answer should be printed as 1 1 and 2

#include<bits/stdc++.h>
using namespace std;


void subsequence(int a[], vector<int> ds, int n, int i, int sum){       //you need to pass k value also during dynamic runtime
	if(i == n){
		if(sum == 2){       //condition to check if sum is == k
			for(auto j : ds)
				cout << j << " ";
			cout << endl;
		}
		return;
	}
	ds.push_back(a[i]);
	sum += a[i];        //Keeps the sum of the array values in a variable
	subsequence(a, ds, n, i + 1, sum);
	ds.pop_back();
	sum -= a[i];
	subsequence(a, ds, n, i + 1, sum);
}


int main(){
	int a[] = {1,2,1};
	vector<int> ds;
	subsequence(a, ds, 3, 0, 0);
}
