#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_left(num, n);
    
    print_bits(ret);
}


int circular_left(int num, int n)
{
    int mask;
    mask = (num >> (32 - n)) & ((1<<n) - 1);
    return mask | (num) << n;
}


int print_bits(int ret)
{
    for(int i = 31; i>=0; i--)
    {
        printf("%d ", (ret>>i) & 1);
    }

    printf("/n");
}

