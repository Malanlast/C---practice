//g++ PalindromeLinkedList.cpp -o PalindromeLinkedList;.\PalindromeLinkedList.exe
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
int main(){
	int arr[]={1,2,3,3,2,1};
	Node* first=new Node{arr[0],NULL};
	Node* temp=first;
	int n=sizeof(arr)/sizeof(arr[0]); 
	for(int i=1;i<n;i++){
		temp->next=new Node{arr[i],NULL};
		temp=temp->next;
	}

	Node* current=first;
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
	return 0;
}