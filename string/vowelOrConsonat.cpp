#include<iostream>
#include<string> 
using namespace std;
int main(){
string str ="Shio";
	int vowel=0;
	int consonant=0;
	for(char ch : str){
		ch=tolower(ch);
		if(isalpha(ch)){
		if(ch=='a' || ch=='e'||
		ch=='o' || ch=='i'
		 || ch=='u'){
			vowel++;
		}
		else{
		consonant++;
		}
	    }
	}
	cout<<"Vowel count: "<<vowel<<endl;
	cout<<"Consonant count: "<<consonant<<endl;
return 0;
}