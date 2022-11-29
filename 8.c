#include<stdio.h>
int main()
{
    char str[20], b[20];
    int i;
    printf("Enter a string: ");
    gets(str);

    for(i=0; i< strlen(str); i++)
    {
        b[i]= str[i];
    }
    printf("copy string is: %s",b);
    return 0;
}
