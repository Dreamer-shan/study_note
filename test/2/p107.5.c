#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;

    printf("������һ������:");
    scanf("%d",&a);
    b = sqrt(a); //�����ȼ���a���ٿ�������int a��b������������
    if(a>=1000)
        printf("�����д�����������");
        else

            printf("%d\n",b);

    return 0;
}



