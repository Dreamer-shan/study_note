#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    printf("����a:\n");
    for(i=0;i<=1;i++)    //����a[2][3]����ֻ����0��1����Ŵ�0��ʼ��
     {
         for(j=0;j<=2;j++)  //��������a����
         {
             printf("%5d",a[i][j]);    //��ӡa
             b[j][i]=a[i][j];     //a��b�����л���
         }
         printf("\n");
     }
     printf("����b:\n");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=1;j++)
            printf("%5d",b[i][j]);
         printf("\n");

     }





    return 0;
}
