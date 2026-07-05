#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a string for pyramid pattern:";
    getline(cin, str);
    int len = str.length();
    int pos = 0;
    for (char c : str)
    {
        int space = len - (pos + 1);
        while (space > 0)
        {
            cout << " ";
            --space;
        }
        for (int i = 0; i < pos; i++)
        {
            cout << str.at(i);
        }
        cout << c;
        for (int i = pos - 1; i >= 0; i--)
        {
            cout << str.at(i);
        }
        cout << endl;
        pos++;
    }
    return 0;
}