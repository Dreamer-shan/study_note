#include <stdio.h>

int main()
{
    void sort(int array[],int n);
    int i;
    int a[n];
    printf("请输入数组长度");
    scanf("%d",n)
    printf("请输入初始数组:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    printf("排序之后的数组是:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);


    return 0;
}
void sort(int array[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)   //一共要比较n-1轮
    {
        k=i;
        for(j=i+1;j<n;j++)   //每一轮要将i和i+1之后的数字进行比较
        if(array[j]<array[k])
            k=j;  //已经将array[j]的值给array[k]了
        t=array[k],array[k]=array[i],array[i]=t;  //  现在要把array[k]的值给array[i]
    }   //为什么是k和i换而不是k和j换
}




