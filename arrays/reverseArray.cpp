//g++ reverseArray.cpp -o reverseArray; .\reverseArray.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=n-1;
	while(left<=right){
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	cout<<"reverse array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}