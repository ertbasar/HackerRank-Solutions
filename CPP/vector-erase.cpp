#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    vector<int> v;
    cin >> a;
    for(int i = 0; i < a ; i++){
        int b;
        cin >> b;
        v.push_back(b);
    }
    int s;
    int x, y;
    cin >> s;
    cin >> x >> y;
    v.erase(v.begin()+s-1);
    v.erase(v.begin()+x-1, v.begin()+y-1);
    cout << v.size() << endl;
    for(size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
