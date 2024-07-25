/*
// Structures

To create a structure, use the struct keyword and declare each of its members inside curly braces.
After the declaration, specify the name of the structure variable (myStructure in the example below):

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable

To access members of a structure, use the dot syntax (.):
Assign data to members of a structure and print it:

struct {
  int myNum;
  string myString;
} myStructure;

myStructure.myNum = 1;
myStructure.myString = "Hello World!";

cout << myStructure.myNum << "\n";     ---> 1
cout << myStructure.myString << "\n";  ---> Hello World!


By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.
To create a named structure, put the name of the structure right after the struct keyword:
1. Program to understand structures:
#include<iostream>
using namespace std;

struct employee
    {
        int id;
        string name;
        float salary;
    };

int main(){
    struct employee e1;
    struct employee e2;

    e1.id = 101;
    e2.id = 102;
    e1.name = "Libin Alex";
    e2.name = "Lavesh Mathur";
    e1.salary = 1200000;
    e2.salary = 800000;

    cout<<e1.id<<endl;
    cout<<e1.name<<endl;
    cout<<e1.salary<<endl;

    cout<<e2.id<<endl;
    cout<<e2.name<<endl;
    cout<<e2.salary<<endl;
   
    return 0;
}
*/

/*

There are two ways to access structure members:
By . (member or dot operator)
By -> (structure pointer operator)


//
Typedef struct employee
{
    int id;
    string name;
    float salary;
} emp ;

int main(){
    emp e1;  ---> instead of writing struct employee, we can now write only emp.
    emp e2;

// Compact form:
struct employee
{
    int id;
    string name;
    float salary;
} e1, e2 ;

*/
// 2. Program to add two Complex numbers
/*
#include<iostream>
using namespace std;

int main()
{
  	struct  complex  
  	{
     	float  real;
     	float  cmplex;
  	}  a, b, c;

    cout<<"Enter the real and imaginary part of first complex number:";
  	cin>>a.real>>a.cmplex;
    cout<<"Enter the real and imaginary part of second complex number:";
  	cin>>b.real>>b.cmplex;
      

  	c.real = a.real + b.real;
  	c.cmplex = a.cmplex + b.cmplex;
    cout<< "The sum of given complex numbers is: ";
	cout<< c.real <<" + "<< c.cmplex<<"i";
    return 0;
}



*/
/*
// Union
Union is a user-defined data type which is a collection of different variables of different data types in the same memory location. The union can also be defined as many members, but only one member can contain a value at a particular point in time.
The size of the union is based on the size of the largest member of the union


#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float rupees;
};

int main(){
    union money m1;
    m1.rice = 34;
    cout<<m1.rice<<endl;  // --> will print 34
    m1.car = 'F';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;  // --> will not give the desired output. 'F' is stored in location, so ASCII of F i.e. 70 will be printed.

    return 0;
}
*/
// Enum
/*
#include<iostream>
using namespace std;

int main(){
    enum Meal { breakfast, lunch, dinner};
    cout<< breakfast <<endl;  // --> 0
    cout<< lunch <<endl;      // --> 1     
    cout<< dinner <<endl;     // --> 2
    return 0;
}       
*/
/*
// Array of Structures
//3. Program to store information of 5 students and print it.
#include<iostream>
using namespace std;

struct student{
    int rollno;
    string name;
};

int main(){
    struct student st[5];
    cout<<"Enter the records of 5 students:"<<endl;
    for( int i=0 ; i<5 ; i++) {
        cout<<"Enter Roll no. of "<< i+1 <<" student: ";
        cin >> st[i].rollno;
        cout << "Enter Name of "<< i+1 <<" student: " ;
        cin >> st[i].name;
    }
    cout<<"Student Information List:"<<endl;
    for (int i=0; i<5 ; i++){
        cout<<"Rollno:"<<st[i].rollno<<", Name:"<<st[i].name<<endl;
    }
    return 0;
} 
*/