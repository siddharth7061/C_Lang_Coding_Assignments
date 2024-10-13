#include <stdio.h>

int my_ispunct(char);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    ret ? printf("Entered character %c is a punctuation character", ch) : printf("Entered character %c is not a punctuation character", ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
}


int my_ispunct(char ch)
{
    if(ch >= 33 && ch <= 47)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
