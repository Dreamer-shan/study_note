#include <stdio.h>

int main()
{
    void insertsort(int array[],int n);
    int i,a[10];
    printf("enter the array:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    insertsort(a,10);  //��������ʵ��
    printf("the sorted array is:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]); //�������
    return 0;
}
void insertsort(int array[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)  //��0��Ԫ�ز���Ҫ���ǣ�����i��1��ʼ
    {
        for(j=i;j>0&&array[j]<array[j-1];j--)  //�����ǰԪ��С��ǰһ��Ԫ����j>0�ͻ���
                {
                 k=array[j];
                 array[j]=array[j-1];
                 array[j-1]=k;
                }
    }
}




