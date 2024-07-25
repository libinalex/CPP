//Write a program to input name, address and telephone number of ‘n’ persons (n<=20). Sort according to the name as primary key adn address as the secondary key. Print the sorted telephone directory.
/*
# include <iostream>
using namespace std;


// write a C++ program to find the area of a rectangle by converting the member of a class square which is a friend class of rectangle.

class Square;

class Rectangle {

int width, height;

public:

int area ()

{return (width * height);}

void convert (Square a);

};

class Square {

friend class Rectangle;

private:

int side;

public:

Square (int a) : side(a) {}

};

void Rectangle::convert (Square a) {

width = a.side;

height = a.side;

}

int main () {

int n;

Rectangle rect;

cout<<" Enter the value of the side : " ;

cin>> n ;

Square sqr (n);

rect.convert(sqr);

cout<<rect.area();

return 0;

}

// write a program in C++ to implement classes to compare the volumes of two boxes with "this" pointer


#include <iostream>
using namespace std;     

class Box 

{

 int length, breadth, height;

public:

Box(int l, int b, int h)

{

length = l;

breadth = b;

height = h;

}

int Volume()

{

return length * breadth * height;

}

int compare(Box box)

{

return this->Volume() >box.Volume();

}

};

void main(void)

{

cout<<" Enter the length, breadth, height of box1 " ;

cin>> l1>>b1>>h1;

Box Box1(l1,b1, h1);

cout<<" Enter the length, breadth, height of box2" ;

cin>> l2>>b2>>h2;

Box Box2(l2,b2,h2);

if(Box1.compare(Box2))

{

cout<< "Box2 is smaller than Box1" <<endl;

}

else

{

cout<< "Box2 is equal to or larger than Box1" <<endl;

}
return 0;

}
*/
/*
S.No
Problem

1
Develop a C++ program to find the greatest among two numbers using an inline function

2
Write a C++ program to perform different arithmetic operations such as addition, subtraction, division, modulus, and multiplication using an inline function

3
Implement a function reverse to print the elements in the reverse order of the given elements in the array by call by value

4
Perform basic string manipulation operations like concatenation, reverse, and palindrome checking using a C++ program. Use call by reference mechanism

5
Write a C++ program to demonstrate the static and nonstatic variable usage defining them within a function to count the number of odd numbers in an array

6
Write a C++ program to demonstrate the global and non-global variable usage for searching an item in an array

7
Write a C++ program to demonstrate the use of local variables by defining a function to calculate the sum of factors of a number

8
Develop a C++ program to find the greatest of two numbers using this pointer whichreturns the member variable

9
Write a C++ program to create three objects for a class named pntr_obj with data members such asroll_no& name. Create a member function set_data() for setting the data values and print() member function to print which object has invoked it using
 “this‟ pointer

10
Write a program that has an integer array having 20 elements. The program should have a function that can receive the array and then return the sum of all the elements of the array. Use pointers to demonstrate the iteration through the array.
*/