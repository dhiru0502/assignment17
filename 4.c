#include<stdio.h>
int main()
{
    char str[20];
    int i=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!= 0)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]= str[i] - 32;
        }
       i++;
    }
    printf("String in uppercase: %s",str);
    return 0;
}
