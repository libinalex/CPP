/*
// 1.	Write a program to find the difference between the maximum and minimum numbers among the set of numbers entered by the user.
# include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cout<<"Enter the number of elements in the list: ";
    cin>>n;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int max = 0, min = 10000;

    for(int i=0; i<n; i++) {
        if ( arr[i] > max ) {
            max = arr[i];
        }

        if (arr[i]<min) {
            min = arr[i];
        }
    }

    cout<<"Max: "<<max<<" and min: "<<min<<endl;

    int diff = max - min;
    cout<<"The difference between the maximum and minimum numbers among the set of numbers entered are: "<< diff;

    return 0;
}
*/

/*
2. Write a  program, which outputs all local maximums of a given data of elements.
A number xi is a local maximum if it is more than both xi-1 and xi+1.
If  the elements are 25, 19, 22, 23, 21, 12, 10, 17, 11, 13, 10 then 23, 17 and 13 are local maximums.

# include <iostream>
using namespace std;

int main()
{
    int n, arr[n], lmax[n];
    cout<<"Enter the number of elements in the list: ";
    cin>>n;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int i=0, j = 0;
    while (i<n-1) {
        if ( arr[i] > arr[i-1] && arr[i] > arr[i+1] ) {
            lmax[j] = arr[i];
            j++;
        }
        i++ ;
    }

    cout<<"The local maximums among the given data of elements are: "<< endl;

    for(int i=0; i<j; i++) {
        cout<<lmax[i]<<" ";
    }

    return 0;
}

*/

/*
3. Let A[1…n] be an array of integers and let k be a number. Write a program to check if the sum of any two numbers in A is equal to k.


# include <iostream>
using namespace std;

int main()
{
    int n, k, arr[n], flag = 0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the number k: ";
    cin>>k;

    for(int i=0; i<n; i++ ) {
        for (int j=i+1; j<n; j++) {
            if ( arr[i]+arr[j] == k) {
                cout << "Yes! The sum of two numbers " << arr[i] << " and " << arr[j] << " from the array is equal to " << k << endl;
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        cout << "No! There are no two numbers in given array whose sum is equal to " << k << endl;
    }

    return 0;
}
*/

/*
4. Subwords of a word 'good' are g, go, goo, good o,oo,ood, od, d. Common subwords of the words 'rear' & 'yearly' are ea,ear.
Given a sequence of words w1, w2, w3,...,wn, write a program to identify the Longest Common Subword (LCS) of all the words in the sequence.
Consider the words : about, above, bound, board, border. Common subwords are : 'b', 'bo'. LCS is 'bo'.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    string arr[n];
    cout << "Enter the sequence of words: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << arr[2][3];

    return 0;
}

*/

/*
5.The gap between consecutive prime numbers 2 and 3 is only 1, while the gap between consecutive prime numbers 7 and 11 is 4. Write a program to determine for all integers in the given range, the largest gap between a pair of consecutive prime numbers.


#include <iostream>
using namespace std;

int main()
{
    int n, n1, n2, prime[n], flag, count = 0;
    cout << "Enter the first and last numbers of the range: ";
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (i == 1 || i == 0)
            continue;

        flag = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if ( i%j == 0 ) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            prime[count] = i;
            count++;

        }
    }

    int max = 0, a, b;

    for (int i = 1; i < count; i++) {
        if ((prime[i] - prime[i-1]) > max) {
            max = prime[i] - prime[i - 1];
            a = prime[i];
            b = prime[i - 1];
        }
    }

    cout << "The largest gap between a pair of consecutive prime numbers in the given range is " << max<<" between the prime numbers "<<a<<" and "<<b;

    return 0;
}
*/
/*
6.	Given a sequence of n numbers, we reduce sequence as follows.
ˆ We replace the first number with the sum of the first number and the n-th number.
ˆ We replace the second number with the sum of the second number and the (n-1)-th number.
ˆ We replace the third number with the sum of the third number and the (n-2)-th number.
ˆ We continue the above process, till the size of the sequence is reduced to n/2 if n is even and the size is reduced to (n+1)/2 when n is odd.
The sequence : 1,2,4,6,7 is reduced to 8,8,4. Similary, we get a sequence: 43,28 by reducing the sequence 1,25,3,42.

Weight of a sequence of numbers is the number got obtained by reducing the sequence iterativley till we get a sequence of size 1.
For example, sequence 1,2,4,6,7 reduces to 8,8,4 which reduces to 12,8 and then reduces to 20. Weight of the sequence is 20.
Given a sequence of numbers, write a  program to compute the weight of the sequence.



#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cout << "Enter the number of elements in array: ";
    cin >> n;
    cout << "Enter the elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n%2 == 0){
        for (int i = 0; i < n/2; i++)
        {
            arr[i] = arr[i] + arr[n - i - 1];
        }
    }

    else{
        for (int i = 0; i < n / 2; i++)
        {
            arr[i] = arr[i] + arr[n - i - 1];
        }
    }

    for (int i = 0; i<n/2 ; i++)
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}
*/
