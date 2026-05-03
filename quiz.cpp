#include <iostream>
using namespace std;

class quiz
{
public:
    int choice;
    int score = 0;

    string question[3] = {
        "what is 3+3 ?",
        "who is founder of pakistan?",
        "what is 3*3?"};

    string option[3][3] = {
        {"5", "6", "7"},
        {"Quaid-e-azam", "Iqbal", "sir syed"},
        {"7", "6", "9"}};

    int answer[3] = {1, 0, 2};
};