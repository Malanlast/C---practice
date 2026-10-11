//g++ PalindromeLinkedList.cpp -o PalindromeLinkedList;.\PalindromeLinkedList.exe
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
bool isPalindrome(Node* first){
	//1. find middle of linked list
	Node* slow=first;
	Node* fast=first;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	} 
}
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
	cout<<"current linked list is: ";
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
	cout<<endl;
	if(isPalindrome(first)){
		cout<<"Palindrome";
	}else{
		cout<<"not valid palindrome";
	}
	return 0;
}