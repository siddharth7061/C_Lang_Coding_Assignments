#include <stdio.h>

void positive_fibonacci(int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : \n");
    scanf("%d", &limit);

    printf("0 ");
    
    positive_fibonacci(limit, 0, 1);

    if(limit == 1)
    {
        printf("1");
    }

    printf("\n");
}


void positive_fibonacci(int num, int f_term, int s_term)
{
    // base condition
    if(s_term >= num)
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

        s_term = s_term + f_term;
        f_term = s_term - f_term;

        positive_fibonacci(num, f_term, s_term);
    }

}
