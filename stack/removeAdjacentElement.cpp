//g++ removeAdjacentElement.cpp -o removeAdjacentElement;.\removeAdjacentElement.exe
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string str="abbaca";
	stack<char>s;
	for(int i=0;i<str.length();i++){
		if(!s.empty() && s.top()==str[i]){
			s.pop();
		}else{
			s.push(str[i]);
		}
	}
	string result="";
	while(!s.empty()){
		result=s.top()+result;
		s.pop();
	}
	cout<<result;
	return 0;
}