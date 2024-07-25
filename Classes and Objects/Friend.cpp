// Friend Function
/*
#include<iostream>
using namespace std;

class Complex {
    int a, b;
    
    public:
        void setNumber (int n1, int n2) {
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);      // Declaration of Friend fuction.

        void printNumber () {
            cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2) {        // It is not a member function of class Complex
    Complex o3;
    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    cout<<"After Sum:-"<<endl;
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,2);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
*/

// Friend Classes and Member Friend Function:
/*
#include<iostream>
using namespace std;

class Complex;   // Forward Declaration

class Calculator {
    public: 
        int add(int a, int b) {
            return (a+b);
        }
        int sumRealComplex( Complex o1, Complex o2 ); 
        int sumCompComplex( Complex o1, Complex o2 ); 
};

class Complex {
    int a, b;
    friend int Calculator :: sumRealComplex( Complex o1, Complex o2 );          // Member friend function
    friend int Calculator :: sumCompComplex( Complex o1, Complex o2 );          // Member friend function
                                                                        // Now sumRealComplex and sum CompComplex function of class Calculator can access the private data members of Complex class.
    // Aliter:-
    // We can declare the entire Calculator class as a friend class, then all the functions in Calculator class can access the private members of Complex class.
    
    // friend class Calculator;

    public:
        void setnum(int x, int y) {
            a = x;
            b = y;
        }

        void printnum() {
            cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex( Complex o1, Complex o2 ) {
            return (o1.a + o2.a);                  // If not declared friend of Complex class, cannot access a and b
        }

int Calculator :: sumCompComplex( Complex o1, Complex o2 ) {
            return (o1.b + o2.b);
        }


int main(){
    Complex c1, c2;
    c1.setnum(2, 4);
    c2.setnum(6, 3);
    
    c1.printnum();
    c2.printnum();

    Calculator calc;
    cout<<"The sum of real part of the two complex numbers is: "<<calc.sumRealComplex(c1, c2)<<endl;
    cout<<"The sum of complex part of the two complex numbers is: "<<calc.sumCompComplex(c1, c2)<<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;

class C2;           // forward declaration

class C1 {
    int a;
    friend void swap(C1 &, C2 &);

    public:
        void set(int x) {
            a = x;
        }

        void display() {
            cout<<"The value of a is: "<<a<<endl;
        }
};

class C2 {
    int b;
    friend void swap(C1 &, C2 &);

    public:
        void set(int y) {
            b = y;
        }

        void display() {
            cout<<"The value of b is: "<<b<<endl;
        }
};

void swap(C1 &o1, C2 &o2) {
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
    cout<<"After Swapping: "<<endl;
}

int main(){
    C1 o1;
    C2 o2;

    o1.set(4);
    o2.set(7);

    o1.display();
    o2.display();

    swap(o1, o2);

    o1.display();
    o2.display();

    return 0;
}