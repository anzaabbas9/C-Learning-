// Create a vector of pairs storing (item, price), then print all items that cost more than 50.
/* #include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main(){
    vector<pair<string , int>>v;
    v.push_back({"pamper",100});
    v.push_back({"bottle",20});
    v.push_back({"bowl",60});
    for(int i=0;i<v.size();i++){
        if(v[i].second>50){
            cout<<v[i].first<<"  "<<v[i].second<< endl;
        }
    }


} */
/* Given a vector of pairs (student, marks), find the student with
the highest marks using only vector-of-pair operations.*/
/* #include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
int main()
{
    vector<pair<string, int>> v;
    v.push_back({"aliya", 321});
    v.push_back({"allama", 123});
    v.push_back({"ali", 674});
    v.push_back({"aliha", 786});
    string name = v[0].first;
    int marks = v[0].second;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second > marks)
        {
            marks = v[i].second;
            name = v[i].first;
        }
    }
    cout << name << " " << marks << endl;
} */
/* Given a vector of pairs representing edges (u, v) of an undirected graph,
 print the adjacency list for each node.*/
 #include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    v.push_back({1,2});
    v.push_back({3,4});
    v.push_back({5,6});
    v.push_back({7,8});
    vector<int>adj[9];
    for(int i=0;i<v.size();i++){
        int u=v[i].first;
        int v1=v[i].second;
        adj[u].push_back(v1);
        adj[v1].push_back(u);
    }
     for(int i = 1; i <= 8; i++){
    cout << i << " -> ";
    for(int j = 0; j < adj[i].size(); j++)
        cout << adj[i][j] << " ";
    cout << endl;
}
}


