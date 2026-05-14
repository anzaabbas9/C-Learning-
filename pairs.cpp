// Store a student's name and marks as a pair and print them.
/* #include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<string, float> p;
    p = make_pair(string("anza"), 151.0f);
    cout << "Name: " << p.first << ", Marks: " << p.second << endl;
    return 0;
} */
// Given a vector of pairs (name, score), sort them by score in descending order and print the leaderboard.
/* #include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    vector<pair<string, int>> v;
    v.push_back({"anu", 200});
    v.push_back({"ali", 300});
    v.push_back({"aliya", 2400});
    sort(v.begin(), v.end(), [](auto a, auto b)
         { return a.second > b.second; });
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    } */

// Given a list of intervals as pairs (start, end), merge all overlapping intervals and print the result.
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    v.push_back({1, 3});
    v.push_back({2, 6});
    v.push_back({8, 10});
    v.push_back({15, 18});
    sort(v.begin(), v.end(), [](auto a, auto b)
         { return a.first < b.first; });
    vector<pair<int, int>> result;
    result.push_back(v[0]); // start with first interval

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first <= result.back().second)
            result.back().second = max(result.back().second, v[i].second);
        else
            result.push_back(v[i]);
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << "(" << result[i].first << ", " << result[i].second << ")" << endl;
    }
}