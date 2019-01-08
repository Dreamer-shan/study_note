#include <stdio.h>

int main()
{
    //1.先定义一个函数体
    /*
         void max(int x,int y)
   {
       if(x>y)
        printf("max is %d",x);
    else
        printf("max is %d",y);

   }
    */
    //2.在main函数中声明要使用的函数
    /*
    void max(int x,int y);
    */
    //以函数名调用这个函数
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



