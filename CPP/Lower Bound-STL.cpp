#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // size of the vector
    int n;
    cin >> n;
    vector<int> v(0);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.shrink_to_fit();
    // queries
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        auto it = std::lower_bound (v.begin(), v.end(), x);
        if(v[it- v.begin()]==x)
            cout << "Yes " << it - v.begin() + 1 << "\n";
        else
            cout << "No " << it - v.begin() + 1 << "\n";
    }
}
