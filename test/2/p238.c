#include <stdio.h>

int main()
{
    void inv(int array[],int n);
    int i,a[10]={3,7,9,11,0,6,7,5,4,2};
    printf("初始数组是:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    inv(a,10);
    printf("交换之后的数组是");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}

void inv(int array[],int n)   //形参是数组名
{
    int i,j,temp,m=(n-1)/2;
    for(i=0;i<=m;i++)   //i的上限是m
    {
        j=n-1-i;
        temp=array[i],array[i]=array[j];array[j]=temp;
    }
}






