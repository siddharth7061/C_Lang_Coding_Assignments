#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;
    
    printf("Enter num, n: \n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d: ", num);
    print_bits(num, n);
 }


int print_bits(int num, int n)
{
    if(n <= 32)
    {
        for(int i = n-1; i>=0; i--)
        {
            printf("%d ", (num>>i)&1);
        }

        printf("\n");
    }
    else
    {
        printf("Out of range\n");
    }


}

