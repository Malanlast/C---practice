#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string str="my name is khan and i not a terrorist";
	stringstream ss(str);
	string word; 
    string words[100];
	int count=0;
	while(ss>>word){
		words[count]=word;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		cout<<words[i]<<" ";
	}
	return 0;
}