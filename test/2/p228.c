#include <stdio.h>

int main()
{   void exchange(int *p1,int *p2,int *p3);
    int *p1,*p2,*p3,a,b,c;   //Ҫ��n��������Ҫ����n����������n��ָ��ָ�����ǣ�
    printf("������������:");
    scanf("%d %d %d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    exchange(p1,p2,p3);   //��������ʵ��
    printf("����˳����:%d %d %d",*p1,*p2,*p3); //*p1��һ��ֵ��������
    return 0;
}
void exchange(int *p1,int *p2,int *p3)
{
    void swap(int *pt1,int *pt2);
    if(*p1<*p2)
        swap(p1,p2);
    if(*p1<*p3)
        swap(p1,p3);
    if(*p2<*p3)
        swap(p2,p3);
}
void swap(int *pt1,int *pt2)   //��������
{
    int p;
    p=*pt1,*pt1=*pt2;*pt2=p;
}




