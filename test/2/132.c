#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,j;
    printf("����һ������:",n);
    scanf("%d",&n);
    j=sqrt(n);
    for(i=2;i<j;i++)
    if(n%i==0)
        break;
    if(i<n)
        printf("%d��������",n);
    else printf("%d������",n);
    return 0;
}



