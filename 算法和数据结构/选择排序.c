#include <stdio.h>

int main()
{
    void selectionsort(int array[],int n);
    int i,a[10];
    printf("enter the array:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    selectionsort(a,10);  //��������ʵ��
    printf("the sorted array is:");
    for(i=0;i<10;i++)
        printf("%d ",a[i]); //�������
    return 0;
}
void selectionsort(int array[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)  //���Ƚ�n-1��
    {
        k=i;   //����Ϊ��һ������Сֵ
      for(j=i+1;j<n;j++)
        if(array[j]<array[k])
            k=j;     //����array[k]����Сֵ Ҫ��array[k]��array[i]����


            temp=array[k],array[k]=array[i],array[i]=temp;
    }
}





