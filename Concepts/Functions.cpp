/*
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

#include<iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main(){
    myFunction(); // call the function
    return 0;
}


If a user-defined function, such as myFunction() is declared after the main() function, an error will occur.
However, it is possible to separate the declaration and the definition of the function - for code optimization.


#include<iostream>
using namespace std;

void myFunction();   // Function declaration

int main() {
  myFunction();  // call the function
  return 0;
}

void myFunction() {         // Function definition
  cout << "I just got executed!";
}



// A C++ function consist of two parts:
Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function (code to be executed)


// Parameters and Arguments:
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

void myFunction(string fname) {
  cout << fname << " Alex\n";
}

int main() {
  myFunction("Libin");
  myFunction("Benoi");
  myFunction("Lilly");
  return 0;
}

When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Libin, Benoi and Lilly are arguments.

Default Parameter Value:
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");     ---> Sweden
  myFunction("India");      ---> India
  myFunction();             ---> Norway
  myFunction("USA");        ---> USA
  return 0;
}

Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.

// Pass By Reference
In previous examples, we used normal variables when we passed parameters to a function. You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:

#include<iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}


// Pass Arrays as Function Parameters

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).



// Function Overloading
With function overloading, multiple functions can have the same name with different parameters.
Either different type of parameters or different number of parameters.

#include<iostream>
using namespace std;
# define pi 3.14

int volume(int l, int b, int h){ // cuboid
    return l*b*h;
}

int volume( int r ) {  // Sphere
    return (4/3 * pi *r*r*r);
}

int volume(int r, int h) { // Cylinder
    return(pi * r*r* h);
}

void sum (int a, int b) {
    cout<< "Sum of "<<a<<" and "<<b<<" is: "<<a+b<< endl;
}

void sum (string a, string b) {
    cout<< "The strings after concatenation becomes: "<< a+b <<endl;
}

int main(){
    cout<<"The volume of cuboid is: "<<volume(3,4,5)<<endl;
    cout<<"The volume of sphere is: "<<volume(9)<<endl;
    cout<<"The volume of cylinder is: "<<volume(7,12)<<endl;

    sum(4,6);
    sum("Libin ", "Alex");

    return 0;
}


// Recursion
Recursion is the technique of making a function call itself.

Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}

Explanation:
When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. When k becomes 0, the function just returns 0. When running, the program follows these steps:

10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
Since the function does not call itself when k is 0, the program stops there and returns the result.

The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.


// Inline Functions:


#include<iostream>
using namespace std;

inline int sum(int x, int y) {
  return (x + y) ;
}

int main(){
  int a, b;
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  cout<<"The sum of the two numbers are: "<<sum(a,b);
  return 0;
}
*/
/*
// Default Arguments:
#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04) {
  return currentMoney * factor;
}

int main(){
  int money = 100000;
  cout<< "If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year."<< endl;
  // since only one parameter is given in function, so it takes the factor as the default i.e. 1.04
  cout<< "For VIPs: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.10)<<" Rs after 1 year.";
  // In this case we have given the second parameter for factor as 8 so it will not take 1.04.

  return 0;
}

Note that default argiments should be written at last after the compulsory arguments.
*/
/*
// Constant Arguments
arguments that you dont want to change accidently inside a function
significant for argumets passed by reference or by pointers

*/
#include <iostream>
using namespace std;

int strlen(const char *p)
{
}

int main()
{

  return 0;
}