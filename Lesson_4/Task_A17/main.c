#include <stdio.h>

int main(void)
{       
   
        int a=0;
         scanf("%d", &a); 

        if (a<=5 && a>2)
           {
          printf("spring \n");
           }
        if (a<=8 && a>5)
           {
          printf("summer \n");
           }
        if (a<=11 && a>8)
           {
          printf("autumn \n");
           }
         if (a < 3 )
           {
          printf("winter \n");
           }
         if (a == 12)
           {
          printf("winter \n");
           }



         return 0; 
}

