#include <stdio.h>
void main()
{
   int a=5,b=5;
   printf("%d\n",a);//assignment =
   a+=3;
   printf("%d\n",a);//add and assign
   a-=2;
   printf("%d\n",a);//sub and assign
   a*=3;
   printf("%d\n",a);//multiple and assign
   a/=2;
   printf("%d\n",a);//divide and assign
   a%=2;
   printf("%d\n",a);//modulus and assign
   b&=3;
   printf("%d\n",b);//bitwise AND and assign
   b|=3;
   printf("%d\n",b);//bitwise OR and assign
   int c=5;
   c^=3;
   printf("%d\n",c);//bitwise XOR and assign
   int d=5;
   d<<=1;
   printf("%d\n",d);//left shift and assign
   int e=5;
   e>>=1;
   printf("%d\n",e);//right shift and assign

}
