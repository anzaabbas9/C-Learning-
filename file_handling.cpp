//----------------------------------------------------------------------------------------
//                          FILE HANDLING
//----------------------------------------------------------------------------------------
/*1. Write and Read a File
Write a program that opens a file called names.txt for writing (ofstream), writes a few 
names to it — one per line — then closes it. Then open the same file for reading (ifstream)
 and print each line to the console using getline().*/
 /*#include<iostream>
 #include<fstream>
 #include<string>
 using namespace std;
 int main(){
    string n1,n2;
    cout<<"enter names of two students:";
    cin>>n1>>n2;
    ofstream out("names.txt");  //write in file
    out<<n1<<endl<<n2;
    out.close();
    string n3,n4;
    ifstream in("names.txt");  // read a file
    getline(in,n3);
    getline(in,n4);
    cout<<n3<<" "<<n4;
    in.close();
    return 0;
 }*/
/*2. Word Counter from a File
Using the file you just created (or a new one), open it and count how many words it 
contains (not lines — words). Think about how cin >> someString reads one word at a time, 
skipping whitespace — file streams behave the same way with >>.*/
/*#include<iostream>
 #include<fstream>
 #include<string>
 using namespace std;
 int main(){
    string str;
    int count=0;
    ifstream in;
    in.open ("names.txt");
    while(in>>str){
        count++;
    }
    cout<<count;
    return 0;}*/
/*3. Append Mode + Line Counter
Open a file in append mode (so new writes add to the end instead of overwriting), add a 
couple more lines to your names.txt. Then reopen it for reading and count how many lines 
it has total (hint: look up the ios::app flag for opening in append mode).*/
/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str,str1;
    cout<<"enter a line to add in file:";
    getline(cin,str);
    cout<<"enter a line to add in file:";
    getline(cin,str1);
    ofstream out;
    out.open("names.txt",ios::app);
    out<<str<<endl;
    out<<str1;
    out.close();
    string str2;
    int count=0;
    ifstream in;
    in.open("names.txt");
    while(getline(in,str2)){
        count++;
    }cout<<count;
    in.close();
    return 0;
    
}*/