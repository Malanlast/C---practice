//g++ stackUsingQueue.cpp -o stackUsingQueue;.\stackUsingQueue.exe
#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q1;
	queue<int>q2;
	q1.push(10);
	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}

	q1.push(20);
	while(!q2.empty()){
		q1.push(q2.front());
		q2.pop();
	}

	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}
	q1.push(30);
	while(!q2.empty()){
		q1.push(q2.front());
		q2.pop();
	}
	cout<<"top element is: "<<q1.front()<<endl;
	q1.pop();
	cout<<"after pop top element is: "<<q1.front();
	return 0;
}