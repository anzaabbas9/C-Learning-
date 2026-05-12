#include <iostream>
#include <vector>
//#include<algorithm>
using namespace std;
int main()
{
    vector<int> v(5,1);
    vector<int>u(5,2);
     v.swap (u);
    vector<int >::iterator it;
    //it=v.begin();
    //v.insert(it+4,2);
    //v.at(2)=4;
    //v.push_back(3);
    //it=v.begin();
    //v.erase(it,it+2);
    cout<<"elements of v are:";
    for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";}
    cout<<endl;
    v.clear();
    //cout<<"first element is:"<<v.front()<<" ";
     //cout<<"last element is:"<<v.back()<<" ";
     //cout<<endl;
     cout<<"elements of v after clear:";
     for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";}
    cout<<endl;
     cout<<"elements of u are:";
     for(int i=0;i<u.size();i++){
        cout<<u.at(i)<<"  ";
     }
}   

