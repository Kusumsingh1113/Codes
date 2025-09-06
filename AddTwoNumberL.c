#include<stdio.h>
int main()
{
    int a[100],arr[100],i,n,sum,r,rev=0,temp[100];
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=a[i]+arr[i];
        printf("%d",sum);
        temp[i]=sum;
    }
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",temp[i]);
    }
    
}