#include<stdio.h>
int main()
{
    char name[20];
    int i=0, count=0;
    printf("Enter your name: ");
    scanf("%s",name);
    while(name[i]!= 0)
    {
        i++;
        count++;
    }
    printf("Your name length is: %d",count);
    return 0;
}
