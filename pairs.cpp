#include<iostream>
#include<utility>
using namespace std;
int main()
{
    /* pair<int,string>p1;
    p1=make_pair(1,"hello");
    cout<<"first element is:"<<p1.first<<" ";
    cout<<"second element is:"<<p1.second<<" ";
    cout<<endl;
    pair<int,string>p2(2,"world");
    cout<<"first element is:"<<p2.first<<" ";
    cout<<"second element is:"<<p2.second<<" ";
    cout<<endl;
    pair<int,string>p3(p1);
    cout<<"first element is:"<<p3.first<<" ";
    cout<<"second element is:"<<p3.second<<" ";
    cout<<endl;
    pair<int,string>p4=make_pair(3,"welcome");
    cout<<"first element is:"<<p4.first<<" ";
    cout<<"second element is:"<<p4.second<<" ";
    return 0; */
    pair<int,float>p1;
    p1=make_pair(2,4.7);
    /*  pair<int,bool>p2;
    p2=make_pair(4,false); 
    pair<int,float>p3(p1); */
    pair<int,float>p4(4,3.9);
    cout<<"first element of p1 is:"<<p1.first<<endl;
    cout<<"second element of p1 is:"<<p1.second<<endl;
    /* cout<<"first element of p2 is:"<<p2.first<<endl;
    cout<<"second element of p2 is:"<<p2.second<<endl;
    cout<<"first element of p3 is:"<<p3.first<<endl;
    cout<<"second element of p3 is:"<<p3.second<<endl; */
    cout<<"first element of p4 is:"<<p4.first<<endl;
    cout<<"second element of p4 is:"<<p4.second<<endl;
    p1.swap(p4);
    cout<<"after swap:"<<endl;
    cout<<"first element of p1 is:"<<p1.first<<endl;
    cout<<"second element of p1 is:"<<p1.second<<endl;
     cout<<"first element of p4 is:"<<p4.first<<endl;
    cout<<"second element of p4 is:"<<p4.second<<endl;
 cout<<"comparison of p1&p4:"<<"\n";
 cout<<((p1>=p4)?"p1 is greater than p4":"p1 is not greater than p4")<<"\n";
}

