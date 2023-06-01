#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            c=c+i;
        }
    }
    if(c==a)printf("True");
    else printf("False");
}