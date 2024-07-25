// Implemented as Binary Search Tree
// So we get only unique values in sorted order

#include<iostream>
#include<set>
using namespace std;

void print(set<int> s) {
    cout << "The set is: ";
    for (int i : s)
        cout << i << " ";

    cout << endl;
}

int main(){
    set<int> s;
    s.insert(3);
    s.insert(8);
    s.insert(4);
    s.insert(8);
    s.insert(5);
    s.insert(9);
    s.insert(8);
    s.insert(5);
    s.insert(4);
    s.insert(2);

    print(s);
    cout << "The size of set is: " << s.size() << endl;

    cout << "To find an element in the set: " << s.count(5) << endl;

    set<int>::iterator it = s.begin();
    it++;

    cout << "Removing 2nd element from set: " << endl;
    s.erase(it);

    print(s);
    return 0;
}