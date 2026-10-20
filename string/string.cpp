#include<iostream>
#include<string>
#include<cctype>
#include<sstream>
using namespace std;
int main(){
	/**char c='A';
	cout<<c<<endl;
	string arr[]={"shio","alhhhia"};
	cout<<arr[0][2]<<" "<<arr[1]<<endl;
	string str("Alia");//string str="Alia" both are same
	cout<<str<<endl;
	string name;
	getline(cin,name);
	cout<<"name is: "<<name<<endl;
	cout<<name.size();**/

	//Access Characters

	/**string str="Alia Bhatt21";
	cout<<"Access element of characters";
	for(int i=0;i<str.size();i++){
		cout<<"Characters: "<<str[i];
	}
	cout<<endl;**/
	//update character
	/**str[5]='b';
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
	/*string str="Shio";
	int left=0;
	int right=str.size()-1;
	while(left<right){
		swap(str[left], str[right]);
		left++;
		right--;
	}
	cout<<str<<endl;*/

	//count vowels or consonants
	/*string str ="Shio";

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
	/**string str="polop";
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
	}**/

	//check Anagrams
	/**string str1="shiio"; 
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
	}**/

	//check Anagrams another way
	/**string str1="shiio"; 
	string str2="ioihs";  
	if(str1.size()!=str2.size()){
		cout<<"not Anagram";
		return 0;
	} 
	int freq[26]={0};
    for(int i=0;i<str1.size();i++){
		freq[str1[i]-'a']++; 
		freq[str2[i]-'a']--; 
	}
	for(int i=0;i<26;i++){
		if(freq[i]!=0){
		cout<<"not Anagram";
		} 
	}
	cout<<"Anagram";**/

	//count words
	/**string str="my name is khan and i not a terrorist";
	stringstream ss(str);//it's make string to stream.
	int count=0;
	string word;
	while(ss>>word){//storing value in word from ss
		count++;
	}
	cout<<count;**/

	//reverse words
	/**string str="my name is khan and i not a terrorist";
	stringstream ss(str);
	string word; 
    string words[100];
	int count=0;
	while(ss>>word){
		words[count]=word;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		cout<<words[i]<<" ";
	}**/

	//reverse characters
	/**string str="hello shio";
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
	}**/

	//find longest or shortest word
	// string str="my name is khan not in am not at terrorist";
	// stringstream ss(str);
	// string word;
	// string words[100];
	// int count=0; 
	// while(ss>>word){
	// 	words[count]=word;
	// 	count++;
	// }
	// int longest=words[0].size();
	// int shortest=words[0].size();
	// string longestStr="";
	// string shortestStr="";
	// longestStr=words[0];
	// shortestStr=words[0];
	// for(int i=1;i<count;i++){
	// 	if(longest<words[i].size()){
    //         longest=words[i].size();
	// 		longestStr=words[i];
	// 	}
	// 	if(shortest>words[i].size()){
    //         shortest=words[i].size();
	// 		shortestStr=words[i];
	// 	}
	// }
	// cout<<"longest word is- "<<longestStr<<": "<<longest<<endl;
	// cout<<"shortest word is- "<<shortestStr<<": "<<shortest;
	return 0;
}