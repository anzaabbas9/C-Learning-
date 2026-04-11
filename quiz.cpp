#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class quiz{
  public:
    int choice;
    int score=0;
    string question[3]={"what is 3+3 ?" ,
    "who is founder of pakistan?","what is 3*3?"};
    string option[3][3]={{"5 ","6" ,"7 "},{"quaid-e-azam",  "iqbal", "sirsayyed " },{"7","6","9"}};
   int answer[3]={1,0,2};
    
    // member functions
  void finalquiz(){
    
    for(int i=0;i<3;i++){
    cout<<question[i]<<endl;
     for(int j=0;j<3;j++){
    cout<<j<<":"<<option[i][j]<<" ";
    cout<<"enter your choice:";
    cin>>choice;
        if(answer[i]==choice){
       cout<<"correct!!"<<endl;
         score++;}
         else{
        cout<<"wrong!! correct answer is "<<option[i][answer[i]]<<endl;}}

    cout<<"your final score is"<<score;
    }
  }};

//main function
int main(){
    quiz q1;
    q1.finalquiz();
}