#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a letter:\n");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    {
        printf("%c is a lower case\n",ch);
    }
    if(ch>='A' && ch<='Z')
    {
        printf("%c is upper case\n",ch);
    }
    return 0;
}
