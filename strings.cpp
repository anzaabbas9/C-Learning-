// take a string from user n print it in reverse
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:";
    cin>>str;
    string::reverse_iterator it;
    it=str.rbegin();
    for(it=str.rbegin();it!=str.rend();it++)
  {
    cout<<*it;
  }

} */

// count no.of vowel in a given string
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:";
    cin>>str;
    string::iterator it=str.begin();
    for(it=str.begin();it!=str.end();it++){
        if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u'||*it=='A'||*it=='E'||*it=='I'||*it=='O'||*it=='U')
        cout<<*it;    }}

 */
// check if a string is palindrome
/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:";
    cin>>str;
    int n=str.length();
    bool ispalin=true;


        for(int j=0;j<n/2;j++){
            if(str.at(j)!=str.at(n-1-j)){
           ispalin=false;
           break;}
    }
    if(ispalin){
        cout<<"palindrome !!";
    }
    else{
        cout<<"not palindrome!!";
    }}

     */
//Take a string from user, convert all lowercase to uppercase and print it.
/*  #include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:";
    cin>>str;
   for(int i = 0; i < str.length(); i++){
    str[i] = toupper(str[i]);
}
cout << str << endl;
} */
//Take a string, remove all duplicate characters and print only unique ones in order of appearance.
 #include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:";
    cin>>str;
    for(int i=0;i<str.length();i++){
       bool seen=false;
    for(int j=0;j<i;j++){
        if(str[i]==str[j]){
            seen=true;
            break;
        }}
        if(!seen){
            cout<<str[i];
        }}}
