#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n;
    printf("输入一个整数:%d",n);
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
        break;
    if(i<n)
        printf("%d 是质数",n);
    else printf("%d 不是质数",n);
    return 0;
}



