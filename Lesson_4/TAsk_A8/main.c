#include <stdio.h>
#include <locale.h>


int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
     
         int a=0, b=0,c=0;
scanf("%d %d %d",&a,&b,&c);

if (a<b){
a=b;
}
if(a<c){
a=c;
}
printf("%d", a);
       return 0;
}