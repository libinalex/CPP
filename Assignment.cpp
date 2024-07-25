// 1. Write a C++ program to declare a class, declare a pointer to a class, 
//    initialize and display the contents of class member
/*
#include <iostream>
using namespace std;

class Rectangle{

    public:
        int length, breadth;

    public:
        void initialize(int len, int bre){
            length = len;
            breadth = bre;
        }
        int getArea(){
            return 2*length*breadth;
        }
        void display(){
            int area = getArea();
            cout<<"\n*** Rectangle Information ***\n";
            cout<<"Length = "<<length;
            cout<<"\nBreadth = "<<breadth;
            cout<<"\nArea = "<<area;
            cout<<"\n-----------------------------\n";
        }

};

int main()
{
    Rectangle rect, *ptr;
    ptr = &rect;

    ptr->initialize(10,5);
    ptr->display();

    ptr->length = 2;
    ptr->breadth = 3;

    ptr->initialize(ptr->length,ptr->breadth);
    ptr->display();

    return 0;
}
*/

/* 3. GET MONTH ,DAY & YEAR FROM USER IN MAIN() CALL THE FUNCTION PRINTDATE(INT, INT, 
INT), PUT A CHECK IN PRINTDATE() USING IF STATEMENT (MONTH < 1 || MONTH > 12 || DAY 
< 1 || DAY > 31 || YEAR < 0) & IF IT VIOLATES THE RULE DISPLAY ―MUST ENTER A VALID 
DATE”.GET THE MONTH, DAY AND YEAR ARE DISPLAYED NORMALLY, TERMINATION 
SHOULD BE ON ENTERING 0 IN MONTHS
*/
/* 
#include<iostream>
using namespace std;

void printDate(int month, int day, int year){
    if ( month<1 || month >12 || day<1 or day>31 ||year<0 ){
        cout<< "Must enter a valid date!";
    }
    else{
        cout<< "Date: " <<day<<"-"<<month<<"-"<<year;
    }
}
int main()
{
    int month, day, year;
    
    do{
        cout<<"\n Enter Month, Day and Year: ";
        cin>>month>> day >> year;
        printDate( month, day, year);
    } while (month!=0);
    return 0;
}

*/

/*
4. The distributor of a Pharmaceutical Company has 4 Districts to supply the medicine.
He requires a program that can display the sales of all his  Districts. 
Write a Program in C++ Using Two Dimensional Array that shows the Following Output. 
The program should display the Sale, Districts wise, and up to Months

#include<iostream> 
using namespace std;

int main() {
    const int districts=4;
    const int months=3;
    int d,m;
    double sales[districts][months];
    for(d=0; d<districts; d++)
    {
        for(m=0; m<months; m++){
        cout<<"Enter The Sales Of District="<<d+1<<" ";
        cout<<",Month"<<m+1<<"=";
        cin>>sales[d][m];
        }
    }
    cout<<"\n\n\n";
    cout<<"\n\nThe Sale OfDistricts Is \n";
    for(d=0; d<districts; d++)
    {
        cout<<"\n District # "<<+1<<" sales :";
        for(m=0; m<months; m++){
            cout<<sales[d][m]<<"\t";
        }
    }
    return 0;
}
*/

//4. Write a program that displays the values using pointer variable from 
//   an array given below using the Arithmetic Increment operator. 
//   int y[5]={22,33,44,55,66};
/*
#include <iostream>
using namespace std;

int main()
{
   int y[5]={22,33,44,55,66};

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(y + i);

   return 0;
}
*/

/*5. Write a program that displays only the 6th element of an array given below 
using pointers.
int y [10] ={11,22,33, 44,55,66,77,88,99,110}


#include <iostream>
using namespace std;

int main()
{
   
   int y [10] ={11,22,33, 44,55,66,77,88,99,110};

   cout << "6th element is:"<< *(y + 5);

   return 0;
}
*/

// 16 - 05 - 2022

// 1. We want to calculate the total marks of each student of a class in Physics, Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.
/*

#include<iostream>
using namespace std;
class Physics;
class Chemistry;
class Mathematics;
class Marks{
	protected:
		int rollno;
		string name;
		int marks[3];
	public:
		Marks(){
		}
		Marks(int roll, string n){
			rollno = roll;
			name = n;
		}
		void display(){
			cout<<"Roll No: "<<rollno<<" \n ";
			cout<<"Name: "<<name<<" \n ";
		
		}
		friend int getTotalMarks(Marks &, Physics&, Chemistry&,  Mathematics&);
};
 class Physics: public Marks{
 	private:
 		int mark;
 	public:
 		Physics(){
		 }
 		Physics(int mark){
 			this->mark = mark;
		 }
		 friend int getPhysicsMarks(Physics &);
 	
 };
 class Chemistry: public Marks{
 		private:
 		int mark;
 	public:
 		Chemistry(){
		 }
 		Chemistry(int mark){
 			this->mark = mark;
		 }
		 friend int getChemistryMarks(Chemistry &);
 	
 	
 }; 
 class Mathematics: public Marks{
 	private:
 		int mark;
 	public:
 		Mathematics(){
		 }
 		Mathematics(int mark){
 			this->mark = mark;
		 }
		 friend int getMathematicsMarks(Mathematics &);
 };

  int getPhysicsMarks(Physics &p){
 	return p.mark;
 }
 
  int getChemistryMarks(Chemistry &c){
 	return c.mark;
 }

 int getMathematicsMarks(Mathematics &m){
 	return m.mark;
 }
 
 int getTotalMarks(Marks&ma,Physics&p, Chemistry&c,  Mathematics&m){
 	
 	int first = getPhysicsMarks(p);
 	int second = getChemistryMarks(c);
 	int third = getMathematicsMarks(m);
 	ma.marks[0] = first;
 	ma.marks[1] = second;
 	ma.marks[2] = third;
 	int sum = 0.0;
 	for(int i=0; i<3; i++){
 		sum += ma.marks[i];
	 }
 	return sum;
 }

int main(){
int n;
cout<<"Enter the total number of students in the class\n";
cin>>n;
double totalSum = 0.0;
int physics;
int chemistry;
int maths;
string name;
Marks marks[n];
double total [n];
for(int i=0; i<n; i++){
	cout<<"Student "<<(i+1)<<endl;
	cout<<"Enter the student name: "<<endl;
	cin>>name;
	Marks J(i+1,name);
	marks[i] = J;
	cout<<"Enter the student Physics marks: ";
	cin>>physics;
	cout<<"Enter the student Chemistry marks: ";
	cin>>chemistry;
	cout<<"Enter the student Mathematics marks: ";
	cin>>maths;
	Physics p1(physics);
Chemistry c1(chemistry);
Mathematics m1(maths);
	total[i] = getTotalMarks(marks[i],p1,c1,m1);
	
}


for(int i=0; i<n; i++){
	cout<<"Student: "<<(i+1)<<endl;
	marks[i].display();
	cout<<"Total  marks: "<<total[i]<<endl;
}
double average = 0.0;
for(int i=0; i<n; i++){
	totalSum += total[i];
}
cout<<"The average marks of the class is: "<<totalSum /n;
}
*/

// 2. We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches). Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type. Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.
/*
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
private:
	float mileage;
	float price;
	
public:
	Vehicle(){}
	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}

	float getMileage(){
		return this->mileage;
	}

	float getPrice(){
		return this->price;
	}

	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};

class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}
	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost = ownershipCost;
		this->warranty = warranty;
		this->seatingCapacity = seatingCapacity;
		this->fuelType = fuelType;
	}

	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};

class Bike:public Vehicle{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}

	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};


int main()
{
	Car car(10000,36000,29000,10,3,"diesel");
    Bike bike(56000,52000,6,6,"liquid");
	car.display();
	cout<<"\n";
	bike.display();

    return 0;
}
*/
/*
// 3. Create Two Classes Named Mammals And Marineanimals. Create Another Class Named Bluewhale Which Inherits Both The Above Classes. Now, Create A Function In Each Of These Classes Which Prints "I Am Mammal", "I Am A Marine Animal" And "I Belong To Both The Categories: Mammals As Well As Marine Animals" Respectively. Now, 
Create An Object For Each Of The Above Class And Try Calling
1 - Function Of Mammals By The Object Of Mammal
2 - Function Of Marineanimal By The Object Of Marineanimal
3 - Function Of Bluewhale By The Object Of Bluewhale
4 - Function Of Each Of Its Parent By The Object Of Bluewhale
*/
/*
#include <iostream>
using namespace std;

//define class Mammals
class Mammals{
	public:
		void display1() {
			cout << "I am mammal" << endl;
		}
};


//define class MarineAnimals
class MarineAnimals {
	public:
		void display2() {
			cout << "I am a marine animal" << endl;
		}
};


//define class BlueWhale
class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void display3() {
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};


int main()
{
	Mammals m;  //object for class Mammals
	MarineAnimals ma; //object for class MarineAnimals
	BlueWhale bw; //object for class BlueWhale
	
	m.display1(); // function of Mammals by the object of Mammal
	ma.display2(); // function of MarineAnimal by the object of MarineAnimal 
	bw.display3(); // function of BlueWhale by the object of BlueWhale 
	bw.display1(); // function of Mammals by object of BlueWhale 
	bw.display2(); // func of MarineAnimals by object of BlueWhale 
	return 0;
}
*/
// 2. We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches). Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type. Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.
/*
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
private:
	float mileage;
	float price;
	
public:
	Vehicle(){}
	Vehicle(float mileage,float price){
		this -> mileage = mileage;
		this -> price = price;
	}

	float getMileage(){
		return this->mileage;
	}

	float getPrice(){
		return this->price;
	}

	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};

class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}
	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost = ownershipCost;
		this->warranty = warranty;
		this->seatingCapacity = seatingCapacity;
		this->fuelType = fuelType;
	}

	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};

class Bike:public Vehicle{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}

	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};


int main()
{
	Car car(10000,36000,29000,10,3,"diesel");
    Bike bike(56000,52000,6,6,"liquid");
	car.display();
	cout<<"\n";
	bike.display();

    return 0;
}
*/

// 1. Your friend wants to implement a simple calculator program in C++ using classes and objects. Create a class Calculator with the private data members operand1 (float), operand2 (float), operator (character), result (integer). Define 2 public member functions – get_data() which will accept the operand1, operand2 and operator. Another member function show_result() which will perform the calculation by checking the operator using switch case.
/*
#include<iostream>
using namespace std;

class Calculator {
	float operand1, operand2;
	char operators;
	int result;

	public:
		void get_data();
		void show_result();
};

void Calculator :: get_data() {
	cout << "Enter the operands: ";
	cin >> operand1 >> operand2;
	cout << "Enter the operator( + - * / ): ";
	cin >> operators;
}

void Calculator:: show_result() {
	switch (operators)
	{
	case '+':
		cout << "Addition: " << operand1 + operand2;
		break;

	case '-':
		cout << "Subtraction: " << operand1 - operand2;
		break;

	case '*':
		cout << "Multiplication: " << operand1 * operand2;
		break;

	case '/':
		cout << "Division: " << operand1 / operand2;
		break;

	default:
		cout << "Incorrect Operator! ";
	}

}

int main(){
	Calculator calc;
	calc.get_data();
	calc.show_result();
	return 0;
}

*/



// 2. Create a class called Mobile with protected data members: battery (integer), camera (integer). Create another class called Apple (which inherits Mobile) with protected data members: RAM (integer) and ROM (integer). Create another class called iPhone (which inherits Apple) with protected data members: dateofrelease (string) and cost (float). Instantiate the class iPhone and accept all details: camera, battery, RAM, ROM, dateofrelease, cost and print the details. You can define any member functions as per the need of the program. What is this type of inheritance called? Explain in your own words.

#include<iostream>
using namespace std;

class Mobile {
	protected:
		int battery, camera;
};

class Apple : public Mobile {
	protected:
		int RAM, ROM;
};

class IPhone : public Apple {
	protected:
		string DateOfRelease;
		float cost;
	
	public:
		void get_data();
		void show_result();
};

void IPhone :: get_data()
{
	cout << "Enter the Phone Details(Camera, Battery, RAM, ROM, Date of release, Cost): "<<endl;
	cin >> camera >> battery >> RAM >> ROM >> DateOfRelease >> cost;

}

void IPhone :: show_result() {
	cout << "Your IPhone Details are: "<<endl;
	cout << "--------------------------" << endl;
	cout << "Camera: " << camera <<endl;
	cout << "Battery : "<< battery <<endl;
	cout << "Ram : "<< RAM <<endl;
	cout << "ROM : "<< ROM <<endl;
	cout << "Date of Release : "<< DateOfRelease <<endl;
	cout << "Cost : "<< cost <<endl;
	
}

int main(){
	IPhone obj;
	obj.get_data();
	obj.show_result();
	return 0;
}