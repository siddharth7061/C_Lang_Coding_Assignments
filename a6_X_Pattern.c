/*
Name : Siddharth Singh
Date : 05/07/2022
Description : To print X Pattern for the given number
sample input : 9
sample output :
1       9
 2     8 
  3   7  
   4 6   
    5    
   4 6   
  3   7  
 2     8 
1       9
*/
#include <stdio.h>
int main()
{
    int num, i, j, a=0;                        /*  Variable Declaration */
    printf("Enter the number: \n");            /* print statement to ask user for input */
    scanf("%d", &num);                         /* storing user's input in variable num */

    if (num % 2 == 0)                          /* if condition to check num is even or odd */
    {
        for (i = 1; i <= num; i++)             /* for loop to print rows */
        {
            for (j = 1; j <= num; j++)         /* for loop to print columns */
            {
                if (i == j)                    /* if condition to check if i is equal to j */
                {
                    printf("%d", j);           /* print statement to print numbers */
                }
                else if (j == (num + a))       /* else condition to check j is equal to num + a */
                {
                    printf("%d", j);           /* print statement to print numbers */
                    a = a - 1;                 /* decrementing the value of a */
                }

                else                           /* else condition to print blank space */
                {
                    printf(" ");               /* print statement to print blank space */
                }
            }
            printf("\n");                      /* print statement to print new line */
        }
    }

    else                                       /* else condition for odd number */
    {

        for (i = 1; i <= num; i++)             /* for loop to print rows */
        {
            for (j = 1; j <= num; j++)         /* for loop to print columns */
            {
                if (i == j)                    /* if condition to check i is equal to j */
                {
                    printf("%d", j);           /* print statement to print print numbers */
                }
                else if (i + j == num + 1)     /* else condiion to print half of the pattern */
                {
                    printf("%d", j);           /* print statement to print numbers */
                }

                else                           /* else condition to print blank space */
                {
                    printf(" ");               /* print statement to print blank space */
                }
            }
            printf("\n");                      /* print statement to print new line */
        }
    }

    return 0;
}
/* End of script */