#include <stdio.h>

int main(void)
{       
        float b = 0.0;  
        int a=0;
         scanf("%d", &a); 
         b = (float) a;
( (b/100) >= 1 &&  (b/100) < 10) ? printf("YES \n ") : printf("NO \n ") ;
         return 0; 
}