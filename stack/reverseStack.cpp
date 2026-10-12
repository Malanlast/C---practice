//g++ reverseStack.cpp -o reverseStack;.\reverseStack.exe
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	string str="Alia";
	cout<<"string is: "<<str<<endl;
	stack<char>s;
	for(int i=0;i<str.length();i++){
		s.push(str[i]);
	}
	string reversed="";
	while(!s.empty()){
		reversed+=s.top();
		s.pop();
	}
	cout<<"reversed string is: "<<reversed;
	return 0;
}