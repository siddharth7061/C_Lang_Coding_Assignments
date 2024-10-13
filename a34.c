#include <stdio.h>

void replace_blank(char []);

int main()
{
    char str[50];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}


void replace_blank(char str[])
{
   char *ptr1 = str, *ptr2 = str + 1;
   int count = 0, size = 0;

   for(int i = 0; str[i] != '\0'; i++)
   {
       size++;
   }

   while(*ptr2 != '\0')
   {
       if(*ptr1 == *ptr2 && (*ptr1 == ' ') || (*ptr1 == '\t'))
       {
           for(int i = ptr2 - str; str[i] != '\0'; i++)
           {
               str[i] = str[i+1];
           }

       }

       if(*ptr1 == *ptr2 && (*ptr1 == ' ') || (*ptr1 == '\t'))
       {
           ;
       }
       else
       {
           ptr1++;
           ptr2++;
       }
   }


}

