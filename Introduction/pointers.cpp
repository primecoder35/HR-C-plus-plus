#include <stdio.h>

/*You have to complete the function void update(int *a,int *b), which reads two integers as argument, 
  and sets  with the sum of them, and  with the absolute difference of them. */
  
void update(int *a,int *b) {
    // Complete this function    
    int a1 = *a;
    *a = a1 + *b;
    *b = a1 - *b;
    
    if(*b < 0)
    {
        *b = *b * (-1);
    }  
 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
