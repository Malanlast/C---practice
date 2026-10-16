//g++ isMaxHeap.cpp -o isMaxHeap;.\isMaxHeap.exe
#include<iostream>
#include<vector>
using namespace std;

bool isMaxHeap(vector<int>&arr){
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n/2;i++){
		int left=2*i+1;
	    int right=2*i+2;
		if(arr[i]<arr[left]){
			return false;
		}
		if(right<n && arr[i]<arr[right]){
			return false;
		}
	}
	return true;
}
int main(){
	vector<int>arr={50,60,20,30,20};
	if(isMaxHeap(arr)){
		cout<<"valid heap";
	}else{
		cout<<"not valid heap";
	}
	return 0;
}