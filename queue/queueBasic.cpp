//g++ queueBasic.cpp -o queueBasic;.\queueBasic.exe
#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<"front: "<<q.front()<<endl;
	cout<<"back: "<<q.back()<<endl;
	q.pop();
	cout<<"after pop front: "<<q.front()<<endl;
    cout<<"size: "<<q.size();
	return 0;
}