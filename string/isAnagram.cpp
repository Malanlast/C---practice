#include<iostream>
#include<string>
using namespace std;
int main(){
string str1="shiio"; 
	string str2="ioihs"; 
	int freq1[26]={0}; 
    int freq2[26]={0}; 
    string newStr1="";
	string newStr2="";
	if(str1.size()!=str2.size()){
		cout<<"not Anagram";
		return 0;
	}
	int n=str1.size();
	 
    for(int i=0;i<n;i++){
		freq1[str1[i]-'a']++; 
		freq2[str2[i]-'a']++; 
	}
	for(int i=0;i<26;i++){
		if(freq1[i]>0){
		newStr1+=char(i+'a');
		}
		if(freq2[i]>0){
		newStr2+=char(i+'a');
		}
	}
	if(newStr1==newStr2){
		cout<<"Anagram";
	}else{
		cout<<"not Anagram";
	}
	return 0;
}