//g++ firstNonRepeatingChar.cpp -o firstNonRepeatingChar;.\firstNonRepeatingChar.exe
#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
	string str="aabbcdde";
	queue<char>q;
	int freq[26]={0};
	for(int i=0;i<str.length();i++){
		freq[str[i]-'a']++;
		q.push(str[i]);
		while(!q.empty() && freq[q.front()-'a']>1){
			q.pop();
		}
		if(q.empty()){
			cout<<"-1 ";
		}else{
			cout<<q.front()<<" ";
		}
	}
	cout<<endl;
	cout<<"first non repeating char is: "<<q.front();
	return 0;
}