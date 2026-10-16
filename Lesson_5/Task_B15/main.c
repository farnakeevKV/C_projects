#include <stdio.h>

int main(void)
{ 

int inp[1000]={0};

for (int i=0;i<=999;i++)
 {
    scanf("%d", &inp[i]);
    if (inp[i]==0)  i=32000;
 }

 int digit_number=0;
while(inp[digit_number]!=0)
  {
     ++digit_number;
  }
int even = 0;   
for (int i=0;i<=digit_number;i++)
 {
    if (inp[i]%2 == 0 && inp[i] >0)
     {
       ++even;
      }
  }
printf("%d\n",even);
 return 0; 
}