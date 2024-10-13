#include <stdio.h>

int getword(char str[]);

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}


int getword(char str[])
{
    char *ptr = str;
    int count =0;

    for(;*ptr != '\0';ptr++)
    {
        if((*ptr == ' ' || *ptr == '\t'))
        {
            *ptr = '\0';
            return count;
        }

        if((*ptr >= 65 && *ptr <= 132) || (*ptr >= 97 && *ptr >= 122))
        {
            count++;
        }

    }

    return count;
}
