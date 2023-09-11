//print the count of all the subsequences that returns the sum as k
//same code as the previous codes only changes is to return an int func and return 1 if satisfied or 0
//and keep 2 variables that take the count from take and not take sides

#include<bits/stdc++.h>
using namespace std;


int subsequence(int a[], int n, int i, int sum){       //you need to pass k value also during dynamic runtime
	if(i == n){
		if(sum == 2){       //condition to check if sum is == k
            return 1;
		}
		return 0;
	}
	sum += a[i];        //Keeps the sum of the array values in a variable
	int l = subsequence(a, n, i + 1, sum); // l represents the count from 'take' side
	sum -= a[i];
	int r = subsequence(a, n, i + 1, sum); // r represents the count from 'not take' side
    return l + r;
}


int main(){
	int a[] = {1,2,1};
	int count = subsequence(a, 3, 0, 0);

    cout << count;
}