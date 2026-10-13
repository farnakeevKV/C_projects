#include <stdio.h>
#include <math.h>

int main(void)
{ 
  
 int input=0;
  scanf("%d", &input); 
 
 int interval =input/1;
 int step_number = 1;
 int digit[100] = {0};
// Ищем сколько разрядов в числе  

while (interval>=10)
  {
        interval = interval / 10;
     step_number +=1;
  }

  for (int step =step_number; step>=0; step--)
  {
     digit[(step_number - step)] = input/(int)pow(10,(step));
     input =  input - digit[(step_number - step)]*(int)pow(10,step);
  }

 //  printf("%d\n",step_number);
 
 int i=1;
 int k=0;

   for (i=0; i<=step_number-1;i++)
    {
   //     printf("%d",digit[i]);
     if((digit[i+1] - digit[i]) > 0 || step_number==1) 
      {
              k=1;
      }
        else  
        {
              k=99;
              i=99;
         }
 
    }

(k==1 ) ?  printf("YES") : printf("NO");
 return 0; 
}