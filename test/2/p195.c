#include <stdio.h>

int main()
{
    int max1(int array[][4]);
    int max,i=0,j=0,a[3][4];
    printf("���������飺\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("\n");
    max=max1(a);
    printf("max is %d",max);
    return 0;
}
int max1(int array[][4])
{   int i,j,max;
    max=array[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(array[i][j]>max)
            max=array[i][j];
        }
    }
    return(max);
}
   /*    *********************
         �����ظ����壬�������������ж���max���뱻��������max�ظ���
   */



