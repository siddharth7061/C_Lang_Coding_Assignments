#include <stdio.h>
#include <string.h>

void squeeze(char [], char []);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
   
   getchar();

    printf("Enter string2:");
    scanf("%[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}


void squeeze(char str1[], char str2[])
{
    char *ptr1 = str1, *ptr2 = str2, flag = 0;

    while(*ptr1 != '\0')
    {
      while(*ptr2 != '\0')
        {
            if(*ptr1 == *ptr2)
            {
                // left shift string
                flag = 1;
                for(int i = ptr1 - str1; str1[i] != '\0'; i++)
                {
                    str1[i] = str1[i+1];
                }

            }

            if(flag)
            {
                flag = 0;
                ptr2 = str2;
            }
            else
            {
                ptr2++;
            }
        }
        ptr2 = str2;
        ptr1++;
    }
}
