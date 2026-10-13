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
// Заносим это дело в массив
  for (int step =step_number; step>=0; step--)
  {
     digit[(step_number - step)] = input/(int)pow(10,(step));
     input =  input - digit[(step_number - step)]*(int)pow(10,step);
  }

  int   i = 1;
  int max = 0;
  int min = 0;
   for (i=1; i<= step_number; i++)
     {
        ((digit[i]%2)>0) ? ++min : ++max;
     }
printf("%d %d\n",max,min);
 return 0; 
}