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

//Binary Search
/**#include<iostream>
using namespace std;
int main(){
	int arr[]={1,5,7,8,15,18,73,89,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=n-1;
	int target=8;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(arr[mid]==target){
			cout<<"find at index: "<<mid;
			break;
		}
		if(target<arr[mid]){
			right=mid-1; 
		}else{ 
			left=mid+1;
		}
	}
	return 0;
}**/

//using function
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(target > arr[mid]) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 5, 7, 8, 15, 18, 73, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 89;
    int result = binarySearch(arr, n, target);
    if(result != -1) {
        cout << "Found at index: " << result;
    }
    else {
        cout << "Not Found";
    }
    return 0;
}
