/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;

    // Creating file in C drive
    ofstream fout("C:\\student.txt");

    cout << "Enter student name: ";
    getline(cin, name);

    // Writing data into file
    fout << "Student Name: " << name;

    fout.close();

    // Reading data from file
    ifstream fin("C:\\student.txt");

    string data;

    cout << "\nData stored in file:\n";

    while (getline(fin, data))
    {
        cout << data << endl;
    }

    fin.close();

    return 0;
}*/
//Air port security system 
/*#include <iostream>
using namespace std;

class Airport
{
public:
    Airport()
    {
        cout << "Airport Security Started\n";
    }
};

class Passenger : public Airport
{
    int age;
    float luggageWeight;

public:

    Passenger(int a, float w)
    {
        age = a;
        luggageWeight = w;

        try
        {
            cout << "Outer Try Block\n";

            try
            {
                cout << "Inner Try Block\n";

                if(age < 0)
                    throw age;

                if(luggageWeight > 30)
                    throw luggageWeight;

                cout << "Security Cleared\n";
            }

            catch(int)
            {
                cout << "Invalid Age Exception\n";

                throw;
            }
        }

        catch(...)
        {
            cout << "Outer Catch Executed\n";
        }
    }
};

int main()
{
    Passenger p(5, 4);

    cout<< "Boarding Closed";

    return 0;
}*/
//Electricity billing system 
/*#include <iostream>
using namespace std;

class Electricity
{
public:
    Electricity()
    {
        cout<< "Meter Connected\n";
    }
};

class Bill : public Electricity
{
    float units;

public:

    Bill(float u)
    {
        units = u;

        try
        {
            if(units < 0)
                throw units;

            if(units == 0)
                throw 'Z';

            if(units > 1000)
                throw "Overload";

            cout << "Bill Generated\n";
        }

        catch(float)
        {
            cout << "Negative Units Exception\n";
        }

        catch(char)
        {
            cout << "Zero Units Exception\n";
        }

        catch(...)
        {
            cout << "Default Exception Caught\n";
        }
    }
};

int main()
{
    Bill b(1500);

    cout << "Billing Closed";

    return 0;
}*/
//Online shopping system 
/*#include <iostream>
using namespace std;

class Product
{
public:
    Product()
    {
        cout << "Product Selected\n";
    }
};

class Order : public Product
{
    int quantity;

public:

    Order(int q)
    {
        quantity = q;

        try
        {
            if(quantity == 0)
                throw quantity;

            if(quantity > 5)
                throw 1.5;

            cout << "Order Confirmed\n";
        }

        catch(int)
        {
            cout << "Quantity Cannot Be Zero\n";
        }

        catch(...)
        {
            cout << "Bulk Order Exception\n";
        }
    }
};

int main()
{
    Order o(10);

    cout<< "Shopping Closed";

    return 0;
}*/
//University result system 
/*#include <iostream>
using namespace std;

class University
{
public:
    University()
    {
        cout << "University Portal Opened\n";
    }
};

class Student : public University
{
    int marks;

public:

    Student(int m)
    {
        marks = m;

        try
        {
            if(marks < 0)
                throw marks;

            if(marks > 100)
                throw 'G';

            cout << "Result Generated\n";
        }

        catch(int)
        {
            cout << "Negative Marks Exception\n";
        }

        catch(char)
        {
            cout << "Invalid Grade Exception\n";
        }
    }
};

int main()
{
    Student s(120);

    cout << "Program Ended";

    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums = {4, 1, 3, 2};

    sort(nums.begin(), nums.end());

    for(int x : nums)
        cout << x << " ";

    return 0;
}*/
/*#include <iostream>
using namespace std;

void display(int x) {
    cout << "Square = " << x * x << endl;
}

void display(string s) {
    cout << "Length = " << s.length() << endl;
}

int main() {
    display(5);
    display("Hello");
}*/
/*#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maximum(4, 7) << endl;
    cout << maximum(3.5, 2.1) << endl;
    cout << maximum('A', 'Z') << endl;
}*/
/*#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};

// Circle Class
class Circle : public Shape {
    int radius;
public:
    Circle(int r) { radius = r; }

    void draw() {
        cout << "Circle radius: " << radius << endl;
    }

    // Operator overloading (+)
    Circle operator + (Circle c) {
        return Circle(radius + c.radius);
    }
};

// Square Class
class Square : public Shape {
    int side;
public:
    Square(int s) { side = s; }

    void draw() {
        cout << "Square side: " << side << endl;
    }

    // Operator overloading (+)
    Square operator + (Square s) {
        return Square(side + s.side);
    }
};

// Triangle Class
class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    void draw() {
        cout << "Triangle base: " << base 
             << ", height: " << height << endl;
    }

    // Operator overloading (+)
    Triangle operator + (Triangle t) {
        return Triangle(base + t.base, height + t.height);
    }
};

// Main Function
int main() {
    Shape* s;

    Circle c1(5), c2(3);
    Square sq1(4), sq2(2);
    Triangle t1(6, 8), t2(2, 3);

    // Runtime polymorphism
    s = &c1;
    s->draw();

    s = &sq1;
    s->draw();

    s = &t1;
    s->draw();

    cout << "\n--- After Operator Overloading (+) ---\n";

    Circle c3 = c1 + c2;
    Square sq3 = sq1 + sq2;
    Triangle t3 = t1 + t2;

    c3.draw();
    sq3.draw();
    t3.draw();

    return 0;
}*/
/*#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};

// Circle Class
class Circle : public Shape {
    int radius;
public:
    Circle(int r) { radius = r; }

    void draw() {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

// Square Class
class Square : public Shape {
    int side;
public:
    Square(int s) { side = s; }

    void draw() {
        cout << "Drawing Square with side " << side << endl;
    }
};

// Triangle Class
class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    void draw() {
        cout << "Drawing Triangle with base " << base
             << " and height " << height << endl;
    }
};

// Main Function
int main() {
    Shape* s;

    Circle c(5);
    Square sq(4);
    Triangle t(6, 8);

    // Runtime polymorphism
    s = &c;
    s->draw();

    s = &sq;
    s->draw();

    s = &t;
    s->draw();

    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

// Product Class (Independent - Aggregation)
class Product {
public:
    string name;
    double price;
    int quantity;

    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void display() {
        cout << "Product: " << name 
             << ", Price: " << price 
             << ", Quantity: " << quantity << endl;
    }
};

// ShoppingCart Class (Composition with Customer)
class ShoppingCart {
private:
    vector<Product> items;

public:
    void addItem(Product p) {
        items.push_back(p);
    }

    void showCart() {
        cout << "\nShopping Cart Items:\n";
        for (auto &p : items) {
            p.display();
        }
    }
};

// Order Class (Aggregation with Product)
class Order {
private:
    vector<Product> products;

public:
    void addProduct(Product p) {
        products.push_back(p);
    }

    void showOrder() {
        cout << "\nOrder Details:\n";
        for (auto &p : products) {
            p.display();
        }
    }
};

// Customer Class (Association with Order, Composition with Cart)
class Customer {
private:
    string name;
    ShoppingCart cart;   // Composition (cart belongs to customer)

public:
    Customer(string n) {
        name = n;
    }

    void addToCart(Product p) {
        cart.addItem(p);
    }

    void showCart() {
        cart.showCart();
    }

    void placeOrder(Order &order) {   // Association
        cout << "\nOrder placed by: " << name << endl;
        cart.showCart();
    }
};

int main() {

    // Creating Products (Independent objects)
    Product p1("Laptop", 80000, 1);
    Product p2("Mouse", 1500, 2);

    // Customer
    Customer c1("Ali");

    // Add products to cart
    c1.addToCart(p1);
    c1.addToCart(p2);

    // Show cart
    c1.showCart();

    // Create Order
    Order o1;
    o1.addProduct(p1);
    o1.addProduct(p2);

    // Place order
    c1.placeOrder(o1);

    // Show order details
    o1.showOrder();

    return 0;
}