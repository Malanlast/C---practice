#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
	int temp[100];
	int i=left;
	int j=mid+1;
	int k=left;

	while(i<=mid && j<=right){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			i++;
		}else{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=right){
		temp[k]=arr[j];
		j++;
		k++;
	}

	for(int x=left;x<=right;x++){
		arr[x]=temp[x];
	}
}

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
	int arr[]={4,1,3,5,2,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,n-1);
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
//g++ mergeSort.cpp -o mergeSort; .\mergeSort.exe
