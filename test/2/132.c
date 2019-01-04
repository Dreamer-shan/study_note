#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,j;
    printf("输入一个整数:",n);
    scanf("%d",&n);
    j=sqrt(n);
    for(i=2;i<j;i++)
    if(n%i==0)
        break;
    if(i<n)
        printf("%d不是质数",n);
    else printf("%d是质数",n);
    return 0;
}



