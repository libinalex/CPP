/*
A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. 
The data and functions within a class are called members of the class.

Similar to structures but also gives features like:
Data Hiding
Code Reusability
Data binding
Flexibility

A class is a template for objects, and an object is an instance of a class.
Object is a runtime entity, it is created at runtime.
Object is an instance of a class. All the members of the class can be accessed through object.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".
When variables are declared within a class, they are called attributes.


*/
/*
#include<iostream>
using namespace std;

class Employee
{
    private:        // private members cannot be accessed (or viewed) from outside the class.      
        int a,b,c;  // Only the class and friend functions can access these members.

    public:         // public members can be accessed and modified from outside the class
        int d,e;

        void setData(int a1, int b1, int c1);   // function declation inside class
        void getData(){                         // function declaration and definition inside class
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){  // function definition outside class
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee e1;
    e1.d = 21; //---> We can 
    e1.e = 22;
  //e1.a = 11; // --> this will give error as a is private, so it can't be accessed outside the class
    e1.setData(11,2,3); //---> the function of that class can access the private values 
    e1.getData();

    Employee e2;
    e2.setData(2,4,6);
    e2.d = 8;
    
    return 0;
}
*/
/*
Objects can be declared along with class declaration like:
class Employee{
    // Class definition;
} e1, e2, e3;


// Access Specifiers:
In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited       classes.

By default, all members of a class are private if you don't specify an access specifier:

It is possible to access private members of a class using a public method inside the same class. Study Encapsulation to know how to do this.

It is considered good practice to declare your class attributes as private (as often as you can). This will reduce the possibility of yourself (or others) to mess up the code. This is also the main ingredient of the Encapsulation concept.


// Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;         // Private attribute

  public:
    void setSalary(int s) {    // Setter
      salary = s;
    }

    int getSalary() {        // Getter
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

Explanation:
The salary attribute is private, which have restricted access.
The public setSalary() method takes a parameter(s) and assigns it to the salary attribute (salary = s).
The public getSalary() method returns the value of the private salary attribute.

Inside main(), we create an object of the Employee class. Now we can use the setSalary() method to set the value of the private attribute to 50000. Then we call the getSalary() method on the object to return the value.

*/


//  Static Data Members and Methods (Member Function)
/*
#include<iostream>
using namespace std;

class Employee {
    int id;
    string name;
    int salary;
    static int count; // if it wasn't static then all the objects would have separate count value.
                      // but here it is linked to the class and not the objects. So all objects share 
                      // and update the same count variable.

    public:
        void setData();
        void getData();
        static void getCount() {        // static Function - can access only the static members
                                        // does not require object to run, runs from class name itself
            cout<<"The number of Employees so far is: "<<count<<endl; //
        }

};

int Employee :: count ; // dafault value is 0. you can also initialize by some other value: count=10;
// Here count is the static data member of class Employee.

void Employee :: setData() {
    cout<<endl;
    cout<<"Enter the employee ID: ";
    cin>>id;
    cout<<"Enter the employee Name: ";
    cin>>name;
    cout<<"Enter the employee Salary: ";
    cin>>salary;
    count++ ;
}

void Employee :: getData() {
        cout<<"The employee "<<name<<" with ID "<<id<<" has a salary of "<<salary<<"Rs."<<endl;
}

int main(){
    Employee e1, e2, e3;
    e1.setData();
    e1.getData();

    e2.setData();
    e2.getData();

    e3.setData();
    e3.getData();
    Employee :: getCount();     // To use the static function. // only require the class name

    return 0;
}
*/