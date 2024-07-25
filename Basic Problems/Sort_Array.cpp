/*
1. Ascending Order:

#include <iostream>
#include <algorithm>
using namespace std;

void display(int a[]) {
   for(int i = 0; i < 5; ++i)
   cout << a[i] << " ";
}
int main() {
   int a[]= {23, 17, 34, -23, 234};
   cout << "\n The array before sorting is : ";
   display(a);

   sort(a, a+5);  // sort(start address, end address)

   cout << "\n\n The array after sorting is : ";
   display(a);
   return 0;
}
*/

// 2. Descending Order:

#include <bits/stdc++.h>  // #include <iostream>          #include <algorithm>
using namespace std;
  
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    sort(arr, arr + n, greater<int>());   // sorting in descending order using greater<>().
  
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
}