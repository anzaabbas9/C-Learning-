#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5,1);
    vector<int >::iterator it;
    it=v.begin();
    v.insert(it+4,2);
    v.at(2)=4;
    v.push_back(3);
    it=v.begin();
    v.erase(it,it+2);
    for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";}
    cout<<endl;
    cout<<"first element is:"<<v.front()<<" ";
     cout<<"last element is:"<<v.back()<<" ";
}   

