//g++ findHeight.cpp -o findHeight;.\findHeight.exe
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
int findHeight(Node* root){
	if(root==nullptr){
		return -1;
	}
	int leftHeight=findHeight(root->left); 
	int rightHeight=findHeight(root->right);
	return 1+max(leftHeight,rightHeight);
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	cout<<findHeight(root);
	return 0;
}