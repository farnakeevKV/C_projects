#include <stdio.h>
#include <locale.h>

int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
        int a = 0, b = 0, c = 0 ; // три стороны треугольгика
        int d =0;
        
        scanf("%d %d %d", &a,&b,&c);

// проверяем условие признаков треугольника

d = ((a+b)<c)+((c+b)<a)+((a+c)<b);
   
 (d==0 ) ? printf("YES \n") :    printf(" NO \n") ;



  //    printf(" d = %d \n",d);



        return 0;
}