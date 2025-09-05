/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int>& nums) {
    vector<int> pre_0, pre_1;
    int one = 0;
    int zero = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            zero++;
        }
        else {
            one++;
        }
        pre_0.push_back(zero);
        pre_1.push_back(one);
    }
    vector<int> diff;
    for(int i = 0; i < pre_1.size(); i++){
        int d = pre_0[i] - pre_1[i];
        diff.push_back(d);
    }
    map<int, int> mpp;
    for(int i = 0; i < diff.size(); i++){
        mpp[diff[i]] = i;
    }
    int ans = 0;
    for(int i = 0; i < diff.size(); i++){
        if(diff[i] == 0){
            int val = mpp[0] + 1;
            ans = max(ans, val);
        }
        else {
            int val = mpp[diff[i]] - i;
            ans = max(ans, val);
            
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {0,1,1,0,1,1,1,0};
    cout << findMaxLength(nums) << endl;  
    return 0;
}
