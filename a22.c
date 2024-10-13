#include <stdio.h>

int my_isalnum(char);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    ret ? printf("The character %c is alnum\n", ch) : printf("The character %c is not alnum\n", ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
}


int my_isalnum(char ch)
{
    if(((ch >= 48) && (ch <= 57)) || ((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch < 123)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
