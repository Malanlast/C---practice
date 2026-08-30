//linear search
/**#include<iostream>
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
} **/

//linear search using function 
/**#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
	for(int i=0;i<n;i++){
		if(target==arr[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={15,2,51,6,75,81,40,25};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=2;
	int result=linearSearch(arr,n,target);
	if(result!=-1){
		cout<<"find at index: "<<result<<endl;
	}else{
		cout<<"not found";
	}
	return 0;
} **/
