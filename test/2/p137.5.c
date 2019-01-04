#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,i,n,sum,k;
    printf("«Î ‰»Îa= n=");
    scanf("%d %d",&a,&n);
    sum=a;
    k=a;
    for(i=1;i<n;i++)
    {
        k=k*10+a;
        sum=k+sum;

    }
    printf("sum is %d",sum);
    return 0;
}
