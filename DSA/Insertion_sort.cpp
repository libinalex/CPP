/*
#include<iostream>
using namespace std;

int main(){
    int n, key;
    cout << "Enter the number of array elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before Sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (arr[j]>key && j>=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }


    cout << "Array after Sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of array elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = n-2; i >= 0; i--)
    {
        key = arr[i];
        int j = i + 1;
        while (arr[j] < key && j >=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Array after Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
