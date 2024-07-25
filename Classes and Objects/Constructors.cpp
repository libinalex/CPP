/*
// Constructor:- 
A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ():
The constructor has the same name as the class, it is always public, and it does not have any return value.
It is used to initialize the objects of its class.


1. Default Constructor:- 

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor        // Default Constructor - does not take any parameter
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

// example 2
#include<iostream>
using namespace std;

class Complex {
  int a, b;

  public:
    Complex() {
      a = 4;
      b = 7;
    }

    void printnum() {
      cout<<"Your complex number is: "<<a<<" + "<<b<<"i";
    }
};

int main(){
  Complex c1;
  c1.printnum();
  return 0;
}


// 2. Parameterized Constructor
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.

The following class have brand, model and year attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc). When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:

#include<iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {                   // Parameterized Constructor
      brand = x;
      model = y;
      year = z;
    }
};

int main(){
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}

// Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator, followed by the name of the constructor (which is the same as the class):

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z);         // Constructor declaration inside class
};


Car::Car(string x, string y, int z) {           // Constructor definition outside the class
    brand = x;
    model = y;
    year = z;
}


// 3. Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class.

#include <iostream>
using namespace std;
  
class point 
{
private:
  double x, y;
  
public:
  point (double px, double py) 
  {
    x = px, y = py;
  }
  void printpoint() {
    cout<<"The point is: ("<<x<<", "<<y<<")";
  }
};
  
int main(void) 
{
  point a = point(5, 6);      // Copy Constructor
  a.printpoint();
}

*/
// Constructor Overloading:
/*
#include<iostream>
using namespace std;

class Complex {
  int x, y;

  public:
    Complex(){
      x=0;
      y=0;
    }

    Complex(int a) {
      x=a;
      y=0;
    }

    Complex(int a, int b) {
      x=a;
      y=b;
    }

    void printnum() {
      cout<<"The complex number is: "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main(){
  Complex c1;
  c1.printnum();

  Complex c2(4);
  c2.printnum();

  Complex c3(3, 7);
  c3.printnum();

  return 0;
}
*/
/*
// Constructor with Default Arguments:
#include<iostream>
using namespace std;

class Complex {
  int x, y;

  public:
    Complex(int a, int b = 0) {
      x = a;
      y = b;
    }

    void printnum() {
      cout<<"The complex number is: "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main(){
  Complex c1(3, 7);
  c1.printnum();

  Complex c2(4);
  c2.printnum();

  return 0;
}
*/

// Dynamic initialization of Objects using constructors:
#include<iostream>
using namespace std;

class BankDeposit {
  int principal, years;
  float rate;
  float returnValue;

  public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);   // r can take value like 0.14 for rate of interest
    BankDeposit(int p, int y, int r);     // r can take value like 14 for 14% rate of interest
    void show() {
      cout<<"The principal amount was: "<<principal<<". The return value after "<<years<<" years is "<<returnValue<<endl;
    }
};

BankDeposit :: BankDeposit(int p, int y, float r) {
  principal = p;
  years = y;
  rate = r;
  returnValue = p;

  for (int i = 0; i<y; i++) {
    returnValue *= (1+r);
  }
}

BankDeposit :: BankDeposit(int p, int y, int r) {
  principal = p;
  years = y;
  rate = float(r)/100;
  returnValue = p;

  for (int i = 0; i<y; i++) {
    returnValue *= (1+rate);
  }
}

int main(){
  BankDeposit b1, b2, b3;
  int p, y;
  float r;
  int R;

  cout<<"Enter the values of principal, years and rate of interest: ";
  cin>>p>>y>>r;
  b1 = BankDeposit(p, y, r);
  b1.show();

  cout<<"\nEnter the values of principal, years and rate of interest: ";
  cin>>p>>y>>R;
  b2 = BankDeposit(p, y, R);
  b2.show();
  return 0;

}