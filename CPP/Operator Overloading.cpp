#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
    public:
    vector<vector<int>> a;
};
Matrix operator+(Matrix m1, Matrix m2){
  Matrix result;
  result.a.resize(m1.a.size(), std::vector<int>(m1.a[0].size())); 
  for(size_t x = 0; x < m1.a.size(); x++){
    for(size_t y = 0; y < m1.a[0].size(); y++){
        result.a[x][y] = m1.a[x][y] + m2.a[x][y];
    }
  }
  return result;
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
