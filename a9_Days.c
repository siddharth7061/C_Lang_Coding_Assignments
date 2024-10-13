/*
Name : Siddharth Singh
Date : 05/07/2022
Description : To find which day of the year
sample input : 9 2
sample output : The day is Tuesday
*/
#include <stdio.h>
int main()
{
    int n, first, result;                  /* Variabel declaration */
    printf("Enter the value of 'n' : \n"); /* print statement to ask user for nth day */
    scanf("%d", &n);                       /* storing user's input in variable n */

    if (n > 0 && n <= 365) /* if condition to check n is between 0 and 365 */
    {
        printf("Choose First Day :\n");                                                                  /* print statement to display list of days */
        printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n"); /* print statement to show list of days */
        scanf("%d", &first);                                                                             /* storing user's input in variable first */

        if (first > 0 && first <= 7) /* if condition to check variable is between 0 and 365 */
        {

            result = (n + first - 2) % 7; /* statement to find the result */

            switch (result) /* switch case to compare the result with different cases */
            {
            case 0: /* case statement to print sunday if result is 0 */
                printf("The day is Sunday\n");
                break;

            case 1: /* case statement to print sunday if result is 0 */
                printf("The day is Monday\n");
                break;

            case 2: /* case statement to print sunday if result is 0 */
                printf("The day is Tuesday\n");
                break;

            case 3: /* case statement to print sunday if result is 0 */
                printf("The day is Wednesday\n");
                break;

            case 4: /* case statement to print sunday if result is 0 */
                printf("The day is Thursday\n");
                break;

            case 5: /* case statement to print sunday if result is 0 */
                printf("The day is Friday\n");
                break;

            case 6: /* case statement to print sunday if result is 0 */
                printf("The day is Saturday\n");
                break;

            default: /* default statement */
                printf("The day is Invalid");
                break;
            }
        }

        else /* else condition to print error for f value more than 7 or less than 0 */
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7");
        }
    }

    else /* else condition to print error for n value more than 365 or less than 0 */
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }

    return 0;
}
/* End of script */