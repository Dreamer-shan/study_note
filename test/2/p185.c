#include <stdio.h>

int main()
{
    int fac(int n);
    int n,y;
    printf("输入要求阶乘的数:");
    scanf("%d",&n);
    y=fac(n);
    if(n>0)
    printf("%d的阶乘是:%d",n,y);
    return 0;
}
int fac(int n)
    {
        int f;   //定义一个变量来接收函数fac的值
        if(n<0)
            printf("data error");
        else if(n==0||n==1)
            f=1;
        else
            f=n*fac(n-1);
        return(f);
    }





