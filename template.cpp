//======================================================================================
//                               TEMPLATE
//======================================================================================

/* Generic Max Function
Write a template function T findMax(T a, T b) that returns whichever of two values is 
larger.Test it with int, double, and char.*/
/*#include<iostream>
#include<string>
using namespace std;
template <class T>
T findmax(T a, T b){
	if(a>b){
        return a;
    }return b;
}
int main(){
    string s1 = "hi", s2 = "uo";
    cout<<findmax(2,4)<<endl;
    cout<<findmax(2.7,4.8)<<endl;
    cout<<findmax(s1, s2)<<endl;
    return 0;
}*/
/*: Generic Array Printer
Write a template function void printArray(T arr[], int size) that prints every element
 of an array, regardless of type.Test it with an int array and a double array.*/
 /*#include<iostream>
 using namespace std;
 template<class T>
 void printArray(T arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
 }
 int main(){
    int arr1[]={1,3,6};
    float arr2[]={3.7,6.8};
    char arr3[]={'a','b','v','k'};
    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(float);
    int p=sizeof(arr3)/sizeof(char);
    printArray(arr1,n);
    printArray(arr2,m);
    printArray(arr3,p);
    return 0;
 }*/
/*Generic Swap + Two-Type Template
Write a template function void mySwap(T &a, T &b) that swaps any two values of the same 
type using references. Then go a step further: write a template function 
template <typename T1, typename T2> void printPair(T1 a, T2 b) that takes two different 
types (e.g., an int and a string) and prints them together — this introduces using 
multiple template parameters at once,not just one T.*/
#include<iostream>
 using namespace std;
 template<class T>
  void mySwap(T &a, T &b) {
    T temp=a;
    a=b;
    b=temp;
  }
  template <typename T1, typename T2>
  void printPair(T1 a, T2 b){
    cout<<a<<" "<<b;
  }

  int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    mySwap(a,b);
    cout<<a<<" "<<b<<endl;
    printPair(2,6.9);
  }
 
