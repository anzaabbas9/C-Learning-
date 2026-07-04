#include<iostream>
#include<fstream>
using namespace std;
class employee{
    public:
    string name;
    int code;
    int age;
    string designation;
    string address;
    employee(string n,int c,int a,string d,string s){
        name=n;
        code=c;
        age=a;
        designation=d;
        address=s;
    }
    void display(){
        cout<<code<<","<<name<<","
        <<address<<","<<age<<","<<designation<<endl;
    }      
};
int main(){
    string line;
    employee e1("ali",1234,21,"manager","johar town lahore");
    employee e2("ahmed",3456,24,"HR","lahore cantt");
    ofstream fout("employee.txt");
    fout << e1.code << "," << e1.name << "," << e1.age << "," << e1.designation << "," << e1.address << endl;
fout << e2.code << "," << e2.name << "," << e2.age << "," << e2.designation << "," << e2.address << endl;
fout.close();
cout<<"employee record!!"<<endl;
    e1.display();
    e2.display();   
    ifstream fin("employee.txt");
    cout << "\nReading from file:" << endl;
    while(getline(fin,line))
    cout<<line;
    fin.close();
    return 0;
}
