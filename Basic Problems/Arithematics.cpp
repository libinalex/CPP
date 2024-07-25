# include <iostream>
# include <cmath>    // included to use the pow() and sqrt() functions
using namespace std; 

int main()
{
    int a,b;
   
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    
    cout<<"The sum is: "<< a+b << endl;
    cout<<"The difference is: "<< a-b << endl;
    cout<<"The product is: "<< a*b << endl;
    cout<<"The quotient is: "<< (float) a/b << endl;   // int/int will give int(2), but we want float(2.5)
    cout<<"The remainder is: "<< a%b << endl;
    cout<<a<<" raised to the power "<<b<<" is: "<< pow(a,b) << endl;  
    cout<<"The square root of "<< a <<" is: "<< sqrt(a) << endl;

    return 0;
} 