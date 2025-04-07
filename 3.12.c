#include<stdio.h>
int main()
{
    char ch;
    printf("please enter a letter (lower case):\n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}
