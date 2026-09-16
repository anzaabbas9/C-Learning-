/*Write a function void swapNumbers(int &a, int &b) that swaps the values of two variables.
Call it from main() and print before/after values. Then try writing a version without & (pass by value)
 and observe that the swap doesn't actually affect the original variables in main() — this is a great way
  to see the real difference between the two.*/
/*#include <iostream>
using namespace std;
void swapNumbers(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b=temp;
    cout<<"within swap function:"<<a<<" "<<b<<endl;
}
int main()
{
    int x, y;
    cout << "enter two numbers:";
    cin >> x >> y;
    cout << "before swap:" << x <<" "<< y << endl;
    swapNumbers(x, y);
   cout << "after swap:" << x <<" "<< y;
    return 0;
}*/
/*Write a function void greet(string name, string greeting = "Hello") that prints something like 
"Hello, Anza!".Call it once with both arguments,  and once with just  the name
  (letting greeting default).*/
  #include<iostream>
  using namespace std;
  void greeting(string name,string greeting="hello"){
  //void greeting(string greeting="hello", string name){
    cout<<greeting<<", "<<name<<"!"<<endl;
  }
  int main(){
    greeting("anza");
    greeting("wajiha","hey");
    return 0;
  }