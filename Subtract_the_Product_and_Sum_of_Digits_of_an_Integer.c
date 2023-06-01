#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=0,r,p=1;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        p=p*r;
        a=a/10;
    }
    printf("%d",(p-s));
}