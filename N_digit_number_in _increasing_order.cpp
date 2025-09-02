/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void solve(string &s, vector<string> &res, int n){
    if(n == 0){
        res.push_back(s);
        return;
    }
    char last_char = s[s.size() - 1];
    last_char++;
    for(int i = last_char; i <= '9'; i++){
        s.push_back(i);
        solve(s, res, n - 1);
        s.pop_back();
    }
    
}
void N_Digit_num(int n){
    vector<int> ans;
    if(n == 1){
        ans = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    }
    vector<string> res;
    string s = "";
    for(int i = '1'; i <= '9'; i++){
        s.push_back(i);
        solve(s, res, n - 1);
        s.pop_back();
    }
    for (auto pr : res) {
        ans.push_back(stoi(pr));
    }
    for(auto pr : ans){
        cout << pr << " ";
    }
}
int main()
{
    int n = 9;
    N_Digit_num(n);

    return 0;
}