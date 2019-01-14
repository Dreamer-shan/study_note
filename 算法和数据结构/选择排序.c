#include <stdio.h>

int main()
{
    void selectionsort(int array[],int n);
    int i,a[10];
    printf("enter the array:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    selectionsort(a,10);  //数组名做实参
    printf("the sorted array is:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]); //输出数组
    return 0;
}
void selectionsort(int array[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)  //共比较n-1轮
    {
        k=i;   //先认为第一个是最小值
      for(j=i+1;j<n;j++)
        if(array[j]<array[k])
            k=j;     //现在array[k]是最小值 要将array[k]和array[i]互换


            temp=array[k],array[k]=array[i],array[i]=temp;
    }
}





