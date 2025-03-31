//nested ternary operator

#include <stdio.h>
void main()
{
    int a=5;
    int result=(a>0)?((a<10)?1:0):-1;
    printf("%d\n",result);
}
