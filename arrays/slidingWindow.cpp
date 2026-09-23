//g++ slidingWindow.cpp -o slidingWindow; .\slidingWindow.exe
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={1,2,3,9,6,7,8,9,5,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	int slidingWindow=0;
	for(int i=0;i<k;i++){
		slidingWindow+=arr[i];
	}
	int maxSum=slidingWindow;
	cout<<"first iteration sum: "<<slidingWindow<<endl;
	for(int i=k;i<n;i++){
		slidingWindow+=arr[i];
		slidingWindow-=arr[i-k];
		maxSum=max(maxSum,slidingWindow);
	}
	cout<<"max sum for sliding window "<<k<<" is: "<<maxSum;
	return 0;
}