#include<iostream>
#include<algorithm>
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

	/**int arr[]={10,20,30,40,50,60,70,80};
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
	}**/
    
	//Max Element or Min Element or Sum, avg, even, odd

	/**int arr[]={10,20,30,40,5,500,60,70,80,90,100};
	int maxElement=arr[0];
	int minElement=arr[0];
	int sum=0;
	int countEven=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(arr[i]>maxElement){
			maxElement=arr[i];
		}
		if(arr[i]<minElement){
			minElement=arr[i];
		}
		if(arr[i]%2==0){
			countEven++;
		}
	}
	cout<<"Max Element is: "<<maxElement<<endl;
	cout<<"Max Element is: "<<minElement<<endl;
	cout<<"Sum Elements is: "<<sum<<endl;
	cout<<"Avg of sum: "<<sum/n<<endl;
	cout<<"Total Even elements is: "<<countEven<<endl;
	cout<<"Total odd elements is: "<<n-countEven;**/

	//count frequency
	/**int arr[]={10,50,42,7,52,23,54,5,5,5,23,10,50,42};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++; 
			}
		}
		cout<<arr[i]<<" count is: "<<count<<endl;
		count=0;
	}**/

	//Find Duplicate
	/**int arr[]={1,9,2,5,4,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n); 
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			cout<<"Find duplicate";
		}  
	 }**/

	//sliding window
	/**int arr[]={1,2,5,2,3,4,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int slidingWindow=0;
	int k=3;
	//first iteration
	for(int i=0;i<k;i++){
		slidingWindow+=arr[i];
	}
	int maxSum=slidingWindow;
	cout<<"first iteration "<<maxSum<<endl;;
    for(int i=k;i<n;i++){
		slidingWindow+=arr[i];
		slidingWindow-=arr[i-k];
		maxSum=max(slidingWindow, maxSum);
	}
	cout<<maxSum;**/

	//Kadane's Algorithm
	return 0;
}
