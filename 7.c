#include<stdio.h>
int main()
{
    char str[20];
    int i=0, alphacount=0, digitcount=0, spldgtcount=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!= 0)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            alphacount++;
        else if(str[i]>='0' && str[i]<= '9')
                digitcount++;
        else
            spldgtcount++;
      i++;
    }
    printf("Number of alphabet= %d, digit= %d, special character= %d ",alphacount,digitcount,spldgtcount);
    return 0;
}
