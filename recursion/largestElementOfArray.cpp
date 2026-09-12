#include<iostream>
using namespace std;

int largestElementOfArray(int arr[], int n){
	if(n==0){
		return arr[0];
	}
	return max(arr[n-1],largestElementOfArray(arr,n-1));
}

int main(){
	int arr[]={1,3,12,4,9,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<largestElementOfArray(arr,n);
	return 0;
}
