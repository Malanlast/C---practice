//g++ insertNumInArray.cpp -o insertNumInArray; .\insertNumInArray.exe
#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"enter the numbers of array: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	} 
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}