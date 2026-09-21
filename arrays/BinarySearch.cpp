//g++ BinarySearch.cpp -o BinarySearch; .\BinarySearch.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50,55,56,60,62,63};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=40;
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(arr[mid]==target){
			cout<<"find at index: "<<mid;
			break;
		}
		if(arr[mid]<target){
			left=mid+1;
		}else{
			right=mid-1;
		}
	} 
	return 0;
}