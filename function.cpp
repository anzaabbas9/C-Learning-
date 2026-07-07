        //simple functions
/*#include<iostream>
using namespace std;
int display(){
    int a=1,b=2;
    cout<<"hi! welcome to programming."<<endl;
    return a+b;
}
int main(){
    int c;
c=display();
cout<<c;
}*/
/*Write a function bool isPrime(int n) that returns true if n is prime, false otherwise.
 In main(), loop from 1 to 50 and print all the prime numbers by calling this function.*/
 /*#include<iostream>
 using namespace std;
 bool isprime(int n){
     if(n<=1){
            return false;
        }
    for(int i=2;i<n;i++){
       if(n%i==0){
        return false;
       } }
       return true;
}
 int main()
 {
    int count=0;
    cout<<isprime(4);
    for(int i=1;i<=50;i++){
        if(isprime(i)==true){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<"total prime numbers are:"<<count;
    return 0;
 }*/
/*#include<iostream>
using namespace std;
long factorial (int n){
    long  result=1;
    int c=2;
    while(c<=n){
        result=result*c;
        c++;
    }
    return result;
}
int main(){
cout<<factorial(15);
return 0;
}*/
/*Write a function int maxOfThree(int a, int b, int c) that returns the largest of the three.
 Try writing the comparison logic yourself (don't use std::max yet).*/
 /*#include<iostream>
 using namespace std;
 int maxofthree(int a,int b,int c){
    if(a>=b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else 
    return c;
 }
 int main(){
    int result;
    result=maxofthree(6,6,4);
    cout<<result;
    return 0;
 }*//*Write two functions: double celsiusToFahrenheit(double c) and double fahrenheitToCelsius(double f). 
 Ask the user which conversion they want and the value,then call the appropriate function 
 and print the result.*/
#include<iostream>
using namespace std;
double CelciusToFarenheit(double c){
    double  f;
    f=c*9/5+32;
    return f;
}
double FarenheitToCelcius(double f){
    double c;
    c=(f-32)*5/9;
    return c;
}
int main(){
    cout<<CelciusToFarenheit(24)<<endl;
    cout<<FarenheitToCelcius(37)<<endl;
    return 0;
}