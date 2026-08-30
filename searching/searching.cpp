//linear search
#include<iostream>
using namespace std;
int main(){
	int arr[]={15,2,51,6,75,81,40,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=75;
	for(int i=0;i<=n;i++){
		if(target==arr[i]){
			cout<<"find at index: " <<i<<endl;
			return 0;
		}
	}cout<<"not found";
	return 0;
} 
