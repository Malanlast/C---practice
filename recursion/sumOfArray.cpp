#include<iostream>
using namespace std;

int sumOfArr(int arr[], int n){
	if(n==0){
		return 0;
	}
	return arr[n-1] + sumOfArr(arr, n-1);
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<sumOfArr(arr,n);
	return 0;
}

//g++ sumOfArray.cpp -o sumOfArray; .\sumOfArray.exe