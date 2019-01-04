#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;

    printf("请输入一个整数:");
    scanf("%d",&a);
    b = sqrt(a); //必须先键入a，再开方，放int a，b；语句后面会出错；
    if(a>=1000)
        printf("数据有错，请重新输入");
        else

            printf("%d\n",b);

    return 0;
}



