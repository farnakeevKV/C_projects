#include <stdio.h>

int main(void)
{       
   
        int a=0,b=0;
         scanf("%d %d", &a,&b); 

        if ( a==b)
           {
          printf("Equal \n");
           }
        if (a < b)
           {
          printf("Less \n");
           }
        if (a > b)
           {
          printf("Above \n");
           }
         return 0; 
}