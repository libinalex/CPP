/*
Write a C++ program to find factorial of large numbers using array and recursive function.
Testcase 1 : (Private)

Enter an integer number: 20
Factorial of 20 is: 2432902008176640000
*/
/*
#include<iostream>
using namespace std;

long long int factorial(int num) {

    return (num * factorial(num - 1));
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "The factorial is: " << factorial(num);
    return 0;
}
*/
/*
// C++ program to compute factorial of big numbers
#include <iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int result[], int result_size);

// This function finds factorial of large numbers and prints them
void factorial(int n)
{
    int result[MAX];

    // Initialize result
    result[0] = 1;
    int result_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x = 2; x <= n; x++)
        result_size = multiply(x, result, result_size);

    cout << "Factorial of given number is \n";
    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
}

// This function multiplies x with the number represented by result[].
// result_size is size of result[] or number of digits in the number represented by result[]. 
// This function uses simple school mathematics for multiplication.
// This function may value of result_size and returns the new value of result_size

int multiply(int x, int result[], int result_size)
{
    int carry = 0; // Initialize carry

    // One by one multiply n with individual digits of result[]
    for (int i = 0; i < result_size; i++)
    {
        int prod = result[i] * x + carry;

        // Store last digit of 'prod' in result[]
        result[i] = prod % 10;

        // Put result in carry
        carry = prod / 10;
    }

    // Put carry in result and increase result size
    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
    return result_size;
}

// Driver program
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    factorial(num);
    return 0;
}*/
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}