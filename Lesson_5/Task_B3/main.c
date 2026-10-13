#include <stdio.h>

int main(void)
{       
        int summ = 0;  
        int a=0, b=0;
         scanf("%d %d", &a,&b); 
for (int i =a;i<=b;i++)
{
 
 summ = summ + (i*i);    

}
printf("%d \n ",  summ);
         return 0; 
}