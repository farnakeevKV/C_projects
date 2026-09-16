#include <stdio.h>
#include <locale.h>





int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
        int a = 0, b = 0, c = 0, res=0, res_1 =0;
   //     printf("введите три целых числа через пробел \n");
        scanf("%d %d %d", &a,&b,&c); // считываем целое значение в переменную a
       // scanf("%d", &b); // считываем целое значение в переменную b

        res = a + b + c;
     //   res_1 = a * b * c;
        printf("%d+%d+%d=%d\n", a, b, c, res);
    //    printf("%d * %d * %d = %d\n", a, b, c, res_1);
        return 0;
}