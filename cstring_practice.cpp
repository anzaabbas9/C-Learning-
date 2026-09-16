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
/*#include <iostream>
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

    return 0;}*/
/*3. Word Counter and Longest Word Finder
Take a full sentence with cin.getline(). Using strtok(), split it into words and:

Count how many words there are
Find and print the longest word (use strlen() inside the loop to compare lengths)
Bonus: also print how many vowels appear across the whole sentence*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[50];
    int maxlen = 0;
    char largech[50];
    cout << "enter a line: " << endl;
    cin.getline(ch, 50);
    char *token = strtok(ch, " ");
    int len = strlen(ch);
    int count = 0;
    while (token != NULL)
    {
         if (strlen(token) > maxlen)
        {
            maxlen = strlen(token);
            strcpy(largech, token);
        }
    count++;
        token = strtok(NULL, " ");
    }
    cout << count<<endl;
    cout << largech<<endl;
    cout << maxlen<<endl;
    return 0;
}