#include <stdio.h>

int main()
{
    //1.�ȶ���һ��������
    /*
         void max(int x,int y)
   {
       if(x>y)
        printf("max is %d",x);
    else
        printf("max is %d",y);

   }
    */
    //2.��main����������Ҫʹ�õĺ���
    /*
    void max(int x,int y);
    */
    //�Ժ����������������
    /*
    max(a,b);
    */
    void max(int x,int y);
    int a=1,b=2,c;
    max(a,b);

    return 0;
}
    void max(int x,int y)
   {
       if(x>y)
        printf("max is %d",x);
    else
        printf("max is %d",y);

   }



