//g++ maxElemOrMin.cpp -o maxElemOrMin; .\maxElemOrMin.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={11,2,73,4,115,46,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	int currElem=arr[0];
	int minElem=arr[0];
	int maxElem=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>=maxElem){
			maxElem=arr[i];
		}
		if(arr[i]<=minElem){
			minElem=arr[i];
		}
	}
	cout<<"max element is: "<<maxElem<<endl;
	cout<<"min element is: "<<minElem;
	return 0;
}