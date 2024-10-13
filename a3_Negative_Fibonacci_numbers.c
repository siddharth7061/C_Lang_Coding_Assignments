/*
Name : Siddharth Singh
Date : 04/07/2022
Description : Print positive Negative Fibonacci terms
sample input : -10
sample output : 0, 1, -1, 2, -3, 5, -8
*/

#include <stdio.h>

int main()
{
    int first = 0, second = 1, next = 0, num;  /* Variable decalaration */

    scanf("%d", &num);                         /* Storing user's input in variable num */

    if (num < 0)                               /* if condition to check if number is negative */
    {
        printf("(exact text)---\n");
        while ((next >= num) && (-next >= num)) /* while loop to check if variable next is more than or equal to variable num and negative of next is also greater than or equal to num */
        {
            printf("%d", next);                /* print statement for each negative fibonacci term */
            first = second;                    /* assigning variable second's value to variable first */
            second = next;                     /* assigning variable next's value to variable secnd */
            next = first - second;             /* subtracting the second term from the first term and storing it in varible next */
            if ((next >= num) && (-next >= num))    /* if condition to check variable next is more than or equal to variable num and negative of next is also greater than or equal to num */
            {
                printf(", ");                  /* print statement to print comma and space after each negative fibonacci term */
            }
        }
        printf("\n");                          /* print statement to print new line after execution */
    }

    else if (num == 0)                         /* if condition to check if num is 0 */
    {
        printf("0\n");                         /* print statement to ptint 0 */
    }
    

    else                                       /* Else statement for Positive numbers */
    {
        printf("Invalid input\n");               /* print statement for positive numbers */
    }
}

/* end of script */