/*
Name : Siddharth Singh
Date : 06/07/2022
Description : To print Triangle Pattern for the given number
sample input : 5
sample output : 1  2  3  4  5  
                6        7  
                8     9  
                10  11  
                12
*/
#include <stdio.h>
int main ()
{
    int i, j, num, a = 0;                                /* Variable Declaration and assigning 0 value to a for incrementing and printing the pattern */
    printf("Enter the number: \n");                      /* Print Statement to ask user for input */
    scanf("%d", &num);                                   /* storing user's input in variable num */

    for ( i = num; i >0; i--)                            /* for loop to print rows */
    {
        for ( j = 1; j <= i; j++)                        /* for loop to print columns */
        {
            ++a;                                         /* incrementing the value of a by 1 for every iteration */
            if (i == num)                                /* if condition to check first row */
            {
                printf("%d  ", a);                       /* printing a value for first row */
            }
            else if (j == 1)                             /* if condition to check first column */
            {
                printf("%d  ", a);                       /* printing a value for first column */
            }
            else if (i - j == 0)                         /* if condition to check if i - j = 0 */
            {
                printf("%d  ", a);                       /* print statement to print a value */
            }
            else                                         /* else condition to print blank space */
            {
                --a;                                     /* decrementing the value of a */
                printf("   ");                           /* printing blank space */
            }
            
            
        }
        printf("\n");                                    /* printing new line after each row */
        
    }
    return 0;
    
}
/* End of script */