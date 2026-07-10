//fabonacci series using recursion(0,1,1,2,3,5,8,13,21.....)
/*#include <iostream>
using namespace std;
unsigned long febon(unsigned long n)
{
    if (n <= 1)
    {
        return n;
    }
    return febon(n - 1) + febon(n - 2);
}
int main()
{
    int n;
    cout << "enter number of values:";
    cin >> n;
   for(int i=0;i<=n;i++){
    cout<<febon(i)<<" ";
   }
    return 0;
}*/
//sum of N natural numbers using recursion
/*#include<iostream>
using namespace std;
int sum_of_num(int n){
    if(n==0){
        return 0;
    }
    return n+sum_of_num(n-1);
}
int main()
{
    int n;
    cout<<"enter natural numbers u want :";
    cin>>n;
    cout<<sum_of_num(n);
    return 0;
}*/
//factorial of a number
/*#include<iostream>
using namespace std;
double fact(int n);
int main(){
    int n;
    cout<<"enter value u want its factorial:";
    cin>>n;
    double result=fact(n);
    cout<<result;
    return 0;
}
double fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}*/
//program if rupee will be double for n number of days when u have 1 rupee on 1st day
/*#include<iostream>
using namespace std;
double twice_rupee(int);
int main(){
    int n;
    cout<<"enter number of days:";
    cin>>n;
    cout<<twice_rupee(n);
    return 0;
}
double twice_rupee(int n){
    if(n==1){
        return 1;
    }
    return 2*twice_rupee(n-1);
}*/
/*1.Write a function void findMinMax(int arr[], int size, int &min, int &max) that takes
 an array and fills in the min and max values via reference parameters (instead of
  returning them, since you need two results). Call it from main() with a
   sample array and print both.*/
/*#include<iostream>
using namespace std;
void findMinMax(int [],int,int&,int&);
int main(){
    int arr[]={1,10,567,987,-20,-1,40};
    int min=arr[0];
    int max=arr[0];
    int size=(sizeof(arr)/sizeof(int));
    findMinMax(arr,size,min,max);
    return 0;
}
void findMinMax(int arr[],int size,int &min,int &max){
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }cout<<"min is:"<<min<<endl<<"max is:"<<max<<endl;
}*/
/*2. Function Overloading — Area Calculator
Write three functions, all named area, but with different parameters (this is called 
overloading — same function name,different parameter types/counts):*/
/*#include<iostream>
using namespace std;
double area(int );
double area(double,double);
double area(unsigned long);
int main(){
    int side;
    double length,width;
    unsigned long radius;
    cout<<"enter side:";
    cin>>side;
    cout<<"area of square is:"<<area(side)<<endl;
    cout<<"enter length n width:";
    cin>>length>>width;
    cout<<"area of rectangle is:"<<area(length,width)<<endl;
    cout<<"enter radius:";
    cin>>radius;
    cout<<"area of circle is:"<<area(radius)<<endl;
    return 0;
}
double area(int side){
    return side*side;
}
double area(double length,double width){
    return length*width;
}
double area(unsigned long radius){
    float pi=3.14;
    return pi*radius*radius;
}*/
/*3. Array Sum and Average (Pass Array to Function)
Write a function double average(int arr[], int size) that returns the average of all elements.
 Call it from main() with a user-input array.*/
 /*#include<iostream>
 using namespace std;
 double average(int [],int);
 int main(){
    int arr[]={1,20,-4,20};
    int size=(sizeof(arr)/sizeof(int));
   cout<<average(arr,size);
   return 0;}
 double average(int arr[],int size){
    double avg=0,sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }return avg=sum/size;
 }*/
/*4. Check Even/Odd with a Function, Called in a Loop
Write a function bool isEven(int n). In main(), loop through numbers 1 to 20 and use 
the function to print whether each is "Even" or "Odd".*/
/*#include<iostream>
using namespace std;
bool isEven(int n);
int main(){
    for(int i=1;i<=20;i++){
        if(isEven(i)){
       cout<<i<<" is "<< "even"<<endl;
    }else
    cout<<i<<" is odd"<<endl;}
    return 0;
}
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}*/
/*5. Multiple Return Values via Reference — Temperature Stats
Write a function void getStats(int arr[], int size, int &sum, double &avg) that calculates 
both the sum and average of an array and returns both through reference parameters.*/
#include<iostream>
using namespace std;
void getstats(int [],int,double&,double&);
int main(){
    int arr[]={3,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    double sum=0;
    double avg=0;
    getstats(arr,size,sum,avg);
    cout<<"sum:"<<sum<<endl;
    cout<<"avg:"<<avg<<endl;
    return 0;
}
void getstats(int arr[], int size, double &sum, double &avg){
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }avg=sum/size;
    return;
}