//g++ countFrequency.cpp -o countFrequency; .\countFrequency.exe
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,5,4,1,6,2,4,5,3,7,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		cout<<arr[i]<<" frequency: "<<count<<endl;
		count=0;
	}
	return 0;
}