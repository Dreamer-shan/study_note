#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c,t,max;
    printf("������������");
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

    printf("��������:%d\n",max);
    return 0;
}
