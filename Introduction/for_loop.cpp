#include <iostream>
#include <cstdio>
using namespace std;

/* The for loops go through the values in the inputted range. If it is between 1 and 9, it prints out the word version of the number. 
   if it is above 9, it prints whether it is even or odd. */



int main() {
    int a;
    int b, n;
    
    scanf("%d\n%d", &a, &b);
    
    for(n = a; n <= b; n++)
    {
        if(n == 1)
        {
            cout << "one";
        }
        else if(n == 2)
        {
            cout << "two";
        }
        else if(n == 3)
        {
            cout << "three";
        }
        else if(n == 4)
        {
            cout << "four";
        }
        else if(n == 5)
        {
            cout << "five";
        }
        else if(n == 6)
        {
            cout << "six";
        }
        else if(n == 7)
        {
            cout << "seven";
        }
        else if(n == 8)
        {
            cout << "eight";
        }
        else if(n == 9)
        {
            cout << "nine";
        }
        else if(n % 2 == 0 )
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
        
        cout << endl;
    }
    
    
    
    return 0;
}
