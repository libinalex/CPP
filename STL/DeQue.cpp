// Double ended queue: operations from both ends of the queue

#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> d){
    cout << "Queue: ";
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int> d;

    d.push_back(23);
    d.push_front(34);
    d.push_front(-2);
    d.push_back(65);

    print(d);
    cout << "Element at 1st index: " << d.at(1)<< endl;
    cout << "First element of queue: " << d.front()<< endl;
    cout << "last element of queue: " << d.back()<< endl;
    cout << "Is the queue empty? " << d.empty() << endl;
    cout << "The size of the queue is: " << d.size() << endl;
    // To erase elements from the queue:
    d.erase(d.begin(), d.begin()+1);  // to delete staring element
    print(d);
    return 0;
}