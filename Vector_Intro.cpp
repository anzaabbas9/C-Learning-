/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int num;
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);
    v.push_back(10000);
    v.push_back(100000);
   /* for(int i=0;i<5;i++){
        cout<<"enter values:";
        cin>>num;
        v.push_back(num);
        //cout<<v[i]<<endl;
    }
    v.push_back(1);
   cout<<v[4];
   cout<<"before reserve***"<<endl;
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    cout<<"after reserve***"<<endl;
    v.reserve(10);
      cout<<"capacity of v:"<<v.capacity()<<endl;
     cout<<"size of v:"<<v.size()<<endl;
     cout<<"after resize***"<<endl;
    v.resize(7);
     cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;}*/
    /*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,4,8,-10,14,-15};
    cout<<"number at index 1 is:"<<v[1]<<endl;
    cout<<"value at index 4 is:"<<v.at(4)<<endl;
    cout<<"value at last index is:"<<v.back()<<endl;
    cout<<"value at 1st index is:"<<v.front()<<endl;
    v.at(6)=-4;
    cout<<"new value is:"<<v.at(6);

}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >num(5);
    //num.push_back (2,5);
    cout<<"enter values:";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    cout<<"values are:"<<endl;
    num.at(1)=50;
    for(int i=0;i<5;i++){
        cout<<num[i]<<endl;
    }
    cout<<"size of vector is:"<<num.size()<<endl;
    cout<<"capacity of vector is:"<<num.capacity()<<endl;
    num.at(2)=50;
    for(int i=0;i<5;i++){
        cout<<num[i]<<endl;
    } 
}*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, size;
    int max = INT_MIN;
    cout << "enter the size of vector:";
    cin >> size;
    cout << "enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        v.push_back(n);
    } cout<<"elements of vector are:";
    for (int i = 0; i < size; i++)
    {
        cout<<v.at(i)<<" ";
    }
     cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) > max)
            max = v.at(i);
    }
    cout << "max value is:" << max<<" ";
}
