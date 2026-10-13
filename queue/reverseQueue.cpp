//g++ reverseQueue.cpp -o reverseQueue;.\reverseQueue.exe
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
	queue<int>q;
	stack<int>s;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	while(!q.empty()){
		s.push(q.front());
		q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}