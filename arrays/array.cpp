#include<iostream>
using namespace std;
int main(){
	//target

	/**int arr[4]={10,20,30,40};
	int target=30;
    int n= sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<n;i++){
	if(arr[i]==target){
	cout<<"found on index : "<<i;
	break;
     }
	}**/

	//Insertion
	
	/**int arr[5];
	cout<<"enter the numbers"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"array becomes: ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}**/

	/**int arr[]={1,2,3,4,5,6,7,8};
    arr[3]=45;
	cout<<arr[3];**/

	//reverse array
	int arr[]={10,20,30,40,50,60,70,80};
	int start=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	int end=n-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	cout<<"reverse array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
