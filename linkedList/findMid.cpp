//g++ findMid.cpp -o findMid;.\findMid.exe
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

	first->data=13;
	first->next=second;

	second->data=11;
	second->next=third;

	third->data=15;
	third->next=fourth;

	fourth->data=17;
	fourth->next=fifth;

	fifth->data=21;
	fifth->next=NULL;

	Node* slow=first;
	Node* fast=first; 
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<slow->data;
	return 0;
}