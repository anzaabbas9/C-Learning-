//------------------------------------------------------------------------------------
//                               POINTERS
//------------------------------------------------------------------------------------
/*1. Basic Pointer Practice
Declare an int variable, then a pointer to it. Print the variable's value, 
its address (using the pointer), and change the variable's value through the 
pointer (dereference and assign). Print again to confirm it changed.*/
/*#include<iostream>
using namespace std;
int main(){
    int a=20;
    int *ptr=&a;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    *ptr=2;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    return 0;
}*/
/*2. Swap Using Pointers
Rewrite your earlier swapNumbers function, but this time use pointers (int*) 
instead of references (int&).Call it with &x, &y from main().*/
/*#include<iostream>
using namespace std;
void swapnumbers(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    cout<<"before swap!!"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    swapnumbers(&x,&y);
    cout<<"after swap!!"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}*/
/*Dynamic Array with Pointers: Dynamically allocate an array using new, fill it with 
user input, then write int* findMax(int *arr, int size) to return a pointer to the largest 
element (print its value and index using pointer arithmetic). Also write 
void doubleAll(int *arr, int size) to double every element through the pointer, 
and don't forget delete[] arr; at the end.*/
/*#include<iostream>
using namespace std;
int* findMax(int *, int );
void doubleAll(int *, int );
int main(){
    int n;
    cout<<"enter size of array u want:";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *result=findMax(arr, n);
    cout<<"max value:"<<*result<<endl;
    cout<<"index of max value :"<<result-arr<<endl;
     doubleAll(arr, n );
    delete[] arr;
     
}
int* findMax(int *arr, int size){
    int *max=arr;
    for(int i=0;i<size;i++){
        if(arr[i]>*max){
            max=&arr[i];
        }
    }return max; 
}
void doubleAll(int *arr, int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }cout<<"array values after double!!"<<endl;
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}*/
#include<iostream>
using namespace std;
int main(){
    /*int x=10;
    int *ptr;
    ptr=&x;
    cout<<"x="<<x<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&x="<<&x<<endl;
    cout<<"ptr="<<ptr<<endl;
    cout<<"&ptr="<<&ptr<<endl;
}*/
//complex ptr code
int i=1024;
int *ip=&i;
int *ip2=ip;
//int *ip3=ip;
int **ip3=&ip;
//unsigned int * uip3=*ip;;
//unsigned int *uip3=ip;
cout<<"*ip:"<<*ip<<endl;
cout<<"ip:"<<ip<<endl;
cout<<"&i:"<<&i<<endl;
cout<<"ip2:"<<ip2<<endl;
cout<<"*ip3:"<<*ip3<<endl;
cout<<"ip3:"<<ip3<<endl;
//cout<<"**ip3:"<<**ip3<<endl;
//cout<<"uip3:"<<uip3<<endl;
}
