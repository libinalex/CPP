/*

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
string cars[4];

We have now declared a variable that holds an array of four strings. To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

To create an array of three integers, you could write:
int myNum[3] = {10, 20, 30};

To get the size of an array, you can use the sizeof() operator:
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);  ---> 20

The result show 20 instead of 5, when the array contains 5 elements.
It is because the sizeof() operator returns the size of a type in bytes.

To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;     ----->  5


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
 



#include<iostream>
using namespace std;

int main(){
    //int marks[5]={84,96,47,68,72}; // declaration and initialization of array in one line


    int marks[5];
    for (int i = 1; i <= 5; i++)     // using loop to input array elements
    {
        cout<<"Enter the marks scored by "<<i<<" student:";
        cin>>marks[i];
    }

    marks[2] = 38;         // changing value of array element

    for (int i = 0; i < 5; i++)     // using loop to print the array elements
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}
*/

/*
An array is a collection of elements of the same type that are referenced by a common name.
All the elements of an array occupy a set of contiguous memory locations.
    

// Program to calculate the average of numbers using array
#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    float average;
    cout<<"Enter the number of values you want to calculate the average for:";
    cin>>n;
    int values[n];

    for (int i = 1; i <= n; i++)     // using loop to input array elements
    {
        cout<<"Enter the "<<i<<" number:";
        cin>>values[i];
        sum += values[i];
    }

    average = (float) sum/n;
    cout<<"The average of given numbers are: "<<average;
    return 0;
}


// Multi-Dimensional Array
A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:
string letters[2][4];

As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.

Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:

string letters[2][3][4] = 
{
    {
        { "A", "B", "I", "J" },
        { "C", "D", "K", "L" },
        { "O", "P", "Q", "R" }
    },
    {
        { "E", "F", "M", "N" },
        { "G", "H", "M", "N" },
        { "O", "P", "Q", "R" }
    }
};

Loop Through a Multi-Dimensional Array
To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.

The following example outputs all elements in the letters array:

Example
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for(int i = 0; i < 2; i++) {
  for(int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}


// To input and output a 2-D array:

#include<iostream>
using namespace std;

int main()
{
    int letters[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
        cin>>letters[i][j];
        }
    }

    for(int i = 0; i < 4; i++) {
        cout<<endl;
        for(int j = 0; j < 4; j++) {
            cout << letters[i][j] << " ";
  }
}
    return 0;
}
*/
/*

#include<iostream>
#include<algorithm> // for sort()
#include<array> // for array, at(), front(), back(), size(), max_size(), swap(), fill() and empty()
#include<tuple> // for get()

using namespace std;

int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};  // int ar[6] = {1,2,3,4,5,6};

    // Printing array element using at()
    cout <<"The element at 2nd index is: "<< ar.at(2) << endl;

    // Printing array elements using get()
    cout <<"The element at 3rd index is: "<< get<3>(ar) <<endl;
 
    // Printing array elements using operator[]
    cout <<"The element at 4th index is: "<< ar[4] << endl;
    
    // Printing first element of array
    cout <<"First element of array is : "<< ar.front() << endl;
 
    // Printing last element of array
    cout << "Last element of array is : "<< ar.back() << endl;

    // Printing number of array elements
    cout << "The number of array elements is : "<< ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : " << ar.max_size() << endl;

    // Declaring 2nd array
    array<int,0> ar1;
    // Checking size of array if it is empty
    ar1.empty()? "Array empty": "Array not empty";
    cout<<endl;

    array<int,6> ar2 = {7, 8, 9, 10, 11, 12};
    // Swapping ar2 values with ar
    ar.swap(ar2);
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
      cout << ar[i] << " ";
    cout << endl;

    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
      cout << ar2[i] << " ";
    cout << endl;

    // Filling array with 0
    ar.fill(0);

    // Declaring 3rd array
    int ar3[6] = {2,34,12,0,19,24};
    //int n = ar3.size();
    // Sorting elements in ascending order in ar3
    sort(ar3, ar3+6);
    for (int i=0 ; i<6; i++)
      cout<< ar3[i] <<" "; 

    return 0;

}
*/
// Sorting an Array:
// 1. Selection Sort
/*
#include<iostream>
using namespace std;

int main(){
  
  int n;
  cout<<"Enter the number of array elements: ";
  cin>>n;
  int arr[n];

  cout<<"Enter the array elements: "<<endl;
  for (int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  cout<<"Array before Sorting: ";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  for (int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (arr[j] < arr[i]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout<<endl;
  cout<<"Array after Sorting: ";
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}
*/

// 2. Bubble Sort - Repeatedly sort two adjacent elements if they are in wrong order.
#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}


int main(){
    int arr[] = {12, 43, -23, 0, 34, 124, -593};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The array before sorting is: " << endl;
    printArr(arr, size);

    bubbleSort(arr, size);

    cout << "\nThe array after sorting is: " << endl;
    printArr(arr, size);

    return 0;
}