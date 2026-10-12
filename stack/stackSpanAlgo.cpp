//g++ stackSpanAlgo.cpp -o stackSpanAlgo;.\stackSpanAlgo.exe
//stack span algorithm
#include<iostream>
#include<stack>
using namespace std;
int main(){
	int arr[]={100,80,60,70,60,75,85};
	int n=sizeof(arr)/sizeof(arr[0]);
	stack<int>s;
	int span[7];
	for(int i=0;i<n;i++){
		while(!s.empty() && arr[s.top()]<=arr[i]){
			s.pop();
		}
		if(s.empty()){
			span[i]=i+1;
		}else{
			span[i]=i-s.top();
		}
		s.push(i);
	}
	for(int i=0;i<n;i++){
		cout<<span[i]<<" ";
	}
	return 0;
}