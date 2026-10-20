#include<iostream>
#include<string>
using namespace std;
int main(){
string str="polop";
	int left=0;
	int right=str.size()-1;
	bool palindrome =true;
	while(left<right){
        if(str[left]!=str[right]){
			 palindrome=false;
			 break;
		} 
		left++;
		right--;
	}
	if(palindrome){
		cout<<"palindrome";
	}else{
		cout<<"not valid palindrome";
	}
	return 0;
}