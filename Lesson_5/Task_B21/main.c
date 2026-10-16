#include <stdio.h>
#include <math.h>

int main(void)
{  
   char c;
//   char C = '';
//спец символ новой строки
 while( (c=getchar())!='.')
 {
  
 if(c>='A' && c<='Z')

 putchar('a' + (c-'A'));
 else
 putchar(c);

 }
 return 0;

}