/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a string for pyramid pattern:";
    getline(cin, str);
    int len = str.length();
    int pos = 0;
    for (char c : str)
    {
        int space = len - (pos + 1);
        while (space > 0)
        {
            cout << " ";
            --space;
        }
        for (int i = 0; i < pos; i++)
        {
            cout << str.at(i);
        }
        cout << c;
        for (int i = pos - 1; i >= 0; i--)
        {
            cout << str.at(i);
        }
        cout << endl;
        pos++;
    }
    return 0;
}*/
/*Take a sentence using getline(cin, str). Loop through the string and count how many vowels
 and how many consonants it contains. Print both counts. */
/*#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string str;
int v_count=0;
int c_count=0;
cout<<"enter your string:";
getline(cin,str);
int len=str.length();
for(int i=0;i<len;i++){
    if(isalpha(str.at(i))){
if(str.at(i)=='A'||str.at(i)=='E'||str.at(i)=='I'||str.at(i)=='O'||str.at(i)=='U'
||str.at(i)=='a'||str.at(i)=='e'||str.at(i)=='i'||str.at(i)=='o'||str.at(i)=='u'){
v_count++;
}
else
c_count++;
}}
cout<<"total length:"<<len<<endl;
cout<<"total vowels are:"<<v_count<<endl;
cout<<"total consonant are:"<<c_count<<endl;
return 0;
}*/

/*Take a word and reverse it using a loop (don't use the built-in reverse() function
yet — do it manually with two pointers, like you did for the palindrome checker).
 Then try it again using std::reverse() from <algorithm> and compare.*/

/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string str;
   cout<<"enter your string:";
   cin>>str;
   auto left=str.begin();
   auto right=str.end()-1;
   /*while(left<right){
   swap(*left,*right);
   ++left;
   --right;
}
//reverse(str.begin(),str.end());
for (auto it = str.begin(); it != str.end(); ++it) {
   cout << *it;
}cout<<endl;
for (auto rit = str.rbegin(); rit != str.rend(); ++rit) {
   cout << *rit;
}cout<<endl;
cout<<str;
return 0;}*/

/*Take a sentence and convert all lowercase letters to uppercase and vice versa (toggle case)
 — manually, character by character, without using toupper()/tolower() first.
 Then redo it using those built-in functions and compare the two versions.*//*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    cout << "enter a sentence:";
    getline(cin, str);
    int len = str.length();
    string new_str; 
     for(int i=0;i<len;i++){
         if(str.at(i)>='A'&&str.at(i)<='Z'){
         str.at(i)=str.at(i)+32;}
          else if(str.at(i)>='a'&&str.at(i)<='z'){
         str.at(i)=str.at(i)-32;
          }
     else
     str.at(i)=str.at(i);}
    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;
    return 0;
}*/

/*Take two words as std::string. Check if they're anagrams of each other (same letters, rearranged)
 — e.g., "listen" and "silent".
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout << "enter a strings:";
    cin>>str1>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    cout<<endl<<str1<<" "<<str2<<endl;
    if(str1==str2){
        cout<<"anagrams!!";
    }
    else
    cout<<"not anagrams";
    return 0;
}*/
/*Take a string and remove any repeated characters, keeping only the first occurrence of each 
(e.g., "programming" → "progamin"). Build a new result string by checking if
 each character has already appeared before adding it.*/
 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    string str;
    string result;
    cout<<"enter a string:";
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++){
      size_t new_str=result.find(str.at(i));
        if(new_str==string::npos){
            result+=str.at(i);
        }
        
        }cout<<result;
return 0;
    }
 
    