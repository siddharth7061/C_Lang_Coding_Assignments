#include <stdio.h>

int main()
{
	int num, count = 0;
	printf("Enter number: \n");
	scanf("%d", &num);

	for(int i = 7; i>= 0; i--)
	{
        if((num>>i)&1)
        {
            count++;
        }
    }

    printf("Number of set bits are %d\n", count);

    if(count%2)
    {
        printf("Bit Parity is odd\n");
    }
    else
    {
        
        printf("Bit Parity is even\n");
    }

    return 0;
}

