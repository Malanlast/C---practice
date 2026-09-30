// g++ deletionAnode.cpp -o deletionAnode;.\deletionAnode.exe
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
    
	first->data=7;
	first->next=second;

	second->data=11;
	second->next=third;

	third->data=21;
	third->next=NULL;

    Node* current=first;
	while(current->next->data!=11){
		current=current->next;
	}
	current->next=current->next->next;
	
	cout<<"printing nodes: ";
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return 0;
}