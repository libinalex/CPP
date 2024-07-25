/*

1. string str = "Hello";
2. char str[] = "C++";      
3. char str[4] = "C++";   
4. char str[] = {'C','+','+','\0'};
5. char str[4] = {'C','+','+','\0'};

To use strings, you must include an additional header file in the source code, the <string> library:

#include <string>
string str = "Hello";

To get the length of a string, use the length() function:  str.length() or str.size()

You can access the characters in a string by referring to its index number inside square brackets [].
string myString = "Hello";
cout << myString[1];      ----> e

To change the value of a specific character in a string, refer to the index number, and use single quotes:
string myString = "Hello";
myString[0] = 'J';
cout << myString;           -----> Jello



// C++ String Functions

Function	                                        Description
int compare(const string& str)      It is used to compare two string objects.
int length()	                    It is used to find the length of the string.
void swap(string& str)            	It is used to swap the values of two string objects.
string substr(int pos,int n)       	It creates a new string object of n characters.
int size()                      	It returns the length of the string in terms of bytes.
void resize(int n)              	It is used to resize the length of the string up to n characters.
string& replace(int pos,int len,string& str)	It replaces portion of the string that 
                                                begins at character position pos and spans len characters.
string& append(const string& str)	It adds new characters at the end of another string object.
char& at(int pos)	                It is used to access an individual character at specified position pos.
int find(string& str,int pos,int n)	It is used to find the string specified in the parameter.
int find_first_of(string& str,int pos,int n)	It is used to find the first occurrence of 
                                                the specified sequence.
int find_first_not_of(string& str,int pos,int n )	It is used to search the string for the first 
                                                    character that does not match with any of the characters specified in the string.
int find_last_of(string& str,int pos,int n)	    It is used to search the string for the last character 
                                                of specified sequence.
int find_last_not_of(string& str,int pos)	    It searches for the last character that does not match 
                                                with the specified sequence.
string& insert()    	It inserts a new character before the character indicated by the position pos.
int max_size()      	It finds the maximum length of the string.
void push_back(char ch)	It adds a new character ch at the end of the string.
void pop_back()        	It removes a last character of the string.
string& assign()	    It assigns new value to the string.
int copy(string& str)	It copies the contents of string into another.
char& back()	        It returns the reference of last character.
Iterator begin()    	It returns the reference of first character.
int capacity()      	It returns the allocated space for the string.
const_iterator cbegin()	It points to the first element of the string.
const_iterator cend()	It points to the last element of the string.
void clear()	        It removes all the elements from the string.
const_reverse_iterator crbegin()	It points to the last character of the string.
const_char* data()	    It copies the characters of string into an array.
bool empty()	        It checks whether the string is empty or not.
string& erase()        	It removes the characters as specified.
char& front()	        It returns a reference of the first character.
string&  operator+=()	It appends a new character at the end of the string.
string& operator=() 	It assigns a new value to the string.
char operator[](pos)	It retrieves a character at specified position pos.
int rfind()         	It searches for the last occurrence of the string.
iterator end()         	It references the last character of the string.
reverse_iterator rend()	It points to the first character of the string.
void shrink_to_fit()	It reduces the capacity and makes it equal to the size of the string.
char* c_str()	        It returns pointer to an array that contains null terminated sequence of characters.
const_reverse_iterator crend()  	It references the first character of the string.
reverse_iterator rbegin()	It reference the last character of the string.
void reserve(inr len)	    It requests a change in capacity.
allocator_type get_allocator();	It returns the allocated object associated with the string.


// User input strings: 
cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words)

So, When working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;



// Example 1: C++ String to read a word
C++ program to display a string entered by user.

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";                 ----> Enter a string: C++
    cin >> str;
    cout << "You entered: " << str << endl;     ----> You entered: C++

    cout << "\nEnter another string: ";         ----> Enter another string: Programming is fun.
    cin >> str;
    cout << "You entered: "<<str<<endl;         ----> You entered: Programming

    return 0;
}

Notice that, in the second example only "Programming" is displayed instead of "Programming is fun".
This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.


// Example 2: C++ String to read a line of text
C++ program to read and display an entire line entered by user.

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";                 ----> Enter a string: Programming is fun.
    cin.get(str, 100);

    cout << "You entered: " << str << endl;     ----> You entered: Programming is fun.
    return 0;
}

To read the text containing blank space, cin.get function can be used. This function takes two arguments.
First argument is the name of the string (address of first element of string) and second argument is the maximum size of the array.
In the above program, str is the name of the string and 100 is the maximum size of the array.



// String Object
In C++, you can also create a string object for holding strings.
Unlike using char arrays, string objects has no fixed length, and can be extended as per your requirement.


// Example 3:
string fullName;
cout << "Type your full name: ";            ---> Type your full name: John Doe
cin >> fullName;
cout << "Your name is: " << fullName;       ---> Your name is: John



// Example 4: C++ string using string data type
#include <iostream>
using namespace std;

int main()
{
    string str;     // Declaring a string object
    cout << "Enter a string: ";                     ----> Enter a string: Programming is fun.
    getline(cin, str);

    cout << "You entered: " << str << endl;         ----> You entered: Programming is fun.
    return 0;
}

In this program, a string str is declared. Then the string is asked from the user.
Instead of using cin>> or cin.get() function, you can get the entered line of text using getline().
getline() function takes the input stream as the first parameter which is cin and str as the location of the line to be stored.






*/

#include<iostream>
using namespace std;

int main(){
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName<<endl;
    cout << "The size of this string is: " << fullName.length()<<endl;
    cout << "the 5th letter is: " << fullName[4]<<endl;

    return 0;
}