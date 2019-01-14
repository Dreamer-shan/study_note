#include <stdio.h>

int main()
{
    void insertsort(int array[],int n);
    int i,a[10];
    printf("enter the array:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    insertsort(a,10);  //数组名做实参
    printf("the sorted array is:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]); //输出数组
    return 0;
}
void insertsort(int array[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)  //第0个元素不需要考虑，所以i从1开始
    {
        for(j=i;j>0&&array[j]<array[j-1];j--)  //如果当前元素小于前一个元素且j>0就互换
                {
                 k=array[j];
                 array[j]=array[j-1];
                 array[j-1]=k;
                }
    }
}




