//g++ searchNode.cpp -o searchNode;.\searchNode
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

	first->data=19;
	first->next=second;

	second->data=11;
	second->next=third;

	third->data=13;
	third->next=fourth;

	fourth->data=17;
	fourth->next=fifth;

	fifth->data=21;
	fifth->next=NULL;

	int target=13;
	int count=1;
	Node* temp=first;
	while(temp!=NULL){
		if(temp->data==target){
			cout<<target<<" found at node: "<<count;
			return 0;
		}
		count++;
		temp=temp->next;
	}
	return 0;
}