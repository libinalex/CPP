// Recursion is a function calling itself

#include<iostream>
using namespace std;

void fun(int count){
    cout << count;
    count++;
    if(count == 100)
        return;

    fun(count);
}
int main(){
    int count = 0;
    fun(count);
    return 0;
}