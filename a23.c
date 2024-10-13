#include <stdio.h>

int is_xdigit(char);

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    ret ? printf("The character %c is a hexadecimal digit", ch) : printf("The character %c is not a hexadecimal digit", ch);
    /* Based on the return value of the function print the message */
    
    
    return 0;
}


int is_xdigit(char ch)
{
    if((ch >= 48 && ch <=57) || (ch >= 65 && ch < 71) || (ch >= 97 && ch <= 102))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
