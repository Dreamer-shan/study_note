#include <stdio.h>

int main()
{
    int fac(int n);
    int n,y;
    printf("����Ҫ��׳˵���:");
    scanf("%d",&n);
    y=fac(n);
    printf("%d�Ľ׳���:%d",n,y);
    return 0;
}
int fac(int n)
    {
        int n;
        if(n==0||n==1)
            n=1;
        else if(n>1)
            n=n*(n-1);
        return(n);
    }





