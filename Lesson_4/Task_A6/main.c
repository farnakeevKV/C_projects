#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
         int a = 0, b = 0;
         int res = 0;

  //      printf("введите три целых числа через пробел \n");
        scanf("%d %d",&a,&b); // считываем целое значение в переменную a
       res = a - b;
        printf("%d\n", res);
    

        return 0;
}