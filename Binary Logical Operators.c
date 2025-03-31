#include <stdio.h>
void main()
{
   int a=-5,b=5,c=10;
   printf("%d\n",(b>0 && c>0));// logical and
   printf("%d\n",(b<0 && c>0));

   printf("%d\n",(a>0 || c>0)); //logical or
   printf("%d\n",(a>0 || c<0));
}
