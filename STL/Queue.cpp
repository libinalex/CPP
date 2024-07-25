#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("Libin");
    q.push("Lavesh");
    q.push("Aruneet");
    q.push("Ravi");
    cout << "The size of queue is: " << q.size() << endl;

    cout << "The first element of the queue: " << q.front() << endl;
    cout << "The last element of the queue: " << q.back() << endl;
   q.
    q.pop();
    cout << "The first element of the queue: " << q.front() << endl;
    cout << "The size of queue is: " << q.size() << endl;

    return 0;
}