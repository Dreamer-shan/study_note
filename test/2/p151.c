#include <stdio.h>
#include <stdlib.h>


        //   ����̨�㷨
int main()
{
    int i,j,column=0,row=0,max;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{100,1000,15,12}};
    max=a[0][0];   //����Ϊa[0][0]���
    for(i=0;i<=2;i++)
     for(j=0;j<=3;j++)
             if(a[i][j]>max)  //���ĳ������max�󣬾Ͱ��������ֵ��max
             {
                max=a[i][j];
                row=i;
                column=j;
             }
     printf("max is %d\n row is %d\n column is %d\n",max,row,column);
    return 0;
}
     //��������row=2��column=1,��a[2][1],����ʾ�����еڶ����Ǹ�������Ŵ�0��ʼ��
