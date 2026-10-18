//g++ checkSortedArray.cpp -o palindrome; .\palindrome.exe
#include<iostream>
using namespace std;
bool checkSortedArray(int arr[],int n){
	if(n==1){
		return true;
	}
	if(arr[n-1]<arr[n-2]){
		return false;
	}
	return checkSortedArray(arr,n-1);
}
int main(){
	int arr[]={1,2,3,3,4,4,5,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(checkSortedArray(arr,n)){
		cout<<"sorted";
	}else{
		cout<<"not sorted";
	}
	return 0;
}
