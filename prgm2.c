#include<stdio.h>
int main()
{
    int a,b,x,y,c,d;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    c=a-x;
    d=b-y;
    if(c<d)
    {
        printf("a is cheaper to buy");
    }
    else if(d<c)
    {
        printf("b is cheaper to buy");
    }
    else
    {
        printf("any");
    }
    return 0;
}





