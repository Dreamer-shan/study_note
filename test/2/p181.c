#include <stdio.h>

int main()
{
    int max4(int a,int b,int c,int d);
    int a,b,c,d,m;
    printf("�������ĸ�����:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=max4(a,b,c,d);    //���õ�ʱ��ֻ��Ҫ����ʵ�Σ�����Ҫ���ϱ������͡�
    printf("max is %d",m);
    return 0;
}
    int max4(int a,int b,int c,int d)
    {
        int max2(int a,int b);  //��max2�ĺ�������
        return (max2(max2(max2(a,b),c),d));  //3�ε���max2���Ϳ��ԱȽϳ�abcd�ĸ����ֵĴ�С

    }
    int max2(int a,int b)
    {
    return(a>=b?a:b);
    }




