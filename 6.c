#include<stdio.h>
int main()
{
    char str[20], tmp;
    int i=0, j;
    printf("Enter a string: ");
    gets(str);
    j= strlen(str)-1;

    while(i<=j)
    {
        tmp = str[i];
        str[i]= str[j];
        str[j]= tmp;
       i++; j--;
    }
    printf("String in reverse: %s",str);
    return 0;
}
