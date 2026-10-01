//g++ deleteNodeAtLast.cpp -o deleteNodeAtLast;.\deleteNodeAtLast.exe
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

	first->data=3;
	first->next=second;

	second->data=5;
	second->next=third;

	third->data=7;
	third->next=fourth;

	fourth->data=11;
	fourth->next=NULL;

	Node* current=first;
	while(current->next->next!=NULL){
		current=current->next;
	}
	current->next=NULL;

    cout<<"nodes are: ";
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	temp=temp->next;
	return 0;
}