/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int ,int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    vector<pair<int,int>> store;
    for(auto pr : freq){
        pair<int,int> a;
        a.first = pr.second;
        a.second = pr.first;
        store.push_back(a);
    }
    sort(store.begin(),store.end());
    int i = 0;
    while(k!=0){
        if(store[i].first!=0){
            store[i].first--;
            k--;
        }
        else if(store[i].first==0){
            i++;
        }
    }
    int ans=0;
    for(int i = 0; i < store.size(); i++){
        if(store[i].first!=0){
            ans++;
        }
    }
    return ans;
    }
int main() {
    vector<int> arr = {5,5,4};
    int k = 1;
    cout<<findLeastNumOfUniqueInts(arr, k);

    return 0;
}