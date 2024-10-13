#include <stdio.h>

int replace_nbits(int, int, int);

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}


int replace_nbits(int num, int n, int val)
{
    int mask, x;
    mask = (~0)<<n;

    // Clearing n bits from LSB from num
    num = (num & mask);

    //extracting n bits from LSB from val
    x = val & ((1<<(n))-1);

    // adding the extracted n bits to num
    return num | x;

    

    

    printf("\n");

    return x;

}

