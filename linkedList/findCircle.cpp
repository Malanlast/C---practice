//g++ findCircle.cpp -o findCircle;.\findCircle.exe
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

	second->data=15;
	second->next=third;

	third->data=7;
	third->next=fourth;
	
	fourth->data=23;
	fourth->next=fifth;

	fifth->data=21;
	fifth->next=third;

	Node* slow=first;
	Node* fast=first;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			cout<<"circle found";
			return 0;
		}
	}
	cout<<"circle not found";
	return 0;
}