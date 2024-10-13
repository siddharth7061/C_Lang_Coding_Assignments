#include <stdio.h>

int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}

int get_nbits( int num, int n)
{
    int mask = 1;

    for(int i = 0; i<n; i++)
    {
        mask = mask | (1 << i);
    }

    return num & mask;
}

