/*
A student list contain student register number and name. Write a program to sort the elements in the list in the increasing order of register number. use selection sort for sorting.

Input format:
N  (number of students)
student register number 1
student name 1
student register 2
student name 2
.
.
student register N
student name N

Output format:
sorted list
register number
name

sample input:
3
12
Ram
9
Sam
15
John

Output:
9
Sam
12
Ram
15
John
*/

#include <iostream>
using namespace std;

struct Student
{
    int reg_no;
    string name;
};

int main()
{

    int n;
    cin >> n;
    struct Student S[n], temp;

    for (int i = 0; i < n; i++)
    {
        cin >> S[i].reg_no;
        cin >> S[i].name;
    }

    for (int i = 0; i < n; i++)     // Bubble Sort
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (S[j].reg_no > S[j + 1].reg_no)
            {
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << S[i].reg_no<<endl;
        cout << S[i].name<<endl;
    }

    return 0;
}