#include<iostream>
using namespace std;
int main(){
	//target
	int arr[4]={10,20,30,40};
	int target=30;
    int n= sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<n;i++){
	if(arr[i]==target){
	cout<<"found on index : "<<i;
	break;
     }
	}
	return 0;
}
