#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c,t,max;
    printf("请输入三个数");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a < b )
    {
        if(b>c)
        {
            max =b;
        }else max = c;

    }else {
        if(a>c)
            max=a;
        max=c;
    }

    printf("最大的数是:%d\n",max);
    return 0;
}
