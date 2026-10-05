//g++ nthNodeByLast.cpp -o nthNodeByLast;.\nthNodeByLast.exe
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
int main(){
	Node* first=new Node();
	Node* second=new Node();
	Node* third=new Node();
	Node* fourth=new Node();
	Node* fifth=new Node(); 

	first->data=1;
	first->next=second;

	second->data=5;
	second->next=third;

	third->data=7;
	third->next=fourth;

	fourth->data=15;
	fourth->next=fifth;

	fifth->data=21;
	fifth->next=NULL;

	Node* slow=first;
	Node* fast=first;
	int n=4;
	for(int i=0;i<n;i++){
		fast=fast->next;
	}
	while(fast!=NULL){
		slow=slow->next;
		fast=fast->next;
	}
	cout<<slow->data;
	return 0;
}