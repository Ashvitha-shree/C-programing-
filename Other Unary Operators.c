#include <stdio.h>
void main()
{
    int a=5;
    printf("%p\n",&a);// Address of operator(&)
    int b=5;
    int *p=&b;
    printf("%d\n",*p);//Dereference Operator (*) (value at address pointed by p)
    int c=5;
    printf("%1u\n",sizeof(c));// Size of Operator


}
