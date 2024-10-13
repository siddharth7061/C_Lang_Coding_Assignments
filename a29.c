#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    static int flag = 0, print_flag = 0;

    if(!flag)
    {
        printf("Enter value of num: \n");
        scanf("%d", &num);
        print_flag = num;
        flag = 1;
    }

    if(num < 0)
    {
        printf("Invalid input\n");
        print_flag = 0;
    }
    else if(num == 0 | num == 1)
    {
        printf("Factorial is %lld\n", fact);
        print_flag = 0;
    }
    else if(num > 1)
    {
        fact = fact * num;
        num--;
        main();
        print_flag--;
    }
    else
    {
        return 1;
        printf("Factorial is %lld\n", fact);
    }


}
