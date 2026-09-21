//g++ kadaneAlogo.cpp -o kadaneAlogo; .\kadaneAlogo.exe
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={1, 2, -1, 1, -2, 2, 3, 4, -5, 6, 1, -5, 3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int currSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currSum+=arr[i];
		if(currSum<0){
			currSum=0;
		}
		maxSum=max(maxSum,currSum);
	}
	cout<<"max subarray sum is: "<<maxSum;
	return 0;
}