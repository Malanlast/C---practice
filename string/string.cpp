#include<iostream>
#include<string>
#include<cctype>
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

	/**string str="Alia Bhatt";
	cout<<"Access element of characters";
	for(int i=0;i<str.size();i++){
		cout<<"Characters: "<<ch;
	}
	cout<<endl;**/
	//update character
	/**str[5]='b';
	cout<<str<<endl;
	str.push_back('7');//push_back
	cout<<str<<endl;
	str.pop_back();//pop_back
	cout<<str<<endl;
	str.append(" 21");//append
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
	}**/

	//find()
	/**string str3="Shivam yadav";
	cout<<str3.find('y')<<endl;
	//substr()
	cout<<str3.substr(0,6)<<endl;

	cout<<str3.substr(1,4)<<endl;
	//erase()
	cout<<str3.erase(6,1)<<endl;
	//insert()
    cout<<str3.insert(7,"Y")<<endl;
	//replace()
	cout<<str3.replace(6,6,"21")<<endl;**/

	//Problems

	//reverse String
	/**string str="Shio";
	int left=0;
	int right=str.size()-1;
	while(left<right){
		swap(str[left], str[right]);
		left++;
		right--;
	}
	cout<<str<<endl;**/

	//count vowels or consonants
	/**string str ="Shio";

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
	cout<<"Consonant count: "<<consonant<<endl;**/

	//count char frequency a-z
	/**string str="alia bhatt";
	int freq[26]={0};
	for(char ch : str){
		freq[ch-'a']++;
	}
	for(int i=0;i<26;i++){
		if(freq[i]>0){
			cout<<char(i+'a')<<" count is: "<<freq[i]<<endl;
		}
	}**/

	//find duplicate
	/**string str="shoio";
    int freq[26]={0};
	for(char ch : str){
		freq[ch - 'a']++;
	}
	for(int i=0;i<26;i++){
		if(freq[i]>1){
			cout<<char(i+'a')<<endl;
		} 
	}**/

	//remove duplicate
	/**string str ="shiiio";
    string result="";
	bool seen[26]={false};
	for(int i=0;i<str.size();i++){
		if(!seen[str[i] - 'a']){
			result+=str[i];
			seen[str[i]-'a']=true;
		}
	}
	cout<<result;**/

	//check palindrome
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