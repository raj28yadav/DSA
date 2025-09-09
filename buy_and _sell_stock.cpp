/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices){
    vector<int> ans;
    priority_queue<int> maxHeap;
    for(int i = prices.size() - 1; i >= 0; i--){
        if(maxHeap.empty()){
            ans.push_back(0);
        }
        else {
            if(maxHeap.top() < prices[i]){
                ans.push_back(0);
            }
            else {
                ans.push_back(maxHeap.top() - prices[i]);
            }
        }
        maxHeap.push(prices[i]);
    }
    int answer = *max_element(ans.begin(), ans.end());
    return answer;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);

    return 0;
}