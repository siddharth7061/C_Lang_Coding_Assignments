#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pangram(char []);

int main()
{
   char str[100];
   int ret;
   printf("Enter the string\n");

    scanf("%[^\n]", str);

    //printf("%s\n", str);

    ret = pangram(str) ? printf("String is a pangram\n") : printf("String is not a pangram\n");
}


int pangram(char str[])
{
    char *ptr = str; // initializing pointer
    int arr[26] = {0};  // initializing all elements of array with 0
    int count = 0;

    if(strlen(str) < 26)
    {
        return 0;
    }
    else
    {
        // running pointer till the end
        while(*ptr != '\0')
        {
            // checking if character is alphabet
            if(isalpha(*ptr))
            {
                // if alphabet is capital letter
                if(*ptr >= 65 && *ptr <= 90)
                {
                    arr[*ptr - 65] = 1;
                }
                // if aphabet is small
                else
                {
                    arr[*ptr - 97] = 1;
                }
            }
            ptr++;
            // increment pointer to next location
        }
        

        
        for(int i = 0; i < (sizeof(arr)/4); i++)
        {
            // if 0 is found throughout the arr array then return 0
            //string is not a pangram
            if(!arr[i])
            {
                return 0;
            }
        }

        // if the loop is completed then no 0s was found
        // return 1 -> string is a pangram
        return 1;

    }

}

