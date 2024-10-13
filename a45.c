#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main()
{
	int key = 0, choice;
	void *ptr = malloc(8* sizeof(char));
	void *backup = ptr;
	int element;

	//flag declaration
	int c_flag1 = 0, c_flag2 = 0, s_flag = 0, i_flag = 0, f_flag = 0, d_flag = 0;

	while (key != 4)
	{
		//Menu
		__fpurge(stdin);

		printf("Menu\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice --> ");
		scanf("%d", &key);
		printf("\n");

		// Memory Available
		switch (key)
		{
			case 1:
				/* ADD ELEMENT */

				if (d_flag == 0)
				{
				 		// Memory Available
					printf("1. int\n2. char\n3. float\n4. short int\n5. double\nChoice --> ");
					scanf("%d", &choice);

					// clear stdin buffer
					__fpurge(stdin);
					printf("\n");

					// Type menu
					switch (choice)
					{
						case 1:
							/*int */

							// checking if memory is full or not
							if (i_flag == 0 && f_flag == 0)
							{
							 					// stdin int data
								printf("Enter int element\n");
								scanf("%d", (int*) ptr + 4);

								printf("Your element: %d\n\n", *((int*) ptr + 4));
								i_flag = 1;
							}
							else
							{
								printf("Memory full!!\n\n");
							}

							break;

						case 2:
							/*char */

							// memory check
							if (c_flag1 == 0)
							{
							 					// stdin char data in first block
								printf("Enter char data\n");
								scanf("%c", (char*) ptr);

								printf("Your element: %c\n\n", *((char*) ptr));
								c_flag1 = 1;
							}
							else if (c_flag2 == 0)
							{
							 					// stdin char data in second block
								printf("Enter char data\n");
								scanf("%c", (char*) ptr + 1);

								printf("Your element: %c\n\n", *((char*) ptr + 1));
								c_flag2 = 1;
							}
							else
							{
								printf("Memory full !! \n\n");
							}

							break;

						case 3:
							/*float */

							// checking if memory is full or not
							if (i_flag == 0 && f_flag == 0)
							{
							 					// stdin float data
								printf("Enter float element:\n");
								scanf("%f", (float*) ptr + 4);

								printf("Your element: %f\n\n", *((float*) ptr + 4));
								f_flag = 1;
							}
							else
							{
								printf("Memory full!!\n\n");
							}

							break;

						case 4:
							/*short int */

							// checking if memory is full or not
							if (s_flag == 0)
							{
							 					// stding short in data
								printf("Enter short int element:\n");
								scanf("%hd", (short*) ptr + 2);

								printf("Your element: %hd\n\n", *((short*) ptr + 2));
								s_flag = 1;
							}
							else
							{
								printf("Memory full!!\n\n");
							}

							break;

						case 5:
							/* double */

							// check memory
							if (i_flag == 0 && f_flag == 0 && c_flag1 == 0 && c_flag2 == 0 && s_flag == 0)
							{
							 					// stdin double data
								printf("Enter double element\n");
								scanf("%lf", (double*) ptr);

								printf("Your element: %lf\n\n", *((double*) ptr));
								d_flag = 1;
							}
							else
							{
								printf("Memory full!!\n\n");
							}
					}
				}
				else
				{
				 		// Out of memory
          printf("Memory Full!!\n\n");
				}

				break;

			case 2:
				/* REMOVE ELEMENT */
        if(d_flag + c_flag1 + c_flag2 + s_flag + i_flag + f_flag == 0)
        {
          printf("No elements present \n\n");
          break;
        }
				if (d_flag)
				{
					printf("(double) 0 -> %lf\n", *((double*) ptr));
				}
        if(i_flag)
        {
					printf("(int) 4 -> %d\n", *((int*) ptr + 4));
        }
        if(f_flag)
        {
					printf("(float) 4 -> %f\n", *((float*) ptr + 4));
        }
        if(s_flag)
        {
					printf("(short int) 2 -> %hd\n", *((short*) ptr + 2));
        }
        if(c_flag1)
        {
					printf("(char) 0 -> %c\n", *((char*) ptr));
        }
        if(c_flag2)
        {
					printf("(char) 1 -> %c\n", *((char*) ptr + 1));
        }
        printf("Choice -->");
        scanf("%d", &element);
        printf("\n");
        switch (element)
          {
            case 0:
            if(d_flag) // reomove double element
            {
              d_flag = 0;
            }
            else if(c_flag1) // remove first char element
            {
              c_flag1 = 0;
            }
              else
            {
              printf("No index found\n\n");
              break;
            }
            printf("Index 0 succesfully deleted\n\n");
            break;

            case 1:
              if(c_flag2) // remove second char el
              {
                c_flag2 = 0;
                printf("Index 1 succesfully deleted\n\n");
              }
              else
              {
                printf("No index found\n\n");
              }
            break;

            case 2:
              if(s_flag) // remove short element
              {
                s_flag = 0; 
                printf("Index 2 succesfully deleted\n\n");
              }
              else
              {
                printf("No index found\n\n");
              }
            break;

            case 4:
            if(i_flag) // remove int element
            {
              i_flag = 0; 
              printf("Index 4 succesfully deleted\n\n");
            }
            else if(f_flag) // remove float element
            {
              f_flag = 0;
              printf("Index 4 succesfully deleted\n\n");
            }
              else
            {
              printf("No index found\n\n");
            }
            break;

            default:
            printf("Invalid index\n\n");
            break;
          }

				break;

			case 3:
				/* DISPLAY ELEMENT */
        if(d_flag + c_flag1 + c_flag2 + s_flag + i_flag + f_flag == 0)
        {
          printf("No elements present \n\n");
          break;
        }
				if (d_flag)
				{
					printf("0 -> %lf\n", *((double*) ptr));
				}
        if(i_flag)
        {
					printf("4 -> %d\n", *((int*) ptr + 4));
        }
        if(f_flag)
        {
					printf("4 -> %f\n", *((float*) ptr + 4));
        }
        if(s_flag)
        {
					printf("2 -> %hd\n", *((short*) ptr + 2));
        }
        if(c_flag1)
        {
					printf("0 -> %c\n", *((char*) ptr));
        }
        if(c_flag2)
        {
					printf("1 -> %c\n", *((char*) ptr + 1));
        }
        printf("\n");
				break;

			case 4:
				/* EXIT FROM PROGRAM */ 
				return 0;
				break;

			default:
				break;
		}
	}

	free(ptr);

	return 0;
}
