#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
        int a = 0, b = 0, c = 0;
        float res = 0.0;

  //      printf("введите три целых числа через пробел \n");
        scanf("%d %d %d", &a,&b,&c); // считываем целое значение в переменную a
       
       
       
        res = ((a + b + c)/3.0);
        printf("%.2f\n", res);
    

        return 0;
}