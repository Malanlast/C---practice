#include<iostream>
#include<string>
using namespace std;
int main(){
	char c='A';
	cout<<c<<endl;
	string arr[]={"shio","alia"};
	cout<<arr[0][2]<<" "<<arr[1]<<endl;
	string str("Alia");//string str="Alia" both are same
	cout<<str<<endl;
	string name;
	getline(cin,name);
	cout<<"name is: "<<name<<endl;
	cout<<name.size();
	return 0;
}