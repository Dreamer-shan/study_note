#include <stdio.h>

int main()
{
    int max(int x,int y);
    int m,n,i,a[10];
    printf("������10������:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1,m=a[0];i<10;i++)
    {
        if(max(m,a[i])>m)
           {
               m=max(m,a[i]);
               n=i;   //�����Ԫ�ص���ż�����������n��
           }

    }
printf("�������ǣ�%d\n���ǵ�%d����\n",m,n+1);  //��Ŵ�0��ʼ������ʵ�����ǵ�n+1����

    return 0;
}
int max(int x,int y)
{
    return(x>y?x:y);  //����x��y�е����ֵ
}



