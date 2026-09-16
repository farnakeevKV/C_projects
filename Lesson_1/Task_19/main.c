#include <stdio.h>
#include <locale.h>





int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
        int a = 0, b = 0, c = 0, ; // три стороны треугольгика
        scanf("%d %d %d", &a,&b,&c);

// проверяем условие признаков треугольника

if (a+b)>=c or (a+c)>=b or (b+c)>=a
{
    printf(" NO \n");
}



     //   res = a + b + c;
     //   res_1 = a * b * c;
    //    printf("%d+%d+%d=%d\n", a, b, c, res);
    //    printf("%d * %d * %d = %d\n", a, b, c, res_1);
        return 0;
}