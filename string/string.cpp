#include<iostream>
#include<string>
using namespace std;
int main(){
	/**char c='A';
	cout<<c<<endl;
	string arr[]={"shio","alia"};
	cout<<arr[0][2]<<" "<<arr[1]<<endl;
	string str("Alia");//string str="Alia" both are same
	cout<<str<<endl;
	string name;
	getline(cin,name);
	cout<<"name is: "<<name<<endl;
	cout<<name.size();**/

	//Access Characters
	string str="Alia Bhatt";
	for(int i=0;i<str.size();i++){
		cout<<str[i];
	}
	cout<<endl;
	//update character
	str[5]='b';
	cout<<str<<endl;
	str.push_back('7');//push_back
	cout<<str<<endl;
	str.pop_back();//pop_back
	cout<<str<<endl;
	str.append(" 21");//append
	cout<<str<<endl;
	string str2="shio";
	cout<<str+" "+str2<<endl;
	if(str==str2){//check ascii value character wise first match return true
		cout<<"same"<<endl;
	}else{
		cout<<"different"<<endl;
	}
	//find()
	string str3="Shivam yadav";
	cout<<str3.find('y')<<endl;
	return 0;
}