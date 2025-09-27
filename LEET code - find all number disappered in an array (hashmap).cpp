/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,int> map1;
        vector<int> uni;
        for(int i=0;i<nums.size();i++){
            map1[nums[i]]++;
        }
        for(auto pr: map1){
            uni.push_back(pr.first);
        }
        map<int,int>number;
        for(int i=1;i<=n;i++){
            number[i]++;
        }
        for(int i=0;i<uni.size();i++){
            number[uni[i]]++;
        }
        vector<int> answer;
        for(auto pr: number){
            if(pr.second==1){
                answer.push_back(pr.first);
            }
        }
        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<" ";
        }
}
int main() {
    vector<int> nums={1,1};
    findDisappearedNumbers(nums);

    return 0;
}