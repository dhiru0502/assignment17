#include<stdio.h>
int main()
{
    char str[20];
    int i,j,temp;
    printf("Enter a string: ");
    gets(str);

    for(i=0; i< strlen(str)-1; i++)
    {
        for(j=i; j<strlen(str); j++)
        {
            if(str[i]>str[j])
            {
                temp= str[i];
                str[i]= str[j];
                str[j]= temp;
            }
        }
    }
    printf("sorted string is: %s",str);
    return 0;
}
