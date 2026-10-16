#include <stdio.h>
#include <math.h>
/**************************************************************************************************************************************************************************************** */
int main(void)
{ 

  int input = 0;
  int digit[100] = {0};
  scanf("%d", &input);
 
  int interval = input;
  int step_number =0;

  while (interval>=10)
  {
     interval = interval / 10;
     ++step_number ;
  }
  for (int step =step_number; step>=0; step--)
  {
     digit[(step_number - step)] = input/(int)pow(10,(step));
     input =  input - digit[(step_number - step)]*(int)pow(10,step);
  }
int summ =0;
for (int i =0; i<=step_number;i++)
{
   summ = summ + digit[i];

}
(summ ==10) ? printf("YES") : printf("NO");

 
 return 0; 
}