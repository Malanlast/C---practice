//g++ prefix.cpp -o prefix;.\prefix.exe
//it must be right string
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string str="73*8+9-1+";
	stack<int>s;
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		if(ch>='0' && ch<='9'){
			s.push(ch-'0');
		}else{
			int b=s.top();
			s.pop();
			int a=s.top();
			s.pop();
			if(ch=='/')s.push(a/b);
			else if(ch=='*')s.push(a*b);
			else if(ch=='+')s.push(a+b);
			else if(ch=='-')s.push(a-b);
		}
	}
	cout<<s.top();
	return 0;
}