/*
Write a C++ Program to Reverse the reverse of a number using the Virtual base Class and implement it with suitable Inheritance.

I/P
Enter the Nuber to show the reverse of a number: 678

O/P
The reverse number is: 876
*/

#include<iostream>
using namespace std;

class Base
{
	public:
		int number;
		void input()
		{
			cout<<"Please Enter the number to Show the reverse of a number.";
			cin>>number;
		}
		
};

class Derived: virtual public Base {       // Used Virtual Base class and inheritance

};


class Reverse:public Derived {       // Used Multi level Inheritance
	public:
		void output()
		{
			Base::input();
			cout<<"The reverse number is: ";
			for(int i=0; i<number; number = number/10) {
				cout<<number%10;
			}
		}
};
int main()
{
	Reverse obj;
	obj.output();

    return 0;
}