#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int a[10];
    printf("������10����");
    for (i=0;i<10;i++)
      scanf("%d",&a[i]);
    for(j=0;j<9;j++)    //n������Ҫn-1�˱Ƚ�
      for(i=0;i<9-j;i++)   //�ڵ�j�˱Ƚ���Ҫ�Ƚ�n-j��
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];   //���ڵ�����������
            a[i+1]=k;

        }
    printf("\n");
    for(i=0;i<=9;i++)
        printf(" %d ",a[i]);

    return 0;
}
