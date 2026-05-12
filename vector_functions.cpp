#include <iostream>
#include <vector>
//#include<algorithm>
using namespace std;
int main()
{
    /*vector<int> v(5,1);
    vector<int>u(5,2);
     v.swap (u);
    vector<int >::iterator it;*/
    //it=v.begin();
    //v.insert(it+4,2);
    //v.at(2)=4;
    //v.push_back(3);
    //it=v.begin();
    //v.erase(it,it+2);
    //cout<<"elements of v are:";
    //for(it=v.begin();it<v.end();it++){
    //cout<<*it<<" ";}
    //cout<<endl;
    //v.clear();
    //cout<<"first element is:"<<v.front()<<" ";
     //cout<<"last element is:"<<v.back()<<" ";
     //cout<<endl;
     /*cout<<"elements of v after clear:";
     for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";}
    cout<<endl;
     cout<<"elements of u are:";
     for(int i=0;i<u.size();i++){
        cout<<u.at(i)<<"  ";
     }*/
    vector<int>v={4,6,7,9,10,3};
    //vector<int>::iterator it;
    //v.insert(v.begin()+2,2,30);
    vector<int>::iterator it;
    it=v.begin();
    //sort(v.begin(),v.end());
    cout<<"vector element:";
    while(it!=v.end()){
      if(*it%2==0){
         v.erase(it);
      }
      else
      it++;
    }
    for(auto n:v){
      cout<<n<<" ";
    }
   /* cout<<"size is :"<<v.size()<<endl;
    cout<<"max_size is :"<<v.max_size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.reserve(100);
    cout<<"capacity after reserve is :"<<v.capacity()<<endl;
    v.resize(4);
    cout<<"size  after resize is :"<<v.size()<<endl;
    cout<<"values after resize:";
    for(rit=v.rbegin();rit!=v.rend();rit++){
      //if(*rit%2==0)
      cout<<*rit<<" ";
    }cout<<endl;
    v.shrink_to_fit();
   cout<<"capacity after fix is :"<<v.capacity()<<endl; */
}   

