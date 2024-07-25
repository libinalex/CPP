#include<iostream>
#include<stack>
using namespace std;
/*
void print(list<string> st)
{
    cout << "List: ";
    for (string i : st)
        cout << i << " ";
    
    cout << endl;
}
*/
int main(){
    stack<string> st;
    st.push("Libin");
    st.push("Lavesh");
    st.push("Aruneet");
    st.push("Ravi");
    cout << "The size of stack is: " << st.size() << endl;

    cout << "The top element of the stack: " << st.top() << endl;

    st.pop();
    cout << "The top element of the stack: " << st.top() << endl;
    cout << "The size of stack is: " << st.size() << endl;


    return 0;
}