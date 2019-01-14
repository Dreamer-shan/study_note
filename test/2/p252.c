#include <stdio.h>

int main()
{   void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    average(*score,12);
    search(score,2);
    return 0;
}
void average(float *p,int n)
{   float *p_end;
    float sum=0,aver;
    p_end=p+n-1;
    for(;p<p_end;p++)
    {
        sum=sum+(*p);
    }
    aver=sum/n;
    printf("average=%f\n",aver);
}
void search(float (*p)[4],int n)
{
    int i;
    printf("the score of No.%d are:\n",n);
    for(i=0;i<4;i++)
        printf("%f ",*(*(p+n)+i));
    printf("\n");
}






