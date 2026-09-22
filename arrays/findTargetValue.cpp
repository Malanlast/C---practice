//g++ findTargetValue.cpp -o findTargetValue; .\findTargetValue.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,5,8,9,36,45,78,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target;
	cin>>target;
	bool found=false;
	for(int i=0;i<n;i++){
		if(arr[i] == target){
			cout<<"target " <<arr[i]<<" found at index: "<<i;
			found=true;
			break;
		}
	}
	if(!found){
		cout<<"target not found";
	}
	return 0;
}