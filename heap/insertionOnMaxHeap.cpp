//g++ insertionOnMaxHeap.cpp -o insertionOnMaxHeap;.\insertionOnMaxHeap.exe
#include<iostream>
#include<vector>
using namespace std;

void addElement(vector<int>&arr,int value){
	arr.push_back(value);
	int i=arr.size()-1;
	while(i>0){
		int parent=(i-1)/2;
		if(arr[i]>arr[parent]){
			swap(arr[i],arr[parent]);
			i=parent;
		}else{
			break;
		}
	}
}
int main(){
	vector<int>arr={40,30,20,10,15};
	addElement(arr,35);
	for(int x:arr){
		cout<<x<<" ";
	}
	return 0;
}