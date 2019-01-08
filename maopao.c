#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int a[10];
    printf("请输入10个数");
    for (i=0;i<10;i++)
      scanf("%d",&a[i]);
    for(j=0;j<9;j++)    //n个数字要n-1趟比较
      for(i=0;i<9-j;i++)   //在第j趟比较中要比较n-j次
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];   //相邻的两个数交换
            a[i+1]=k;

        }
    printf("\n");
    for(i=0;i<=9;i++)
        printf(" %d ",a[i]);

    return 0;
}
