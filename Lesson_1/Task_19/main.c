#include <stdio.h>
#include <locale.h>





int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
        int a = 0, b = 0, c = 0 ; // три стороны треугольгика
        int a1 =0, b1 = 0, c1 = 0;
        scanf("%d %d %d", &a,&b,&c);

// проверяем условие признаков треугольника
// Разделяем условие 

if   ((a+b)>c) {a1 =0 ;}
        else  { a1 = 1 ;}
 if  ((a+c)>b) {b1 =0 ;}
        else  { b1 = 1 ;}           
if   ((c+b)>a) {c1 =0 ;}
        else  { c1 = 1 ;}

if  ((a1+b1+c1) == 0 ) {printf("YES \n");}
        else  { printf(" NO \n");}

        return 0;
}