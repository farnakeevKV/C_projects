#include <stdio.h>
//#include "my_fun.h"

void swap(int *in1, int *in2)
 {
    int temp = *in1;
          *in1 = *in2;
          *in2 = temp;   
    
}
/**************************************************************************************************************************************************************************************** */
int main(void)
{ 

  int digit1 = 0;
  int digit2 = 0;
  static int ostatok = 0;
   scanf("%d %d", &digit1, &digit2);
 

  static int min = 0;  
  static int max = 0; 
 

  if (digit1 > digit2)
   {
       max = digit1; 
       min = digit2;
   }
  else
   {
       max = digit2; 
       min = digit1;
   }
// проверяем остаток от деления
  int k=0;
  ostatok = (max % min);
   while (ostatok > 0)
   {
      ++k;
     // printf("%d\n", k);
     // printf("%d\n", ostatok);
      max = min;
      min = ostatok;
     // printf(" Max= %d Min = %d \n", max,min);
      ostatok = (max % min);
      //printf(" Ostatok= %d  \n", ostatok);
    }

  printf("%d\n", min);
 
 return 0; 
}