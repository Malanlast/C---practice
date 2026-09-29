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

	first->data=10;
	first->next=second;

	second->data=20;
	second->next=third;

	third->data=45;
	third->next=NULL;

	//insertion new node
	Node* newNode=new Node();
	newNode->data=3;
	newNode->next=first;
	first=newNode;

	//Print Linked List
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	return 0;
}//g++ linkedList.cpp -o linkedList;.\linkedList.exe 