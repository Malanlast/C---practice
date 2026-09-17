#include<iostream>
using namespace std;

 

void mergeSort(int arr[],int left,int right){
	if(left>=right){
		return;
	}
	int mid=left+(right-left)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	merge(arr,left,mid,right);
}
int main(){
	int arr[]={4,1,2,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,n-1);
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}