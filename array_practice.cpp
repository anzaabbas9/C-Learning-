/*#include <iostream>
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
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int temp;
    cout<<"enter values:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5/2; i++)
    {
        if(arr[i]%2==0){
        temp = arr[i];
        arr[i]=arr[5-1-i];
         arr[5-1-i]=temp;}
}
 for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\t";
    }
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 5, 7, 8};
    int n;
    int target;
    cout << "enter target value:";
    cin >> target;
    cout << "enter length of array:";
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << "\t";
        }
        cout<<endl<<"target pairs are:";
            for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target && i < j)
            {
                cout << arr[i] << "," << arr[j]<<endl;
            }

        }*/
#include <iostream>
using namespace std;
int main()
{
    int temp = 0;
    cout << "original array";
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        cout << arr[i];
    cout << endl;
    /*for(int i=0;i<5/2;i++){
   temp=arr[i];
arr[i]=arr[5-1-i];
arr[5-1-i]=temp;}
cout<<"reverse array:";
 for(int i=0;i<5;i++){
    cout<<arr[i];}*/
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp = arr[i];
            int j = i;
        while (j > 0 && arr[j - 1] % 2 == 0)
        {            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }
    }
    cout << "final result:";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}