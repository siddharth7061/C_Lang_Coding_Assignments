#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
int main()
{
    int n_st, n_sub;

    printf("Enter number of students\n");
    scanf("%d", &n_st);
    printf("Enter number of subjects\n");
    scanf("%d", &n_sub);

    if(n_st < 1 | n_sub < 1)
    {
        return 0;
    }

    // Define structure for subjects
    struct subjects
    {
        char name[11];
        int marks;
    };

    // Defining structure for student record
    struct student
    {
        char name[11];
        int roll_no;
        struct subjects sub_arr[n_sub];
        int avg;
        char grade;
    } st_arr[n_st];

    __fpurge(stdin);


    printf("--------Enter subject details-------\n");

    char subject[11];
    int sum = 0;

    for(int i = 0; i < n_sub; i++)
    {
        printf("Enter subject-%d name\n", i+1);
        scanf("%[^\n]", subject);

        // copy subject name to all student records
        for(int j =0; j < n_st; j++)
        {
            strcpy(st_arr[j].sub_arr[i].name, subject);
        }
        __fpurge(stdin);
    }


    // Enter student's details
    for(int i = 0; i < n_st; i++)
    {

        printf("--------Enter student details-------\n");
        // Roll no
        printf("Enter roll no for student-%d\n", i+1);
        scanf("%d", &(st_arr[i].roll_no));
        __fpurge(stdin);

        // Student's Name
        printf("Enter student-%d name\n", i+1);
        scanf("%[^\n]", st_arr[i].name);
        __fpurge(stdin);

        // Marks
        for(int j = 0; j < n_sub; j++)
        {
            printf("Enter %s marks\n", st_arr[i].sub_arr[j].name);
            scanf("%d", &(st_arr[i].sub_arr[j].marks));
            sum = sum + st_arr[i].sub_arr[j].marks;
            __fpurge(stdin);
        }

        // calculating average
        st_arr[i].avg = sum/n_sub;

        if(st_arr[i].avg <= 100 && st_arr[i].avg >= 81)
        {
            st_arr[i].grade = 'A';
        }
        else if(st_arr[i].avg <= 80 && st_arr[i].avg >= 61)
        {
            st_arr[i].grade = 'B';
        }
        else if(st_arr[i].avg <= 80 && st_arr[i].avg >= 61)
        {
            st_arr[i].grade = 'C';
        }
        else if(st_arr[i].avg <= 60 && st_arr[i].avg >= 41)
        {
            st_arr[i].grade = 'E';
        }
        else
        {
            st_arr[i].grade = 'F';
        }

    }

    /********************************* Menu *****************************/

    int choice, ch;
    char key = 'y';

    while(key == 'y' || key == 'Y')
    {
        printf("------- Display Menu -------\n");
        printf("1. All students\n2. Particular student details\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        __fpurge(stdin);

        switch(choice)
        {
            case 1:
            printf("All details\n");
            for(int i = 0; i < n_st; i++)
            {
               printf("Name of student %d: %s\n", i+1, st_arr[i].name);
               printf("Roll no: %d\n", st_arr[i].roll_no);
               for(int j = 0; j < n_sub; j++)
               {
                  printf("Marks in %s: %d\n", st_arr[i].sub_arr[j].name, st_arr[i].sub_arr[j].marks);
               }
               printf("\n");
             }
            break;

            case 2:
            printf("------- Menu for particular student -------\n");
            printf("1.) Enter name\n2.) Enter roll no\n");
            scanf("%d", &ch);
            __fpurge(stdin);

            switch(ch)
            {
                case 1: // find vi name
                char name[11];
                int result = 1;
                printf("Enter student's name\n");
                scanf("%[^\n]", name);
                __fpurge(stdin);
                // search name
                for(int i = 0; i < n_st; i++)
                {
                    result = strcmp(name, st_arr[i].name);
                    if(result == 0)
                    {
                        printf("We found your guy ;)\n");
                        printf("Roll no: %d\n", st_arr[i].roll_no);
                        printf("Name: %s\n", st_arr[i].name);
                        for(int j = 0; j < n_st; j++)
                        {
                            printf("%s: %d\n", st_arr[i].sub_arr[j].name, st_arr[i].sub_arr[j].marks);
                        }
                        printf("Grade: %c\n", st_arr[i].grade);

                        break;
                    }
                }
                if(result != 0)
                {
                    printf("We couldn't find your guy :(\n");
                }
                break;

                case 2: // find via roll number
                int roll_no, res;
                printf("Enter roll no\n");
                scanf("%d", &roll_no);
                __fpurge(stdin);
                // search roll no
                for(int i = 0; i < n_st; i++)
                {
                    if(res = roll_no == st_arr[i].roll_no)
                    {
                        printf("We found your guy ;)\n");
                        printf("Roll no: %d\n", st_arr[i].roll_no);
                        printf("Name: %s\n", st_arr[i].name);
                        for(int j = 0; j < n_st; j++)
                        {
                            printf("%s: %d\n", st_arr[i].sub_arr[j].name, st_arr[i].sub_arr[j].marks);
                        }
                        printf("Grade: %c\n", st_arr[i].grade);
                        break;
                    }
                }
                if(res == 0)
                {
                    printf("We couldn't find your guy :(\n");
                }
                break;

                default:
                break;
            }
            break;

            default:
            break;
        }

        printf("Do you want to continue (y/n)\n");
        scanf("%c", &key);
        __fpurge(stdin);
    }

    return 0;
}























