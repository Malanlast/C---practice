//g++ prefixSum.cpp -o prefixSum; .\prefixSum.exe
#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int prefixSum[5];
	prefixSum[0]=arr[0];
	for(int i=1;i<n;i++){
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
	cout<<"PrefixSum array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<prefixSum[i]<<" ";
	}
	return 0;
}