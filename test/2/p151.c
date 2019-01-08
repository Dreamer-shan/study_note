#include <stdio.h>
#include <stdlib.h>


        //   打擂台算法
int main()
{
    int i,j,column=0,row=0,max;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{100,1000,15,12}};
    max=a[0][0];   //先认为a[0][0]最大
    for(i=0;i<=2;i++)
     for(j=0;j<=3;j++)
             if(a[i][j]>max)  //如果某个数比max大，就把这个数赋值给max
             {
                max=a[i][j];
                row=i;
                column=j;
             }
     printf("max is %d\n row is %d\n column is %d\n",max,row,column);
    return 0;
}
     //输出结果是row=2，column=1,即a[2][1],它表示第三行第二列那个数（标号从0开始）
