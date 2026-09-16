//======================================================================================
//                                  VECTOR
//======================================================================================
/*Create a vector<int>, add several numbers to it using .push_back(), then loop through
and print all elements.Also print the vector's size using .size().*/
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //v.push_back(3);
    //v.push_back(4);
    //v.push_back(5);
    int size;
    cout<<"enter size of vector:";
    cin>>size;
    int n;
    cout<<"enter elements of vector:";
    for(int i=0;i<size;i++){
        cin>>n;
        v.push_back(n);
    }cout<<endl;
     for(int i=0;i<size;i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
    cout<<v.size();
    return 0;
}*/
/* Find Max in a Vector
Given a vector<int> filled with user input, find and print the largest element — first
manually with a loop, then using the built-in max_element() from <algorithm>
 (compare both approaches).*/
/* #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main(){
    vector<int>v{2,7,9,13,98,70};
    int max=v.at(0);
    for(int i=0;i<v.size();i++){
        if(v.at(i)>max)
        max=v.at(i);
    }cout<<max<<endl;
    //vector<int>::iterator it=v.begin();
    cout<<*max_element(v.begin(), v.end());
    return 0;
 }*/
/*Remove Duplicates from a Vector
Take a vector<int> with possible duplicate values. Build a new vector containing only the
first occurrence of each value (similar logic to your earlier "remove duplicate characters
from a string" exercise, but now with a vector instead of a string — think about what vector
 method could help you check "is this value already in my result vector?").*/
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int>v{2,4,6,8,2,4,6};
   vector<int>result;
   for(int i=0;i<v.size();i++){
       if(std::find(result.begin(), result.end(), v.at(i))==result.end()){
           result.push_back(v.at(i));
       }
   }cout<<endl;
   for(int i=0;i<result.size();i++){
       cout<<result.at(i)<<" ";
}}*/
//======================================================================================
//                               LIST
//======================================================================================
/*Insert and Remove
Create a list<int> with a few starting values. Use .push_front() to add a number to the
beginning, .push_back() to add one to the end, then remove a specific value using
.remove(value). Print the final list using an iterator (begin()/end()) — note that unlike
vector, list doesn't support .at() or [], so you'll need iterators to print it.*/
/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l{2,5,6,};
    l.push_front(5);
    l.push_back(4);
    l.remove(6);
    list<int>::iterator it;

    for( it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    return 0;}*/
//====================================================================================
//                           MAPS
//====================================================================================
/*Word Frequency Counter
Create a map<string, int>. Take a sentence using getline(), split it into words (use
stringstream), andfor each word, increment its count in the map.Print each word with
its count using a range-based loop.*/
/* #include<iostream>
 #include <sstream>
 #include<map>
 using namespace std;
 int main(){
     map<string,int>m;
     string sentence;
     cout<<"enter a sentence:";
     getline(cin,sentence);
     stringstream aa(sentence);
     string key;
     while(aa>>key){
         m[key]++;
     }
     for(auto n:m){
         cout<<n.first<<" "<<n.second<<endl;
     }
     return 0;
 }*/
//====================================================================================
//                           PAIR
//====================================================================================
/*Student Record
Create a pair<string, int> representing a student's name and age. Print both using .first
and .second. Then create a vector<pair<string,int>> holding a few student records,
and loop through printing each name and age.*/
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    pair<string, int> p{"Anza", 19};
    // cout<<p.first<<" "<<p.second;
    vector<pair<string, int>> v;
    v.push_back(make_pair("ali", 14));
    v.push_back(make_pair("aliya", 18));
    v.push_back(make_pair("anum", 21));
    for (auto n : v)
    {
        cout << n.first << " " << n.second << endl;
    }
    return 0;
}
