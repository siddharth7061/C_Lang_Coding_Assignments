#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
        
    printf("Enter the string  : ");
    scanf("%s", str);
        
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
        
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
        
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }   
}

char *my_strtok(char str[], const char delim[])
{
    static char start_index = 0, *base_address;
    char *ret_address;

    if(str == NULL && base_address != NULL)
    {
        str = base_address;

        for(char pos = start_index; str[pos] != '\0'; pos++)
        {
            for(char i = 0; delim[i] != '\0'; i++)
            {
                if(str[pos] == delim[i])
                {
                    str[pos] = '\0';
                    ret_address = base_address + start_index;
                    start_index = ++pos;
                    return ret_address;
                }
            }
        }

        ret_address = base_address + start_index;
        base_address = NULL;
        return ret_address;
    }
    else if(str == NULL && base_address == NULL)
    {
        return NULL;
    }
    else
    {
        ret_address = str;

        for(char pos = 0; str[pos] != '\0'; pos++)
        {
            for(char i = 0; delim[i] != '\0'; i++)
            {
                if(str[pos] == delim[i])
                {
                    str[pos] = '\0';
                    pos++;
                    start_index = pos;
                    base_address = str;
                    return ret_address; // str -> returning base address
                }
            }
        }

        return ret_address; //str
    }
}
