/*
Let us create student is a base class, from which the three classes viz. arts, science, and commerce have been derived. Now, let us write a C++ program that illustrates the hierarchical inheritance.




Test cases -1

I/P

Jaya

Rama

38

50926

Economics

Marketing

History

Raj

Bawan

20

50900

Molecular

Physics

Chemistry

Kevin

Roy

24

50989

Accounts

Debits

Credits

O/P

First Name = Jaya

Last Name = Rama

Age = 38

Roll Number = 50926

Subject 1 of the art student = Economics

Subject 2 of the art student = Marketing

Subject 3 of the art student = History

First Name = Raj

Last Name = Bawan

Age = 20

Roll Number = 50900

Subject 1 of the science student = Molecular

Subject 2 of the science student = Physics

Subject 3 of the science student = Chemistry

First Name = Kevin

Last Name = Roy

Age = 24

Roll Number = 50989

Subject 1 of the commerce student = Accounts

Subject 2 of the commerce student = Debits

Subject 3 of the commerce student = Credits
*/
#include<iostream>
using namespace std;

class Student {
    string fname, lname;
    string sub1, sub2, sub3;
    int age, roll;

    public:
        string stream;
        void getData();
        void showData();
};

void Student :: getData() {
    cin>>fname;
    cin>>lname;
    cin>>age;
    cin>>roll;
    cin>>sub1;
    cin>>sub2;
    cin>>sub3;
}

void Student :: showData() {
    cout<<"First Name = "<<fname<<endl;
    cout<<"Last Name = "<<lname<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Roll Number = "<<roll<<endl;
    cout<<"Subject 1 of the "<<stream<<" student = "<<sub1<<endl;
    cout<<"Subject 2 of the "<<stream<<" student = "<<sub2<<endl;
    cout<<"Subject 3 of the "<<stream<<" student = "<<sub3<<endl;
}


class Arts : public Student {
    public: 
        Arts() {                // Constructor
            stream = "arts";
        }
};

class Science : public Student {
    public: 
        Science() {
            stream = "science";
        }
};

class Commerce : public Student {
    public: 
        Commerce() {
            stream = "commerce";
        }
};

int main(){
    Arts ob1;
    Science ob2;
    Commerce ob3;

    ob1.getData();
    ob2.getData();
    ob3.getData();

    ob1.showData();
    ob2.showData();
    ob3.showData();

    return 0;
}
