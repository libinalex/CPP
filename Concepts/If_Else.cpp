# include <iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter the age: ";
  cin>>age;

  if (age <0 || age>120){
    cout<<"Invalid age entered!";
  }

  else if (age>=18) {
    cout<<"Congratulations, You can vote!";
  }

  else {
    cout<<"Sorry, You cannot vote!";
  }
  return 0;
}

/*
Short Hand If...Else (Ternary Operator):  
Syntax:  variable = (condition) ? expressionTrue : expressionFalse;


Instead of writing:
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}


You can simply write:

int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
*/