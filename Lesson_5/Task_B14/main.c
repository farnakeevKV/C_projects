#include <stdio.h>

int main(void)
{ 

int inp[1000]={0};

for (int i=0;i<=999;i++)
 {
    scanf("%d", &inp[i]);
    if (inp[i]==0)  i=32000;
 }

 int k=0;
while(inp[k]!=0)
  {
     ++k;
  }

    printf("%d", k); 
 


 return 0; 
}