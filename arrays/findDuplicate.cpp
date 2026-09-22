//g++ findDuplicate.cpp -o findDuplicate; .\findDuplicate.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	 for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			cout<<arr[i]<<" is duplicate find at index: "<<i<<" or "<<i+1;
		}
	 }
	return 0;
}