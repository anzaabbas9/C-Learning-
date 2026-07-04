#include<iostream>
#include<vector>
using namespace std;
class book{
    public:
    string title;
    string aurthor;
    double price;
    book(string t,string a,double p){
        title=t;
        aurthor=a;
        price=p;
    }
    void display(){
        cout<<"title:"<<title<<endl;
        cout<<"aurthor:"<<aurthor<<endl;
        cout<<"price:"<<price<<endl;
    }
    
};
class bookshelf{
    public:
    vector<book>books;

    void addbook(book b){
        books.push_back(b);
    }
    void showshelf(){
        for(auto &b:books){
            b.display();
        }
    }

};
class issuerecord{
    public:
    vector<book>record;
    void issuebook(book b){
    record.push_back(b);}
    void showrecord(){
        for(auto &b:record){
            b.display();
        }
    }
};
class person{
public:
vector<bookshelf>b1;
string name;
bookshelf bs;
void addtoshelf(book b){
b1.push_back(bs);
}
void myshelf(){
    for(auto &b1:b1){
        b1.showshelf();
    }
}
void returnbooks(issuerecord &record){
    record.showrecord();

}
};
int main(){
    book b1("the king","john",12000);
    book b1("the queen","peter",15000);
    

}