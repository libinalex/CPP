/*
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
    derived class (child) - the class that inherits from another class
    base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

#include<iostream>
using namespace std;

class Vehicle {         // Base class
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

class Car: public Vehicle {         // Derived class
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}



// Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).


// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}


// Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list:


class MyClass {         // Base class
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

class MyOtherClass {            // Another base class
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

class MyChildClass: public MyClass, public MyOtherClass {       // Derived class
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}


// Access Specifiers:
You learned from the Access Specifiers chapter that there are three specifiers available in C++. Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:

Example
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
*/
/*
// Ambiguity resolution in Inheritance:
#include<iostream>
using namespace std;

class Base1 {
  public:
    void greet() {
      cout << "How are you?" << endl;
    }
    void say() {
      cout << "Hello World!" << endl;
    }
};

class Base2 {
  public:
    void greet() {
      cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2 {
  public:
    void greet() {
      Base2 :: greet();  //  Ambiguity Resolution
    }
    void say() {
      cout << "Hello Libin!" << endl;
    }
};

int main(){
  Derived obj1;
  obj1.greet();   // If Ambiguity not resolved then this will give an ambiguous error as greet is present in both Base1 and Base2 classes.

  obj1.say();   // Here Derived class's say() method will automatically override the say() method of Base1 class.
  return 0;
}
*/

// Virtual Base Class:
#include<iostream>
using namespace std;

class Student {
  protected:
    int roll;
  
  public:
    void setroll( int num) {
      roll = num;
    }
    void printroll() {
      cout << "Your roll number is: " << roll << endl;
    }
};



int main(){
  
  return 0;
}

// Constructors in Derived Class:
