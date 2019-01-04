#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c,t;
    printf("请输入三个数");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a < c )
    {
        t = a;
        a = c;
        c = t;

    }
    if( b < c )
    {
        t = b;
        b = c;
        c = t;

    }
     if(a < b )
    {
        t = a;
        a = b;
        b = t;
    }
    printf("最大的数是:%d\n",a);
    return 0;

}



