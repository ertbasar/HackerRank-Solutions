#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    int i = 0;
    set<int> s;
    while(i < q){
        int y;
        int x;
        cin >> y >> x;
        if(y == 1)
            s.insert(x);
        else if(y == 2)
            s.erase(x);
        else{
            auto a = s.find(x);
            if(a == s.end())
                cout << "No\n"; 
            else
                cout << "Yes\n"; 
        }
         
        
        ++i;
    }
    return 0;
}



