#include <stdio.h>
float Max,Min;
int main()
{
    float average(float array[],int n);
    int i,score[10];
    float ave;
    printf("������10��ѧ���ĳɼ�:");
    for(i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    ave=average(score,10);
    printf("���ֵ��:%f\n",Max);
    printf("��Сֵ��:%f\n",Min);
    printf("ƽ��ֵ��:%f\n",ave);  //printf("ƽ��ֵ��:%f\n",average(score,10));
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






