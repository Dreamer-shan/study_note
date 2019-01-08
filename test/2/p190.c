#include <stdio.h>

int main()
{
    int max(int x,int y);
    int m,n,i,a[10];
    printf("请输入10个整数:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1,m=a[0];i<10;i++)
    {
        if(max(m,a[i])>m)
           {
               m=max(m,a[i]);
               n=i;   //把这个元素的序号记下来，放在n中
           }

    }
printf("最大的数是：%d\n它是第%d个数\n",m,n+1);  //序号从0开始，所以实际上是第n+1个数

    return 0;
}
int max(int x,int y)
{
    return(x>y?x:y);  //返回x，y中的最大值
}



