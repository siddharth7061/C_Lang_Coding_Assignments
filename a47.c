#include <stdio.h>

int main()
{
    int size;
    printf("Enter size\n");
    scanf("%d", &size);

    if(size == 2)
    {
        int short num;
        printf("Enter num:\n");
        scanf("%hx", &num);

        char *ptr = (unsigned char *) &num;
        printf("Adress 1: %x\nAdress 2: %x\nBefore : %hx\n", ptr[0], ptr[1], num);

        printf("-------------After switching---------------\n");
        
        //switching bytes
        char temp;
        temp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = temp;


        printf("Adress 1: %x\nAddress 2: %x\nResult: %hx\n", ptr[0],ptr[1], num);
    }
    else if(size == 4)
    {
        int num;
        printf("Enter num:\n");
        scanf("%x", &num);

        char *ptr = (char *) &num;
        char temp;
        printf("Before: %x\n", num);

        printf("-------------After switching---------------\n");

        //switching bytes
        for(int i = 0; i < 2; i++)
        {
            temp = ptr[i];
            ptr[i] = ptr[4-1-i];
            ptr[4-1-i] = temp;
        }

        printf("After: %x\n", num);
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}
