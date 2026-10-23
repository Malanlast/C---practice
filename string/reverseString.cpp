#include<iostream>
#include<string> 
using namespace std;
int main(){
string str="Shio";
	int left=0;
	int right=str.size()-1;
	while(left<right){
		swap(str[left], str[right]);
		left++;
		right--;
	}
	cout<<str<<endl;
return 0;
}