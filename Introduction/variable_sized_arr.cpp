#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Import arrays, then find the corresponding term in the arrays according to the queries */




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, query, i, n1, k, q1, q2;
    
    scanf("%d %d", &n, &query);
    
    int ** arr = new int *[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &n1);
        arr[i] = new int [n1]; 
        for(k = 0; k < n1; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }
   
    for(i = 0; i < query; i++)
    {
        scanf("%d %d", &q1, &q2);
        cout << arr[q1][q2] << endl;
    }
    
    return 0;
}
