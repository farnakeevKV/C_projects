#include <stdio.h>
int main(void)
{        int a = 0, b = 0, c = 0 , d=0; // три стороны треугольгика
         scanf("%d %d %d", &a,&b,&c);
d = ((a+b)<c)+((c+b)<a)+((a+c)<b);
 (d==0 )  ? printf("YES \n")   :    printf(" NO \n") ;
return 0;}