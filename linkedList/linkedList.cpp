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

	//insertion new node at starting
	Node* newNodeStart=new Node();
	newNodeStart->data=7;
	newNodeStart->next=first;
	first=newNodeStart;

	//insertion new node after 1st node
	Node* current=first->next;
	Node* newNode=new Node();
	newNode->data=3;
	newNode->next=current->next;
	current->next=newNode;

	//add at last
	Node* lastNode=new Node();
	lastNode->data=21;
	lastNode->next=NULL;
	Node* tempo=first;
	while(tempo->next!=NULL){
		tempo=tempo->next;
	}
	tempo->next=lastNode;

	//Print Linked List
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	return 0;
}//g++ linkedList.cpp -o linkedList;.\linkedList.exe 