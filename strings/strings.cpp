#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /*In the first line print two space-separated integers, representing the length of a and b (a+b) respectively. 
    In the second line print the string produced by concatenating  and  (). 
    In the third line print two strings separated by a space, a' and b' . a' and b' are the same as a and b, respectively, except that     their first characters are swapped. */
    
   // Complete the program
    string s1, s2;
    int i;
    cin >> s1;
    cin >> s2;
    cout << s1.size() << " " << s2.size() << "\n";
    cout << s1 << s2 << endl;
    cout << s2[0];
    for(i = 1; i < s1.size(); i++)
    {
        cout << s1[i];
    }
    cout << " " << s1[0];
    
    for(i = 1; i < s2.size(); i++)
    {
        cout << s2[i];
    }
    
    return 0;
}
