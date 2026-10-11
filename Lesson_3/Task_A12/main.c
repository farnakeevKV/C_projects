#include <stdio.h>
#include <locale.h>

int main(void)
{       
        setlocale(LC_ALL, "ru_RU.UTF-8");
       
        int mux= 0;
        int a = 0, b=0, c=0, d=0;
      
    //    printf("введите трехзначное \n");
        scanf("%d", &a); 
   
        b =   a/100;
        c =  (a - b*100)/10;
        d =   a    - b*100  - c*10;
        
        mux = b+c+d;
        printf("%d\n", mux);
    
        return 0;
}     