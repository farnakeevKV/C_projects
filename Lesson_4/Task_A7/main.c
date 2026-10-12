#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
         int a = 0, b = 0;
  //      printf("введите три целых числа через пробел \n");
        scanf("%d %d",&a,&b); // считываем целое значение в переменную a
      
         a>=b ? printf("%d %d\n", b,a) : printf("%d %d\n", a,b);
  

        return 0;