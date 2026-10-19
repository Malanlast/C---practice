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

	second->data=81;
	second->next=third;

	third->data=21;
	third->next=NULL;
    
	int target=7;
	if(first->data==target){
		Node* temp=first;
		first=first->next;
		delete temp;
	}else{
    Node* current=first;
	while(current->next!=NULL && current->next->data!=target){
		current=current->next;
	}
	if(current->next!=NULL){
		Node* temp=current->next;
		current->next=current->next->next;
		delete temp;
	}
    }
	cout<<"printing nodes: ";
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return 0;
}