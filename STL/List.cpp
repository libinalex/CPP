// Doubly linked list
// direct access is not possible, we have to travese to that location to access an element in the linked list.


#include<iostream>
#include<list>

using namespace std;

void print(list<int> l)
{
    cout << "List: ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    list<int> l;
    l.push_back(12);
    l.push_back(-365);
    l.push_front(34);
    l.push_back(04);

    print(l);
    cout << "The size of list is: "<< l.size()<<endl;
    
    // To copy this list into a new list
    list<int> l2(l);
    print(l);

    l.erase(l.begin()); // delete starting element
    print(l);
    cout << "The size of list is: "<< l.size()<<endl;


    return 0;
}