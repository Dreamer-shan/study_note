#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    printf("数组a:\n");
    for(i=0;i<=1;i++)    //数组a[2][3]的行只能有0和1（标号从0开始）
     {
         for(j=0;j<=2;j++)  //处理数组a的列
         {
             printf("%5d",a[i][j]);    //打印a
             b[j][i]=a[i][j];     //a与b的行列互换
         }
         printf("\n");
     }
     printf("数组b:\n");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=1;j++)
            printf("%5d",b[i][j]);
         printf("\n");

     }





    return 0;
}
