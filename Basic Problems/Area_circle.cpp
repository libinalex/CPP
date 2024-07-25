#include <iostream>
using namespace std;

int main() {
  double radius;
  double area;

  // Step 1: Set value for radius
  cout<<"Enter the radius of circle: ";
  cin>>radius;

  // Step 2: Compute area
  area = radius * radius * 3.14159;

  // Step 3: Display the area
  cout << "The area of circle of given radius is: ";
  cout << area << endl;
}
