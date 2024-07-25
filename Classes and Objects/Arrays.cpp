// Array in class variables, with single object
/*
#include<iostream>
using namespace std;

class Shop {
    int id[10];
    string name[10];
    float price[10];
    int counter;

    public:
        void setcounter() { counter = 0; }
        void setData();
        void displayData();
};

void Shop :: setData() {
    cout<<"Enter the ID of Item "<< counter+1 <<": ";
    cin>>id[counter];
    cout<<"Enter the Name of Item: ";
    cin>>name[counter];
    cout<<"Enter the Price of Item: ";
    cin>>price[counter];
    counter++;
}

void Shop :: displayData() {
    cout<<endl;
    for (int i=0; i<counter; i++) {
        cout<<"The price of "<<name[i]<<" with id "<<id[i]<<" is "<<price[i]<<endl;
    }
}

int main(){
    int n;
    Shop s1;
    cout<<"Enter the numner of Items in shop: ";
    cin>>n;
    s1.setcounter();
    for (int i=0; i<n; i++) {
        s1.setData();
    }
    s1.displayData();
    return 0;
} */




/*
// Array of objects:

#include<iostream>
using namespace std;

class Employee {
    int id;
    int salary;

    public:
        void setData();
        void getData() {
            cout<<"The salary of employee "<<id<<" is "<<salary<<endl;
        }
};

void Employee :: setData() {
    cout<<"Enter the employee ID: ";
    cin>>id;
    cout<<"Enter the employee Salary: ";
    cin>>salary;
}

int main(){
    int n;
    cout<<"Enter the number of Employees: ";
    cin>>n;
    Employee emp[n];
    for (int i=0; i<n; i++) {
        emp[i].setData();
    }
    cout<<endl;
    for (int i=0; i<n; i++) {
        emp[i].getData();
    }
    
    return 0;
}
*/

// Pointers to Objects and Arrow Operator

#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
        void set(int x, int y) {
            a = x;
            b = y;
        }
        void get() {
            cout << "The real part: " << a << endl;
            cout << "The imaginary part: " << b << endl;
            cout << endl;
        }
};

int main(){
    Complex c1;
    c1.set(4, 6);
    c1.get();

    Complex *ptr = &c1;
    (*ptr).set(3, 4);
    (*ptr).get();

    Complex *ptr1 = new Complex;
    ptr1 -> set(1, 2);
    ptr1 -> get();

    // Array of objects:
    Complex *ptr2 = new Complex[3];
    ptr2->set(8, 9);
    ptr2->get();

    return 0;
}