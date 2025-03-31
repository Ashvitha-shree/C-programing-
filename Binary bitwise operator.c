#include <stdio.h>
void main()
{
   int a=5;//0101 in binary by 8421 method
   int b=3;//0011 in binary
   printf("%d\n",(a&b));//bitwise and
   printf("%d\n",(a|b));//bitwise or
   printf("%d\n",(a^b));//bitwise xor
   printf("%d\n",(a<<1));// left shift
   printf("%d\n",(a>>1));// right shift
}
