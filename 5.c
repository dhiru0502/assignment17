#include<stdio.h>
int main()
{
    char str[20];
    int i=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!= 0)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]= str[i] + 32;
        }
       i++;
    }
    printf("String in lowercase: %s",str);
    return 0;
}
