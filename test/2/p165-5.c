#include <stdio.h>

int main()
{
    int n,i,j;
    printf("���������鳤��:");
    scanf("%d",&n);
    int a[n];
    printf("����������:");
    for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
   printf("\n");
   printf("��������Ϊ:");
   for(j=n;j>0;j--)
   {
       printf(" %d ",a[j-1]);  //��Ŵ�0��ʼ
   }
    return 0;
}
