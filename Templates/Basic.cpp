/*
#include<iostream>
using namespace std;

template <class T>
class Vector {

    public:
        T *ptr;
        int size;

        Vector(int m) {
            size = m;
            ptr = new T[size];
        }

        T product(Vector &v) {
            T p = 0;
            for (int i = 0; i < size; i++)
            {
                p += this -> ptr[i] * v.ptr[i];
            }

            return p;
        }
};

int main(){
    Vector <int> v1(2);
    v1.ptr[0] = 2;
    v1.ptr[1] = 4;

    Vector<int> v2(2);
    v2.ptr[0] = 3;
    v2.ptr[1] = 1;

    cout<<"The product is "<<v1.product(v2);

    return 0;
}
*/

// Function Template :

#include<iostream>
using namespace std;

template <class T1, class T2>
float average(T1 a, T2 b) {
    float out = (a + b) / 2.0;
    return out;
}

int main(){
    cout << "The average of the two numbers is: " << average(2, 4) << endl;
    cout << "The average of the two numbers is: " << average(2.2, 3.4) << endl;
    cout << "The average of the two numbers is: " << average(2, 4.6) << endl;
    return 0;
}