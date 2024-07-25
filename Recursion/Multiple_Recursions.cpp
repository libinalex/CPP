// 1. Find nth Fibonacci number
// Fibonacci Sequence: 0 1 1 2 3 5 8 13 21 34
/*
#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    return Fibonacci(n - 1) + Fibonacci((n - 2));
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << Fibonacci(n);
    return 0;
}
*/


// 2. Print all Subsequences of an array
// Subsequence: A contiguous/non-contiguous sequence which follows the order.
#include<iostream>
using namespace std;

void Subsequence(int arr[], int n){
    
}

int main(){
    int arr = {2, 5, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    Subsequence(arr, n);
    return 0;
}