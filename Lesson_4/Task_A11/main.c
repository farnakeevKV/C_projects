#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
int a[5]={0};
scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
int max=a[0],min=a[0];
    for(int i=0;i<5;i++)
    {
   if(max <  a[i])   max=a[i] ;
   if( min > a[i])   min=a[i] ;
    }
printf("%d", (min+max));
       return 0;
}