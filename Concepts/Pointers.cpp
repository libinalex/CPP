/*
A pointer is a variable that stores the memory address as its value.

#include<iostream>
using namespace std;

int main(){
  int a = 3;
  int* b = &a;
  cout<<"The address of a is "<<&a<<endl;
  cout<<"The address of a is "<<b<<endl; 
  cout<<"The value at address stored in b is "<<*b<<endl;
  
  return 0;
}

A pointer is a variable that represents the location (rather than the value) of a data item.

& --> Address of operator
* --> (Value at) Dereference operator

So now, the address of a can be retrieved by either &a or b.

    int a, b;
    int* p;
    p = &a;
    b = *p;
This above code is equivalent to: b = a
*&x <=> x


Pointer Arithmetics:
new_address = current_address + i*sizeof(data type)
  ptr + i   =      ptr        + i*4{in case of int}

Array and Pointers:
int marks[5]={84,96,47,68,72};
int *ptr;
ptr = marks;   // Note that no need to write &marks to intialize array pointer

cout<<"The value of marks[0] is "<< *ptr ;
cout<<"The value of marks[1] is "<< *(ptr + 1) ;
cout<<"The value of marks[2] is "<< *(ptr + 2) ;
cout<<"The value of marks[3] is "<< *(ptr + 3) ;
cout<<"The value of marks[4] is "<< *(ptr + 4) ;


You can also change the pointer's value. But note that this will also change the value of the original variable:

string food = "Pizza";
string* ptr = &food;

cout << food << "\n";  ---> Pizza
cout << &food << "\n";  ---> 0x6dfed4
cout << *ptr << "\n"; ---> Pizza

*ptr = "Hamburger";   // Change the value of the pointer
cout << *ptr << "\n"; ---> Hamburger
cout << food << "\n";   ---> Hamburger

*/

