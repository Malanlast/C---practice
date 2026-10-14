//g++ postOrder.cpp -o postOrder.exe;.\postOrder.exe
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;

	Node(int value){
		data=value;
		left=nullptr;
		right=nullptr;
	}
};
void postOrder(Node* root){
	if(root==nullptr){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	postOrder(root);
	return 0;
}