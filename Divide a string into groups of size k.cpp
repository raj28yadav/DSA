/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
vector<string> divideString(string s, int k, char fill) {
    vector<string> result;
    string store = "";
    for(int i = 0; i < s.size(); i++){
        store.push_back(s[i]);
        if(store.size() == k){
            result.push_back(store);
            store = "";
        }
    }
    if(store.size() != 0){
        while(store.size() != k){
            store.push_back(fill);
        }
        result.push_back(store);
    }
    return result;
}
int main()
{
    string s = "abcdefghij";
    int k = 3; 
    char fill = 'x';
    vector<string> ans = divideString(s, k, fill);
    for(auto pr : ans){
        cout << pr << " ";
    }

    return 0;
}