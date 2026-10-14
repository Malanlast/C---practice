//g++ maxVNode.cpp -o maxVNode;.\maxVNode.exe
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
int maxValOfNode(Node* root){
	if(root==nullptr){
		return -1;
	}
	int leftMax=maxValOfNode(root->left); 
	int rightMax=maxValOfNode(root->right);
	return max(root->data,max(leftMax,rightMax));//max(node data, max(left max, right max))
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(6);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	cout<<maxValOfNode(root);
	return 0;
}