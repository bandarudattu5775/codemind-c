#include<stdio.h>
int main()
{
    int v,k,l,n;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n-2;k++)
        {
            printf("%d",k);
        }
        for(l=n-3;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("
");
    }
    return 0;
}