//g++ removeDuplicateNode.cpp -o removeDuplicateNode;.\removeDuplicateNode.exe
//remove duplicate on sorted linked list
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
	second->data=3;
	third->data=3;
	fourth->data=4;
	fifth->data=4;

	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;
    
	Node* temp=first;
	while(temp!=NULL && temp->next!=NULL){
		if(temp->data==temp->next->data){
			temp->next=temp->next->next;
		}else{
			temp=temp->next;
		}
	}
	cout<<"nodes are without duplicity: ";
	Node* curr=first;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	return 0;
}