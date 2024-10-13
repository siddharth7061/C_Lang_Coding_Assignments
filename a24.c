#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    ret ? printf("Entered character %c is a lower case letter", ch) : printf("Entered character %c is not a lower case letter", ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
}


int my_islower(int ch)
{
    if(ch >= 97 && ch <= 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
