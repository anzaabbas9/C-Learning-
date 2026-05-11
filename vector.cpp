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
