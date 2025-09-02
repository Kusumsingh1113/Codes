#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);

    if(a!=0 && b!=0 && c!=0)
    {
        if(a+b+c==180)
        {
            printf("A valid triangle");
        }
        else
        {
            printf("not a valid triangle");
        }
    }
    else
    {
        printf("Not  valid triangle");
    }
    
}