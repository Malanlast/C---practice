//g++ deleteMaxHeap.cpp -o deleteMaxHeap;.\deleteMaxHeap.exe
#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&arr,int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]>arr[largest]){
		largest=left;
	}
	if(right<n && arr[right]>arr[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}

void deleteMaxElement(vector<int>&arr){
	int n=arr.size();
	if(n==0) return;
	arr[0]=arr[n-1];
	arr.pop_back();
	heapify(arr,arr.size(),0);
}
int main(){
	vector<int>arr={50,40,45,15,20,10};
	deleteMaxElement(arr);
	for(int x: arr){
		cout<<x<<" ";
	}
	return 0;
}