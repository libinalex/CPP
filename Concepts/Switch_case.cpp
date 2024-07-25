#include<iostream>
using namespace std;

int main(){
  int day = 4;
  switch (day) {
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
  }
    return 0;
}

/*
# include <iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter the age: ";
  cin>>age;

  switch (age)
  {
  case 16:
    cout<<"You are 16 years old";
    break;

  case 18:
    cout<<"You are 18 years old";
    break;

  default:
    cout<<"You are neither 16 nor 18 years old";
  }
  return 0;
}
*/