

/*

# include<array>

1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. This function is not the 
            member of array class but overloaded function from class tuple. 
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
4. front() :- This returns the first element of array. 
5. back() :- This returns the last element of array.
6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which 
                array is declared. The size() and max_size() return the same value.
8. swap() :- The swap() swaps all elements of one array with other.
9. empty() :- This function returns true when the array size is zero else returns false. 
10. fill() :- This function is used to fill the entire array with a particular value.
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << "\nThe size of the array is: " << arr.size() << endl;
    cout << "Element at 2nd index is: " << arr.at(2) << endl;
    cout << "Array is Empty or not? " << arr.empty() << endl;
    cout << "First element of array is: " << arr.front() << endl;
    cout << "Last element of array is: " << arr.back() << endl;

    return 0;
}