//maximum of 5 numbers

#include <stdio.h>
void main()
{

    int a,b,c,d,e,max;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    max = (a>b && a>c && a>d && a>e) ? a:((b>c&& b>d && b>e) ?b : (c>d && c>e) ? c :(d>e? d:e));

    printf("%d",max);
}
