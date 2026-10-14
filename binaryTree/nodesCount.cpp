//g++ nodesCount.cpp -o nodesCount;.\nodesCount.exe
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
int nodesCount(Node* root){
	if(root==nullptr){
		return 0;
	}
	int leftCount=nodesCount(root->left); 
	int rightCount=nodesCount(root->right);
	return 1+leftCount+rightCount;
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	cout<<nodesCount(root);
	return 0;
}