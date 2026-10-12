
#include <stdio.h>
// #include <locale.h>



int main(void)
{       
       // setlocale(LC_ALL, "ru_RU.UTF-8");
        int X1=0, Y1=0, X2=0, Y2=0;
        float K=0.0, B=0.0;
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2); 
            K = (float)(Y2-Y1)/(float)(X2-X1);
            B= (float)Y1-(K*(float)X1);



        printf("%.2f %.2f\n", K,B);
          return 0;
}