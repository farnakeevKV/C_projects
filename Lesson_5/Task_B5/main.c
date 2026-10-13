#include <stdio.h>
#include <math.h>
int main(void)
{       
  int input=0;
  scanf("%d", &input); 
  int interval =input/1;
  int step_number = 1;
  int digit[100] = {0};
  
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
for (int i=1; i<=99;i++)
 {
     digit[0]=digit[0]+digit[i];
 }
printf("%d", digit[0]);
         return 0; 
}


