#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
int a[5]={0};
scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5]);

    for(int i=1;i<6;i++)
    {
    if (a[1]>a[i])
     {
        a[1]=a[i];
     }
    
    }
printf("%d", a[1]);
       return 0;
}