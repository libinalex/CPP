

// Ierative:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    int k;
    cout << "Enter the element you want to search: ";
    cin >> k;


    sort(arr.begin(), arr.end());

    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}

// Recursive:
