//g++ stackOperations.cpp -o stackOperations;.\stackOperations.exe
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	s.push(4);
	s.push(12);
	s.push(10);
	s.push(15);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.empty();
	return 0;
}