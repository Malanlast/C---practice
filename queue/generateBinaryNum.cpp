//g++ generateBinaryNum.cpp -o generateBinaryNum;.\generateBinaryNum.exe
#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
	int n=5;
	queue<string>q;
	string last;
	q.push("1");
	for(int i=0;i<n;i++){
		string curr=q.front();
		q.pop();
		cout<<curr<<" ";
		last=curr;
		q.push(curr+"0");
		q.push(curr+"1");
	}
	cout<<endl;
	cout<<n<<" binary is: "<<last;
	return 0;
}