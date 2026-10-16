#include <stdio.h>
#include <math.h>
/**************************************************************************************************************************************************************************************** */
int main(void)
{ 

  int input = 0;
  scanf("%d", &input);

 // определяем степень числа
  int interval = input;
  int step_number =0;
  while (interval>=10)
  {
     interval = interval / 10;
     ++step_number ;
  }

// вычисляем сумму и произведение



for (int count=11; count <= input; count++)
{  
  int summ = 0;
  int mux  = 1;
  int digit_2=0;
  int number = count;
   
   while (number > 0)
    {
      int i = 1;
      digit_2 = number % 10; // младшая цифра
      number = number /(int)pow(10,i);
     // printf( "digit_2 = %d\n", digit_2);
      ++i;
      summ = summ + digit_2;
      mux = mux*digit_2;
    }
      if (summ == mux) printf( "%d ", count);
 
}
printf( "\n ");
 return 0; 
}