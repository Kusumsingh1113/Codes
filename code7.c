#include<stdio.h>
void main()
{
    int m,cm,kg,g;
    printf("Enter value in cm :");
    scanf("%d",&cm);
    m=100*cm;
    printf("%dm",m);

    printf("\nEnter value in g :");
    scanf("%d",&g);
    kg=1000*g;
    printf("%dkg",kg);
}
