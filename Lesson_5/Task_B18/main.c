#include <stdio.h>
/**************************************************************************************************************************************************************************************** */


int main(void)
{

int count = 0;
scanf("%d",&count);
int digit[3] = {1,1,2};


if (count <=2 )
 {
  switch (count)
  { case 1 : 
     printf("%d", digit[0]);
     break;
  case 2 : 
    printf("%d %d", digit[0], digit[1]);
    break;
  }  
 }
else
{
   printf("%d %d %d", digit[0], digit[1], digit[2]);
   int k=0;
  while ( k < count-3)
  {
    for (int i=0; i<=2; i++)
     {
      digit[i] = digit[i+1] ;
     }
   digit[2] = digit[1] + digit[0];
   printf(" %d", digit[2]);
   ++k;
  }
}


printf("\n");

return 0;
}
