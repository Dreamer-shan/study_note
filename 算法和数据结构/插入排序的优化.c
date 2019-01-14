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
    int i,j,e;          //j用来保存元素e应该插入的位置
    for(i=1;i<n;i++)  //寻找arr[i]合适的插入位置  i也是从1开始
    {   e=array[i];  //先复制array[i]的值
        for(j=i;j>0&&array[j-1]>e;j--) //前面一个大于后面一个
                {
                    array[j]=array[j-1];  //前面一个将后面一个覆盖
                } //   这层循环结束后j减了1  减1后的j就是e存放的位置
                array[j]=e;
    }
}




