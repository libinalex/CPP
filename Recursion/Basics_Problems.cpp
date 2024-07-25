//1. Print name 5 times
/*
#include<iostream>
using namespace std;

void print(int count, int n)
{
    if (count == n)
        return;

    cout << "Libin Alex" << endl;
    print(count+1, n);
}

int main(){
    int n = 7;
    print(0, n);
    return 0;
}
*/


/*
//2. Print linearly form 1 to n
#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;
    print(i + 1, n);
}

int main()
{
    int n = 7;
    print(1, n);
    return 0;
}
*/

/*
//3. Print reverse from n to 1
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    print(n-1);
}

int main()
{
    int n = 7;
    print(7);
    return 0;
}
*/

/*
// 4. Print lineraly form 1 to n by Backtracking
//  We are not allowed to use: print(i+1, n) as recursive function call
//  i.e., we can print number after calling recursive function print(i-1, n)
#include <iostream>
using namespace std;

void print(int i)
{
    if (i == 0)
        return;

    print(i - 1);
    cout << i << endl;
}

int main()
{
    int n = 7;
    print(n);
    return 0;
}
*/
  
/*  
// 5. Print reverse from n to 1 by Backtracking
//   We are not allowed to use: print(i-1) as recursive function call
//   i.e., we can print number after calling recursive function print(i+1, n)
#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    print(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n = 7;
    print(1, n);
    return 0;
}
*/


/*
//6. Sum of digits of a number
#include<iostream>
using namespace std;

int sumDigits(int n) {
    if(n<=0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The sum of digits of the number is: " << sumDigits(n);
    return 0;
}
*/
/*
// 7. Sum of first n natural numbers
// a. Parameterized Recursion:
#include <iostream>
using namespace std;

void sumFirst(int i, int sum)
{
    if (i <= 0){
        cout << sum;
        return;
    }
    sumFirst(i-1, sum+i);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The sum of first " << n << " natural numbers is: ";
    sumFirst(n, 0);
    return 0;
}


// b. Functional Recursion:
#include <iostream>
using namespace std;

int sumFirst(int i, int n)
{
    if (i > n)
        return 0;
    return i + sumFirst(i+1, n);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The sum of first "<< n << " natural numbers is: " << sumFirst(1, n);
    return 0;
}
*/

/*
// 8. Factorial of a number
#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The Factorial of " << n << " is: " << Factorial(n);
    return 0;
}
*/

/*
// 9. Reverse an Array
#include <iostream>
using namespace std;

void Reverse(int* arr, int i, int j)        // instead of taking j, we can use (n-i-1) also
{
    if (i >= j)         // here we can also put the condition (i>=n/2)
        return;

    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;
    swap(arr[i], arr[j]);

    Reverse(arr, i+1, j-1);
}

int main()
{
    int n;
    cout << "Enter number of elements in Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i <n ; i++)
        cin >> arr[i];

    Reverse(arr, 0, n-1);
    cout << "The Reverse of the Array is: ";
    for(int i:arr)
        cout << i << " ";
    return 0;
}
*/

// 10. Check Palindrome
#include <iostream>
using namespace std;

bool Reverse(string str, int i, int j) // instead of taking j, we can use (n-i-1) also
{
    if (i >= j) // here we can also put the condition (i>=n/2)
        return true;

    if(str[i] == str[j])
        return Reverse(str, i + 1, j - 1);
    else
        return false;

}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    if (Reverse(str, 0, str.length() - 1))
        cout << "YES ! The given string is a Palindrome.";
    else
        cout << "NO ! The given string is NOT a Palindrome.";

    return 0;
}