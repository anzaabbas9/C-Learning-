#include<iostream>
using namespace std;
int main(){
    int choice=0,sum=0,sub=0,mul=0,div=0;
    do{
        int a,b;
        cout<<"\n******************"<<endl;
        cout<<"1.addition--"<<endl;
        cout<<"2.subtraction--"<<endl;
        cout<<"3.multiplication--"<<endl;
        cout<<"4.division--"<<endl;
        cout<<"q.quit--"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"you chose 1-----sum"<<endl;
            cout<<"enter two numbers:";
            cin>>a>>b;
            sum=a+b;
            cout<<"sum is :"<<sum;
        }
         else if(choice==2){
            cout<<"you chose 2-----sub"<<endl;
            cout<<"enter two numbers:";
            cin>>a>>b;
            sub=a-b;
            cout<<"sub is :"<<sub;
        }
     else if(choice==3){
            cout<<"you chose 3-----mul"<<endl;
            cout<<"enter two numbers:";
            cin>>a>>b;
            mul=a*b;
            cout<<"mul is :"<<mul;
        }
     else if(choice==4){
            cout<<"you chose 4-----div"<<endl;
            cout<<"enter two numbers:";
            cin>>a>>b;
            div=a/b;
            cout<<"div is :"<<div;
             }
    else if(choice=='q'||choice=='Q'){
                cout<<"good bye!!";
             }
    else
    cout<<"invalid choice try again!!";
    cin>>choice;

}while(choice!='q'&&choice!='Q');
}