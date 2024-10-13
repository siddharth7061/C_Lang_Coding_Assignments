#include<stdio.h> 
#include <string.h>

void combination(char [],int ,int );

int main()

{
        char str[100];
        int n;
        int res;

        printf("Enter a string: ");
        scanf("%100[^\n]",str);    
        
        n = strlen(str);
        printf("String length: %d\n", n);
        
        combination(str,0,n-1);                       
        return 0;
}

void combination(char str[],int pos,int n)
{
    char temp;
    //static int set = 0;

    if(pos <= n)
    {
        temp = str[0];
        str[0] = str[pos];
        str[pos] = temp;
       /* // printing 1st combination
        printf("swap : %s\n", str);

        // reset to original string
        temp = str[0];
        str[0] = str[pos];
        str[pos] = temp;

        // second combination
        temp = str[1];
        str[1] = str[n];
        str[n] = temp;*/

        combination(str, pos + 1, n);
    }
    else
    {
        return;
    }

    
    printf("swap : %s\n", str);

    temp = str[0]; // reset string
    str[0] = str[pos];
    str[pos] = temp;


}
