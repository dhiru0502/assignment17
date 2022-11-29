#include<stdio.h>
int main()
{
    char name[20], b;
    int i=0, count=0;
    printf("Enter your name: ");
    gets(name);
    printf("Enter a character to find the occurrence of character: ");
    scanf("%c",&b);
    while(name[i]!= 0)
    {
        i++;
        if(name[i]==b)
        count++;
    }
    printf("Occurrence of a character is: %d",count);
    return 0;
}
