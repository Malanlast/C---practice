#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string str="my name is khan and i not a terrorist ?";
	stringstream ss(str);//it's make string to stream.
	int count=0;
	string word;
	while(ss>>word){//storing value in word from ss
		count++;
	}
	cout<<count;
	return 0;
}