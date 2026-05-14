//----------------------------------------------------------------------------------------------------------
//                             || Vector of Vector ||
//-----------------------------------------------------------------------------------------------------------
/*Create a 3×3 matrix using vector of vectors, fill it with values 1–9, and
 print it in grid form.*/
/*  #include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> v;
    v.push_back({1, 2,3});
    v.push_back({4,5,6});
    v.push_back({7, 8, 9});
    for (auto it=v.begin(); it != v.end(); it++)
    {
        for (auto jt = it->begin(); jt != it->end(); jt++)
        {
            cout << *jt << " ";
        }
        cout << endl;
    }
    v.pop_back();
    cout << "after pop back:\n";
    for (int i = 0; i < v.size(); i++)
    {
        for (auto it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    vector<vector<int>>::iterator it;
    it = v.begin();
    v.insert(it + 1, {4, 16, 77, 88, 99});
    cout << "after insert:\n";
    for (int i = 0; i < v.size(); i++)
    {
        for (auto it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}  */
/* Given a 2D grid (vector of vectors) of 0s and 1s, count the number of 1s in each row and print
row-wise counts.*/
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<vector<bool>> v;
v.push_back({1, 0, 0});
v.push_back({1, 1, 0});
v.push_back({1, 1, 1});
int count = 0;
for (auto it = v.begin(); it != v.end(); it++)
{
for (auto jt = it->begin(); jt != it->end(); jt++)
{
if (*jt == 1)
count ++;
}
cout << "count of row is:" << count << endl;
count = 0;
}
} */
// Rotate an N×N matrix (vector of vectors) 90° clockwise in-place.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({1, 2, 3});
    v.push_back({4, 5, 6});
    v.push_back({7, 8, 9});

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() / 2; j++)
        {
            swap(v[i][j], v[i][v.size() - 1 - j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
