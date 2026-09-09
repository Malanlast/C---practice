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
/**#include <iostream>
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
}**/


//First Occurrence 
/**#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            answer = mid;
            // Search LEFT for an earlier occurrence
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            // Target is on the RIGHT
            left = mid + 1;
        }
        else {
            // Target is on the LEFT
            right = mid - 1;
        }
    }
    return answer;
}
int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = firstOccurrence(arr, n, target);
    if (result != -1) {
        cout << "First occurrence of "
             << target
             << " is at index: "
             << result;
    }
    else {
        cout << "Element not found";
    }
    return 0;
}**/

//last occurrence 
/**#include <iostream>
using namespace std;
int lastOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            answer = mid;
            // Search RIGHT for a later occurrence
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            // Target is on the RIGHT
            left = mid + 1;
        }
        else {
            // Target is on the LEFT
            right = mid - 1;
        }
    }
    return answer;
}
int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = lastOccurrence(arr, n, target);
    if (result != -1) {
        cout << "Last occurrence of "
             << target
             << " is at index: "
             << result;
    }
    else {
        cout << "Element not found";
    }
    return 0;
}**/

//total occurrence 
/**#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) {
            answer = mid;
            right = mid - 1;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return answer;
}
int lastOccurrence(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = -1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) {
            answer = mid;
            left = mid + 1;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return answer;
}
int main() {
    int arr[] = {1,2,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int first = firstOccurrence(arr,n,target);
    int last = lastOccurrence(arr,n,target);
    if(first == -1) {
        cout << "Element not found";
    }
    else {
        int count = last - first + 1;
        cout << "First Index = " << first << endl;
        cout << "Last Index = " << last << endl;
        cout << "Total Occurrences = " << count;
    }
    return 0;
}**/

//total occurrence using lower bound or upper bound
/**#include <iostream>
using namespace std;
// Lower Bound
// First index where arr[i] >= target
int lowerBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return answer;
}
// Upper Bound
// First index where arr[i] > target
int upperBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int answer = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return answer;
}
int main() {
    int arr[] = {1, 2, 2, 2, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int lower = lowerBound(arr, n, target);
    int upper = upperBound(arr, n, target);
    cout << "Lower Bound: " << lower << endl;
    cout << "Upper Bound: " << upper << endl;
    // Count occurrences
    int count = upper - lower;
    cout << "Total Occurrences: " << count << endl;
    return 0;
}**/

//searching print

#include<iostream>
using namespace std;
int mail(){
    cout<<"searching";
}

 
