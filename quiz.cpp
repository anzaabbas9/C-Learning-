#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Question
{
    string query;
    string option[4];
    char answer;
};
int main()
{
    int score;
    char user;
    vector<Question> quiz;
    quiz.push_back({"what is 2+2?", {"1", "2", "3", "4"}, 'D'});
    quiz.push_back({"what is 2-2?", {"0", "1", "3", "4"}, 'A'});
    quiz.push_back({"what is 2/2?", {"1", "2", "3", "4"}, 'A'});
    for (int i = 0; i < quiz.size(); i++)
    {
        cout << quiz[i].query << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << ('A' + j) << ")" << quiz[i].option [j]<< endl;}
            cout<<"enter your answer:";
            cin >> user;
            if (quiz[i].answer == user)
            {
                cout << "correct answer" << endl;
                score++;
            }
            else{
                cout << "wrong!!";
            }
       
       cout<<score<<quiz.size();
       }}
