//g++ palindrome.cpp -o palindrome;.\palindrome.exe
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	string str="madam";
	stack<char>s;
	for(int i=0;i<str.length();i++){
		s.push(str[i]);
	}
	string reversed="";
	while(!s.empty()){
		reversed+=s.top();
		s.pop();
	}
	if(str==reversed){
		cout<<"palindrome";
	}else{
		cout<<"not palindrome";
	}
	return 0;
}