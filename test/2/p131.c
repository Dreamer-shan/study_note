#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n;
    printf("����һ������:%d",n);
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
        break;
    if(i<n)
        printf("%d ������",n);
    else printf("%d ��������",n);
    return 0;
}


