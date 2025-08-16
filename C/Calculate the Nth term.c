#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    int a1, b1, c1;
    if(n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    for(int i = 3; i < n; i++){
        a1 = b;
        b1 = c;
        c1 = a + b + c;
        a = a1;
        b = b1;
        c = c1;
    }
    return c;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}