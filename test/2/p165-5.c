#include <stdio.h>

int main()
{
    int n,i,j;
    printf("请输入数组长度:");
    scanf("%d",&n);
    int a[n];
    printf("请输入数组:");
    for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
   printf("\n");
   printf("逆序数组为:");
   for(j=n;j>0;j--)
   {
       printf(" %d ",a[j-1]);  //标号从0开始
   }
    return 0;
}
