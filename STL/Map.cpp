/*

*/

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    m["Libin"] = 94;
    m["Lavesh"] = 82;
    m["Aruneet"] = 96;
    m["Ravi"] = 86;
    m["Sanjay"] = 68;

    m.insert({"Vineet", 79});


    for(auto i:m){
        cout << i.first << ": "<< i.second<<endl;     // keys will be sorted
    }
    cout << endl;
    return 0;
}