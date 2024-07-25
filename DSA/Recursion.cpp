/*
Write a program to check whether a given number is palindrome or not recursively.
input format: N
output format: Palindrome or Not Palindrome
sample input :  12321
output: Palindrome


#include <iostream>
using namespace std;

int reverse(int num, int rev)
{
    if (num == 0) {
        return rev;
    }

    rev = rev * 10 + num % 10;
    reverse(num / 10, rev);
    num = num / 10;

    return reverse(num, rev);
}

int main()
{
    int num, rev;
    cout << "Enter the number: ";
    cin >> num;
    rev = reverse(num, 0);

    if (num == rev) {
        cout << "Palindrome";
    }

    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
*/

/*
Implement selection sort recursively.

input format:
N
n1
n2
....
nn

output format:
sorted list

input format:
4
12
6
8
3

output:
3
6
8
12
*/

#include <iostream>
using namespace std;

// Utility function to swap values at two indices in an array
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to perform selection sort on `arr[]`
void selectionSort(int arr[], int n)
{
    // run `n-1` times
    for (int i = 0; i < n - 1; i++)
    {
        // find the minimum element in the unsorted subarray `[i…n-1]`
        // and swap it with `arr[i]`
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            // if `arr[j]` is less, then it is the new minimum
            if (arr[j] < arr[min])
            {
                min = j; // update the index of minimum element
            }
        }

        // swap the minimum element in subarray `arr[i…n-1]` with `arr[i]`
        swap(arr, min, i);
    }
}

// Function to print `n` elements of array `arr`
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
   
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

/*
Given list of N interger, write a program to find maximum element in the list recursively
Input format:
N
n1
n2
..
nn

output format:
max element

sample input:
5
12
6
21
65
8

Output format:
65


#include <iostream>
using namespace std;

int findMaxRec(int arr[], int n)
{

    if (n == 1)
        return arr[0];
    return max(arr[n - 1], findMaxRec(arr, n - 1));
}

int main()
{
    int n, arr[n];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = findMaxRec(arr, n);
    cout << max;
    return 0;
}
*/

/*
Given N, write a program to find the sum of digits of N recursively.

input format:   N

out format :   sum of digits

sample input:

123

output

6


#include <iostream>
using namespace std;

int sum(int num)
{
    int rem;
    if (num < 1)
    {
        return 0;
    }

    else
    {
        rem = num % 10;
        return rem + sum(num / 10);
    }
}

int main()
{
    int num;
    cin >> num;
    int sum1 = sum(num);
    cout << sum1;
    return 0;
}
*/