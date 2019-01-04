#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,sum1=0;
    int m,n,sum2=1;
    double p,q,sum3=1;
    int sum4;
    for(i=1;i<=100;i++)
        sum1=i+sum1;
    printf("%d\n",sum1);
    for(n=1;n<=50;n++)
        sum2=sum2+sum2*sum2;
    printf("%d\n",sum2);
    for(p=1;p<=10;p++)
    sum3=1/p+sum3;
    printf("%d\n",sum3);
    sum4=sum1+sum2+sum3;
    printf("sum is %f",sum4);


    return 0;
}
