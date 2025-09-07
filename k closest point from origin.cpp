/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;
    for(int i = 0; i < points.size(); i++){
        int x = points[i][0];
        int y = points[i][1];
        double distance = sqrt(x * x + y * y);
        pq.push({distance, i});
    }
    vector<vector<int>> ans;
    for(int i = 0; i < k; i++){
        int index = pq.top().second;
        ans.push_back(points[index]);
        pq.pop();
    }

    return ans;
}

int main() {
    vector<vector<int>> points = {{3, 3}, {5, -1}, {-2, 4}}; 
    int k = 2;
    vector<vector<int>> res = kClosest(points, k);

    cout << k << " closest points to origin are:" << endl;
    for(auto &point : res){
        cout << "[" << point[0] << ", " << point[1] << "]" << endl;
    }

    return 0;
}
