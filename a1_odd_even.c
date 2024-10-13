/*
Name : Siddharth Singh
Date : 01/07/2022
Description : Check if number is odd or even
sample input : 2
sample output : 2 is positive even number
*/

#include <stdio.h>

int main ()
{
    int num;   /* Variable Declaration */

    printf("Enter the value of 'n' : ");                  /* Print statement to ask user for an input */
    scanf("%d", &num);                                    /* Storing user's input in variable num */

    if (num > 0)                                          /* If condition to check if the number os positive */
    {
        if (num % 2 == 0)                                 /* If condition to check if the positive number is even */
        {
            printf("%d is positive even number\n", num);  /* Print statement for positive even number */
        }

        else                                              /* Else statement for Odd numbers */
        {
            printf("%d is positive odd number\n", num);   /* Print statement for positive odd number */
        }
        
        
    }

    else if (num < 0)                                     /* If condition to check if number is negative */
    {
        if (num % 2 == 0)                                 /* If condition to check if the negative number is even */
        {
            printf("%d is negative even number\n", num);  /* Print statement for negative even number */
        }

        else                                              /* Else statement for Odd numbers */
        {
            printf("%d is negative odd number\n", num);   /* Print statement for negative odd numbers */
        }
        
        
    }

    else                                                  /* Else condition for number 0 */
    {
        printf("0 is neither odd nor even\n");            /* Print statement for number 0 */
    }
    
    return 0;
    
}