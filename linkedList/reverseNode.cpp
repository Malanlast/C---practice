//g++ reverseNode.cpp -o reverseNode;.\reverseNode.exe
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

	first->data=1;
	first->next=second;

	second->data=3;
	second->next=third;

	third->data=17;
	third->next=fourth;

	fourth->data=21;
	fourth->next=NULL;

	Node* prev=NULL;
	Node* current=first;
	while(current!=NULL){
		Node* nextNode=current->next;
		current->next=prev;
		prev=current;
		current=nextNode;
	}
	first=prev;

    cout<<"Reverse nodes are: ";
	Node* temp=first;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return 0;
}