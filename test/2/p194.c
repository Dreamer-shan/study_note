#include <stdio.h>

int main()
{
    void sort(int array[],int n);
    int i;
    int a[n];
    printf("���������鳤��");
    scanf("%d",n)
    printf("�������ʼ����:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    printf("����֮���������:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);


    return 0;
}
void sort(int array[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)   //һ��Ҫ�Ƚ�n-1��
    {
        k=i;
        for(j=i+1;j<n;j++)   //ÿһ��Ҫ��i��i+1֮������ֽ��бȽ�
        if(array[j]<array[k])
            k=j;  //�Ѿ���array[j]��ֵ��array[k]��
        t=array[k],array[k]=array[i],array[i]=t;  //  ����Ҫ��array[k]��ֵ��array[i]
    }   //Ϊʲô��k��i��������k��j��
}




