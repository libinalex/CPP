/*
// Nesting of member functions:

#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;
    void check_binary();

    public:
        void read();
        void onesComplement();
        void display();
};

void Binary :: read(){
    cout<<"Enter a binary number: ";
    cin>>s;
}

void Binary :: check_binary(){
    for (int i=0; i<s.length() ; i++ ){
        if ( s.at(i)!='0' && s.at(i)!='1') {
            cout<<"Sorry! Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
}

void Binary :: onesComplement () {
    check_binary();                         // nesting of member function
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i)=='1')
            s.at(i) = '0';
        else if (s.at(i)=='0')
            s.at(i) = '1';
    }
    cout<<"After Ones Complement: "<<endl;
    
}

void Binary :: display( ) {
  cout<<"Displaying your Binary Number: ";
  for (int i = 0; i < s.length(); i++)
  { 
    cout<< s.at(i);
  }
  cout<<endl;
}

int main(){
    Binary b;
    b.read();
    // b.check_binary();  // will give error as it is a private method. It is nested in onesComplement function.
    b.display();
    b.onesComplement();
    b.display();
    return 0;
}
*/



// Passing Objects as Function Arguments:

#include<iostream>
using namespace std;

class Complex {
    int a;
    int b;

    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void setsum(Complex ob1, Complex ob2) {     // Objects of Complex class are passed as arguments
            a = ob1.a + ob2.a;
            b = ob1.b + ob2.b;
            cout<<"After sum:-"<<endl;
        }

        void printData() {
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    Complex c1, c2, c3;
    c1.setData(2,4);
    c1.printData();

    c2.setData(3,5);
    c2.printData();
    
    c3.setsum(c1, c2);
    c3.printData();
    return 0;
}