#include<iostream>
#include<iomanip>
#include<limits>



using namespace std;
int main()
{
    float x=3.1456457698;
    double y=2.25376798808567567898;
    long double z=1.254645685678976758978;
    cout<<setprecision(10);
    cout<<"float x="<<x<<endl;
    cout<<"double y="<<y<<endl;
    cout<<"long double z="<<z<<endl;
    cout<<numeric_limits<float>::digits10<<endl;
     cout<<numeric_limits<double>::digits10<<endl;
      cout<<numeric_limits<long double>::digits10<<endl;
      cout<<numeric_limits<int>::digits10;
      
}