#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if(ch>=65&&ch<=91||ch>=97&&ch<=123)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
        {
            printf("%c is a vowel",ch);
        }
        
        else
        {
            printf("%c is consonant",ch);
        }
    }
    else
    {
        printf("Entered character is not alphabet");
    }
}