#include <stdio.h>

int main()
{
    void search(float (*p)[4],int n);
    float score[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    search(score,3);
    return 0;
}

void search(float (*p)[4],int n)
{
    int i,j,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<4;j++)
        {
            if(*(*(p+i)+j)<60)    //�൱��p[i][j]<60
                flag=1;
        }
        if(flag==1)
          {
             printf("No.%d failed,his score is:\n",i+1);  //�����Ǵӵ�0����ʼ�����ģ������Ǵӵ�1����ʼ����
             for(j=0;j<4;j++)
             {
                 printf("%f",*(*(p+i)+j));
                 printf("\n");
             }

          }
    }
    printf("\n");
}






