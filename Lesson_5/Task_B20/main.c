#include <stdio.h>
#include <math.h>
/****   Реализация через конечный автомат ******************************************************** 
немного усложнил сознательно,дабы потренироваться в реализации метода  */
int main(void)
{  
  int input = 0;
  scanf("%d", &input);
  int div = 1;
  int test =0;
  int step=0;
// Описываем исключения для простых чисел test = 0 - признак не простого числа, = 1 простого
  if (input < 10 )
  {
    switch(input)
     {
    case 1:
       test = 1;
       step=0;
       break;
    case 2:
       test = 0;
       step=0;
       break;
    case 3:
       test = 0;
       step=0;
       break;
    default:
       step=1;
     }
  }
  else
  {
    step=1;
  }
// анализ чисел от 2 до введенного числа
  switch (step)
  {
    case 1:
     for (int i = 2; i <= input-1; i++)
      {
        if (( div = input % i) == 0) test = 1  ;
      }
    break;
    default:
    break;
  }

  // printf("test = %d\n",test);
 test !=0 ? printf("NO \n") : printf("YES \n");
 
 return 0; 
}