//g++ maxElement.cpp -o maxElement;.\maxElement.exe
#include<iostream>
#include<stack>
using namespace std;
int main(){
	int arr[]={5,9,10,1,8,7,17,2,21,5,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	stack<int>s;
	int max=arr[0];
	for(int i=0;i<n;i++){
		s.push(arr[i]);
		if(max<s.top()){
			max=s.top();
		}
	}
	cout<<max;
	return 0;
}