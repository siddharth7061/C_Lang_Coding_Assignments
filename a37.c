#include <stdio.h>
#include <string.h>

int itoa(int num, char str[]);

int main(void)
{
    int num = 0, ret;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s\n", str);
}


int itoa(int num, char str[])
{
    int size = 0, num_backup = num;
    char *ptr = str, temp;

    if(num < 0)
    {
        // Negative
        num = -num; // converting to positive for easy calculation
        *ptr = '-'; // storing '-' symbol in first character of string
        ptr++; // incrementing pointer
        
    }
    else if(num == 0)
    {
        // Zero
        // storing character equivalent 0 and returning 0
        *(ptr++) = 48;
        *ptr = '\0';
        return 0;
    }
    
    while(num) // storing the character equivalent values in the string
    {
        *ptr = 48 + (num % 10);
        num = num / 10;
        ptr++;
    }
    
    *ptr = '\0'; //  stroing null character at the end of the array

    size = strlen(str); //finding size of string

    if(num_backup > 0) // Num is positive
    {
        for(int i = 0; i < size/2; i++) // reverse the string
        {
            temp = str[i];
            str[i] = str[size - 1 -i];
            str[size - i -1] = temp;
        }
    }
    else
    {
        // If num is negative
        // because of the '-' symbol there is a difference in loop for reversing the string
        if(size%2) // if size of the string is odd
        {
           //reverse the string upto size/2 times
            for(int i = 1; i <= size/2; i++)
           {
                temp = str[i];
                str[i] = str[size - i];
                str[size - i] = temp;
            }

        }
        else // if size of the string is even
        {
            // reverse the string for less than size/2 times
            for(int i = 1; i < size/2; i++)
            {
                temp = str[i];
                str[i] = str[size - i];
                str[size - i] = temp;
            }

        }
    }

    return 0;
}

