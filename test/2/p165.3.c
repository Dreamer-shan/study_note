#include <stdio.h>
#include <string.h>
int main()
{
    int a[3][3];
    int i,j,sum1=0,sum2=0,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf(" %d ",a[i][j]);
        printf(" \n");
    }
    for(i=0,j=0;i<3&&j<3;i++,j++)
    {
        sum1=a[i][j]+sum1;
    }
    printf("sum1 is %d\n",sum1);
    for(i=2,j=0;i<3&&j<3;i--,j++)
    {
        sum2=sum2+a[i][j];
    }
    printf("sum2 is %d\n",sum2);
    sum=sum1+sum2;
    printf("sum is %d",sum);


    return 0;
}
