#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string str="hello shio";
	string word;
	string words[100];
	stringstream ss(str);
	string str2;
	int count=0;
	while(ss>>word){ 
		words[count]=word;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		int r=words[i].size()-1; 
		str2=words[i];
		int l=0;
		while(l<r){
			swap(str2[l],str2[r]);
			l++;
			r--;
		}
		cout<<str2<<" ";
	}
}