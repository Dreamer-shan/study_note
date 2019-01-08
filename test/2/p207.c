#include <stdio.h>
float Max,Min;
int main()
{
    float average(float array[],int n);
    int i,score[10];
    float ave;
    printf("请输入10个学生的成绩:");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    ave=average(score,10);
    printf("最大值是:%f\n",Max);
    printf("最小值是:%f\n",Min);
    printf("平均值是:%f\n",ave);  //printf("平均值是:%f\n",average(score,10));
    return 0;
}
float average(float array[],int n)
{   int i;
    float aver,sum=array[0];

    for(i=1;i<n;i++)
    {
        if(array[i]>Max)
        {Max=array[i];}
          else if(array[i]<Min)
            Min=array[i];
            sum=sum+array[i];
    }
    aver=sum/n;
    return(aver);
}






