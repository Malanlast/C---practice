#include<iostream>
#include<string> 
using namespace std;
int main(){
string str="shoio";
int freq[26]={0};
for(char ch : str){
	freq[ch - 'a']++;
}
for(int i=0;i<26;i++){
	if(freq[i]>1){
		cout<<char(i+'a')<<endl;
	} 
}
return 0;
}