#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Import the array, then print it backwards with spaces between the numbers.

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,i;
    scanf("%d", &num);
    
    int arr[num];
    
    for(i = 0; i < num; i++)
    {
       scanf("%d", &arr[i]); 
    }
    
    for(i = num-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
     
    return 0;
}
