#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string str="my name is khan not in am not at terrorist";
	stringstream ss(str);
	string word;
	string words[100];
	int count=0; 
	while(ss>>word){
		words[count]=word;
		count++;
	}
	int longest=words[0].size();
	int shortest=words[0].size();
	string longestStr="";
	string shortestStr="";
	longestStr=words[0];
	shortestStr=words[0];
	for(int i=1;i<count;i++){
		if(longest<words[i].size()){
            longest=words[i].size();
			longestStr=words[i];
		}
		if(shortest>words[i].size()){
            shortest=words[i].size();
			shortestStr=words[i];
		}
	}
	cout<<"longest word is- "<<longestStr<<": "<<longest<<endl;
	cout<<"shortest word is- "<<shortestStr<<": "<<shortest;
	return 0;
}