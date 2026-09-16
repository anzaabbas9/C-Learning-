#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, string>> v1{{1, "anza"}, {2, "ayesha"}, {3, "shiza"}};
    //vector<pair<int, string>> v2(v1);
    /* v.push_back({1,2});
    v.push_back({3,4});
    v.push_back({5,6}); */
    int sum=0;
    for (auto n : v1)
    {
        sum+=n.first;
    }
    // v2.erase(v2.begin(), v2.begin() + 2);
    // v2.clear();
    /* }
    v1.push_back(make_pair(4,"sona")); */
   // cout<<"after push back:"<<"\n";
    /*for(int i=0;i<v1.size();i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    v1.pop_back();
    cout<<"after pop back:"<<"\n";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    } 
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i].first << " " << v2[i].second << endl;
    }*/
    cout << "Sum of first elements: " << sum << endl;
    return 0;
}