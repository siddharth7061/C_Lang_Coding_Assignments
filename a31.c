#include <stdio.h>

void negative_fibonacci(int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);

    printf("0 ");
    
    negative_fibonacci(limit, 0, 1);

    if(limit == 1)
    {
        printf("1");
    }

    printf("\n");

}

void negative_fibonacci(int num, int f_term, int s_term)
{
    // base condition
    if(s_term < 0)
    {
        if(s_term <= num)
        {
            if(s_term == num)
            {
                printf("%d ", s_term);
            }
            return;
        }
        else
        {
            // recursive calling condition
            printf("%d ", s_term);

            s_term = f_term - s_term;
            f_term = f_term - s_term;

            negative_fibonacci(num, f_term, s_term);
        }
    }
    else
    {
        if((-s_term) <= num)
        {
            if((-s_term) == num)
            {
                printf("%d ", s_term);
            }
            return;
        }
        else
        {
            // recursive calling condition
            printf("%d ", s_term);

            s_term = f_term - s_term;
            f_term = f_term - s_term;

            negative_fibonacci(num, f_term, s_term);
        }
    }
}
