#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

void nrps(char [], int, int);

int main()
{
    //read the input from the user
    char pattern[100];
    int n, k;

    printf("Enter pattern length 'k':\n");
    scanf("%d", &k);

    printf("Enter string length 'n'\n");
    scanf("%d", &n);

    if(n < k) // if string length is less than pattern;
    {
        printf("String lenght is less than pattern length\n");
        return 0;
    }

    // Enter pattern
    printf("Enter Pattern\n");

    // clearing input buffer
    __fpurge(stdin);

    scanf("%[^\n]", pattern);

    // compare each elemens of pattern array
    for(int i = 0; i < k; i++)
    {
        for(int j = i+1; j < k; j++ )
        {
            if(pattern[i] == pattern[j])
            {
                printf("Enter unique elements\n");
                return 0;
            }
        }
    }
    
    //function call to pass input to the function
    nrps(pattern, n, k);
    
}


void nrps(char pattern[], int n, int k)
{
    char arr[100];
    char *ptr = pattern, *backup_ptr;
    int count = 0; // to keep track of set completion

    // copying k number of elements to array from pattern string
    // storing the first set of elements
    for(int i = 0; i < n; i++) // set 1
    {
        arr[i] = pattern[i];
    }

    ptr = &pattern[1]; // set 2 -> next set of elements will be stored from here
    backup_ptr = ptr + 1; // set 3 -> After that next set of elements will be stores from here

    for(int i = k; i < n; i++)
    {
        arr[i] = *ptr;
        count++;
        ptr++;

        // when 1 pattern set (k times -> pattern string length) has been stored in the array string
        if(count == k)
        {
            // retain value from backup for next pattern
            if(*backup_ptr != '\0')
            {
                // if backup ptr is not pointing to null then store address in ptr
                ptr = backup_ptr++;
            }
            else
            {
                // if backup ptr is pointing to null then retain 1st element address
                ptr = pattern;
                // store address from 2nd element onwards
                backup_ptr = ptr + 1;
            }
            // reset count to 0
            count = 0;
        }

        if(*ptr == '\0')
        {
            // if pattern reached end of string reset it to begining
            ptr = pattern;
        }


    }

    // storing null character at the end of the string
    arr[n] = '\0';

    printf("Pattern length : %ld\nString length: %ld\n\n", strlen(pattern), strlen(arr));
    printf("Pattern: %s\nString: %s\n", pattern, arr);
}
