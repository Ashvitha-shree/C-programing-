// Maximum of 6 numbers
#include <stdio.h>
void main()
{

    int a,b,c,d,e,f,max;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    max = (a>b && a>c && a>d && a>e && a>f) ? a:((b>c&& b>d && b>e && b>f) ?b : (c>d && c>e && c>f) ? c :(d>e && d>f)? d:(e>f? e:f)) ;

    printf("%d",max);
}
