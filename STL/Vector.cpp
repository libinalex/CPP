#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v) {
    cout << "Array: ";
    for(int i: v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v;
    
    cout << "Capacity of vector is: " << v.capacity() << endl;

    v.push_back(23);
    cout << "Capacity of vector is: " << v.capacity() << endl;

    v.push_back(45);
    cout << "Capacity of vector is: " << v.capacity() << endl;

    v.push_back(-73);
    cout << "Capacity of vector is: " << v.capacity() << endl;
    cout << "Size of vector is: " << v.size() << endl;

    cout << "Element at 2nd index: " << v.at(2) << endl;
    cout << "First element of array is: " << v.front() << endl;
    cout << "Last element of array is: " << v.back() << endl;

    print(v);

    cout << "Poping an element from array: "<<endl;
    v.pop_back();
    print(v);

    cout << "Clearing the array:" << endl;
    v.clear();
    print(v);
    cout << "Capacity of vector after clear is: " << v.capacity() << endl;
    cout << "Size of vector after clear is: " << v.size() << endl;

    cout << endl;
    vector<int> arr(5, 1); // create vector of size 5 and initialize it with 1
    print(arr);

    // To make a new vector with copied elements from another vector:
    vector<int> arr2(arr);
    print(arr2);
    return 0;
}