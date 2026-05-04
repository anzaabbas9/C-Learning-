#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 3, 4, 4, 3, 5, 6};
    cout << "Duplicate output:";
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl
         << "Non Duplicate output:";
    for (int i = 0; i < 7; i++)
    {
        int count = 0;
        for (int j = 0; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}