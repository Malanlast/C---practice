#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &str,int left,int right){
	if(left>=right){
		return true;
	}

	if(str[left]!=str[right]){
		return false;
	}

	return isPalindrome(str,left+1,right-1);
}
int main(){
	string str="madam";
	if(isPalindrome(str,0,str.length()-1)){
		cout<<"Palindrome";
	}
	else{
		cout<<"not palindrome";
	}
	return 0;
}

//g++ palindrome.cpp -o palindrome; .\palindrome.exe