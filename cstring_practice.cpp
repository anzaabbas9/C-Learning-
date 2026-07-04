/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char password[50];
    cout << "enter your password:";
    cin.getline(password, 50);
    int len = strlen(password);
    bool hasdigit = false;
    bool hasletter = false;
    for (int i = 0; i < len; i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            hasdigit = true;
        }
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            hasletter = true;
        }
    }
    if (len >= 8){
        if (hasdigit && hasletter)
        {
            cout << "strong password" << endl;
        }
        else
        {
            cout << "please enter a strong password according to all  given conditions "<<endl;
        }
    }
        else
        cout<<"reenter password atleast of given length"<<endl;
    return 0;
}*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[50];
    bool ispalindrome=true;
    cin.getline(word,50);
    int len=strlen(word);
    int i=0;
    int j=len-1;
    while(i<j){
            if (word[i] != word[j]) {
                ispalindrome=false;
                break;
            }
           i++;
           j--;}
           if(ispalindrome)
           cout<<"palindrome !!";
           else
           cout<<"not palindrome";
        
    return 0;}