/*
#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;
    public:
        void read();
        void check_binary();

};

void Binary :: read(){
    cout<<"Enter a binary number: ";
    cin>>s;
}

void Binary :: check_binary(){
    for (int i=0; i<s.length() ; i++ ){
        if ( s.at(i)!='0' && s.at(i)!='1') {
            cout<<"Sorry! Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
}

int main(){
    Binary b;
    b.read();
    b.check_binary();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int letters[3][3], sub[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        cin>>letters[i][j];
        }
    }
    int num=41;
    int atten[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            atten[i][j] = num;
            num++;
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<letters[i][j]<<" ";
        }
    }
    cout<<endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sub[i][j] = atten[i][j] - letters[i][j] ;
            cout<<atten[i][j]<<" ";
            cout<<sub[i][j]<<" ";
        }
    } 
    cout<<endl;

  
    return 0;
}
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     char str[n];
//     fgets(str, sizeof str, stdin);
//     while (str[0] != '#')
//     {
//         fgets(str, sizeof str, stdin);
//     }

//     n = sizeof(str) / sizeof(str[0]);
//     cout << "no of elements" << n;
//     return 0;
// }


/*A teacher wants to maintain the attendance for the classroom. After storing the attendance, he wishes to print the details of the top 3 attendance percentage holders. Create a class with the private data members: name (string), roll_no (integer), percent (float). Create a constructor which will initialize name with NULL, roll_no with 0 and percent with 0.0. Public datamembers: A function get_details() – which will accept all the details from the user, a function show_details() – which will display all the details. Define another function called get_attendance() which will return the attendance of the calling object. Using the get_attendance() function, get the attendance and sort the records in descending order. Show the details of the top 3 attendance percentage holders by invoking the show_details() function. Define a destructor which prints “Objects destroyed successfully”*/
/*
#include <iostream>
using namespace std;

class Attendence {
    string name;
    int roll_no;
    float percent;

public:
    Attendence() {
        name = "NULL";
        roll_no = 0;
        percent = 0.0;
    }
    void get_details();  
    void show_details();
    friend void get_attendance(Attendence at[], Attendence temp, int n);

    ~Attendence(){
        cout << "objects detroyed successfully" << endl;
    }
};

void Attendence :: get_details() {
    cin >> name >> roll_no >> percent ;
}

void Attendence :: show_details() {
        cout << "Name: " << name << "   RollNo: " << roll_no << "   Attendence Percent: " << percent<<endl;
    }

void get_attendance(Attendence at[], Attendence temp, int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if (at[j].percent > at[j+1].percent) {
                temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the total number of students: ";
    cin >> n;
    Attendence at[n];
    Attendence temp;

    cout << "Enter the Student Details(Name, Roll-no, Attendance percent)" << endl;
    for (int i = 0; i < n; i++) 
        at[i].get_details();
    

    get_attendance(at, temp,n);

    cout<<"\nDetails of the top 3 attendance percentage holders: "<<endl;
    for (int i = n-1; i > n-4; i--) {
        at[i].show_details();
    }


}
*/
/*
// sorting 3 numbers:
#include<iostream>
using namespace std;

int main(){
    int arr[] = {12, 43, 21};
    int brr[3];
    if(arr[0]<arr[1] && arr[0]<arr[2]){
        if(arr[1]<arr[2])
            brr[] = {arr[0], arr[1], arr[2]};
        else
            brr[] = {arr[0], arr[2], arr[1]};
    }
    else if(arr[1]<arr[0] && arr[1]<arr[2]){
        if(arr[0]<arr[2])
            brr[] = {arr[1], arr[0], arr[2]};
        else
            brr[] = {arr[1], arr[2], arr[0]};
    }
    else{
        if(arr[0]<arr[1])
            brr[] = {arr[2], arr[0], arr[1]};
        else
            brr[] = {arr[2], arr[1], arr[0]};
    }

    for(int i: brr){
        cout << i << " ";
    }
    
    return 0;
}*/
/*
#include <iostream>
using namespace std;

void sortThreeNumbers(int &a, int &b, int &c)
{
    
}

int main()
{
    int arr[] = {52, 34, 21};
    cout << "Before sorting: " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    if (arr[0] > arr[1])
    {
        swap(arr[0], arr[1]);
    }
    if (arr[1] > arr[2])
    {
        swap(arr[1], arr[2]);
    }
    if (arr[0] > arr[1])
    {
        swap(arr[0], arr[1]);
    }
    cout << "After sorting: " << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}
*/
