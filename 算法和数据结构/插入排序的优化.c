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
    int i,j,e;          //j��������Ԫ��eӦ�ò����λ��
    for(i=1;i<n;i++)  //Ѱ��arr[i]���ʵĲ���λ��  iҲ�Ǵ�1��ʼ
    {   e=array[i];  //�ȸ���array[i]��ֵ
        for(j=i;j>0&&array[j-1]>e;j--) //ǰ��һ�����ں���һ��
                {
                    array[j]=array[j-1];  //ǰ��һ��������һ������
                } //   ���ѭ��������j����1  ��1���j����e��ŵ�λ��
                array[j]=e;
    }
}




