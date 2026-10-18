#include<iostream>
using namespace std;

int minElementOfArray(int arr[], int n){
	if(n==0){
		return arr[0];
	}
	return min(arr[n-1],minElementOfArray(arr,n-1));
}

int main(){
	int arr[]={10,3,12,4,2,9,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<minElementOfArray(arr,n);
	return 0;
}