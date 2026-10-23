#include<iostream>
#include<string> 
using namespace std;
int main(){
	string str="Alia Bhatt21"; 
    str[5]='b';
	cout<<str<<endl;
	str.push_back('7');//push_back
	cout<<str<<endl;
	str.pop_back();//pop_back
	cout<<str<<endl;
	str.append(" 21pot");//append
	str.append(" @shio");
	cout<<str<<endl;
	string str2="Shio";
	cout<<str+" "+str2<<endl;
	if(str==str2){//check ascii value character wise first match return true
		cout<<"same"<<endl;
	}else{
		cout<<"different"<<endl;
	}
	if(str<str2){
		cout<<str2+" greater";
	}else{
		cout<<str2+" lower";
	}
return 0;
}