#include <stdio.h>

int main()
{
    int fac(int n);
    int n,y;
    printf("����Ҫ��׳˵���:");
    scanf("%d",&n);
    y=fac(n);
    if(n>0)
    printf("%d�Ľ׳���:%d",n,y);
    return 0;
}
int fac(int n)
    {
        int f;   //����һ�����������պ���fac��ֵ
        if(n<0)
            printf("data error");
        else if(n==0||n==1)
            f=1;
        else
            f=n*fac(n-1);
        return(f);
    }





