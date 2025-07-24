#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, a, b;
    cin >> n >> q;
    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        for(int x = 0; x < a ; x++){
            cin >> b;
            matrix[i].push_back(b);
        }
    }
    for(int i = 0; i < q; i++){
        int xx, yy;
        cin >> xx >> yy;
        cout << matrix[xx][yy] << "\n";
    }
    return 0;
}
