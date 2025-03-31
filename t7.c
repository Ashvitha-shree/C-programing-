// maximum of 4 nos. in alternate
#include <stdio.h>
void main()
{

    int a,b,c,d,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=a>b?((a>c)?((a>d)?a:d):c):((b>c)?((b>d)?b:d):((c>d)?c:d));
    printf("%d",max);
}
