#include <stdio.h>

int my_atoi(const char str[]);

int main()
{
    char str[20];

    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi(const char str[])
{
    int num = 0;
    const char *ptr = str;

    if(ptr[0] == '-') // checking if first char is - sign
    {
        //negative
        ptr = &str[1]; // assigning first number after - sign

        while(*ptr != '\0') // running loop until last character
        {
            if(*ptr >= '0' && *ptr <= '9') // if only numbers are found
            {
                // no arbitrary symbols
                num = (num*10) + (*ptr - 48);
								// storing numbers in num variable
            }
            else
            {
                // arbitrary symbol found
                num = 0;
                return 0;
            }
            ptr++; // incrementing pointer to next charater
        }
        
        num = -num; // saving negative value of the number
    
    }
		else if(str[0] == '+' || (str[0] >= '0' && str[0] <= '9')) // if input is +123 or 123
    {
        //positive
        if(str[0] == '+') // checking id first character is + symbol
        {
            // if yes then pointing the pointer to the next character after the + symbol
						ptr = str + 1;
        }

        while(*ptr != '\0') // running loop until last character
        {
            if(*ptr >= '0' && *ptr <= '9') // if only numbers are found
            {
                // no arbitrary symbols
                num = (num*10) + (*ptr - 48);
								// saving the equivalent value in num variable
            }
            else
            {
                // arbitrary symbol found
                num = 0;
                return 0;
            }
            ptr++;
        }

    }
    else
    {
        num = 0;
    }

    return num;
}
