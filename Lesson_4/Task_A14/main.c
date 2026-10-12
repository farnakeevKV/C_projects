#include <stdio.h>
#include <locale.h>

int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
        int a = 0, b=0, c=0, d=0;
   //    printf("введите трехзначное \n");
        scanf("%d", &a); 
        b = a/100;
        c = (a-b*100)/10;
        d = a-(b*100+c*10);
        
        int m[3]={0} , max=m[0],min=m[0];
        m[0]=b;
        m[1]=c;
        m[2]=d;
for(int i=0;i<3;i++)
    {
      if(max <  m[i])   max=m[i] ;
      if(min > m[i])   min=m[i] ;
    }

        printf("%d\n", max);
          return 0;
}