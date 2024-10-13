#include <stdio.h>

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num: ");
    scanf("%d", &num);
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    ret = circular_right(num, n);
    
    print_bits(ret);
}


int circular_right(int num, int n)
{
    int mask;

    if(num > 0)
    {
        mask = (((num & ((1<<n)-1)) << (32 - n)) & (~0)) | (num >> n);
        return mask;
    }
    else
    {
        mask = (((1<<n) - 1) & num) << (32 -n) | (num >> n) ^ (((1<<n)-1) << (32 -n));
        return mask;
    }
    
}


int print_bits(int ret)
{
    for(int i = 31; i>=0; i--)
    {
        printf("%d ", (ret>>i) & 1);
    }

    printf("\n");

