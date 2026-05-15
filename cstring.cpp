// cstring functions as strlen,strcpy,strcmp,ctrcat and also getline.
/* #include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char F_name[5];
    char l_name[6];
    char full_name[12];
    cout << "enter first name:";
    cin >> F_name;
    cout << "enter last name:";
    cin >> l_name;
    cout << "length of your string is:" << strlen(F_name) << endl;
    cout << F_name << " ";
    cout << l_name << endl;
   strcpy(full_name, F_name);
    strcat(full_name, " ");
    strcat(full_name, l_name);
    cout << full_name;
    cin.ignore();
    cout << "enter full name:";
    cin.getline(full_name, 12);
    cout << full_name;
    if (strcmp(F_name, l_name) == 0)
    {
        cout << "strings are equal!!!";
    }
    else
    {
        cout << "oops!!not equal";
    }
} */
// Take a sentence as a char array, split it into words using strtok() and print each word on a new line.
/* #include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[50];
    cout<<"enter your string:";
    cin.getline(ch,50);
    cout<<ch<<endl;
    char* token = strtok(ch, " ");
while(token != NULL){
    cout << token << endl;
    token = strtok(NULL, " ");
}} */
// Find a word inside a sentence using strstr() and print its position.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[20] = "hello anza world";
    char *pos = strstr(ch, "anza");
    if (pos != NULL)
    {
        cout << "found at position: " << pos - ch << endl;
        cout << "word found: " << pos << endl;
    }
    else
    {
        cout << "not found!" << endl;
    }}