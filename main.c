#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    ST *head = NULL;
    int  op;

    load(&head);

    while(1)
    {
        printf("\n----------------------------------");
        printf("\n        STUDENT RECORD MENU       ");
        printf("\n----------------------------------");
        printf("\n	  1 : Add New Record        ");
	printf("\n----------------------------------");
        printf("\n	  2 : Delete a Record       ");
	printf("\n----------------------------------");
        printf("\n	  3 : Show the List         ");
	printf("\n----------------------------------");
        printf("\n	  4 : Modify a Record       ");
	printf("\n----------------------------------");
        printf("\n	  5 : Save                  ");
	printf("\n ---------------------------------");
        printf("\n	  6 : Sort the List         ");
	printf("\n ---------------------------------");
        printf("\n	  7 : Exit                  ");
        printf("\n----------------------------------");
        printf("\nEnter Your Choice : ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                add(&head);
                break;

            case 2:
                del(&head);
                break;

            case 3:
                show(head);
                break;

            case 4:
                mod(head);
                break;

            case 5:
                save(head);
                break;

            case 6:
                sort(head);
                break;

            case 7:
            {
                int opt;

                printf("\n1 : Save and Exit");
                printf("\n2 : Exit Without Saving");
                printf("\nEnter Choice : ");
                scanf(" %d",&opt);

                if(opt==1)
                {
                    save(head);
                }

                printf("\nThank You...\n");
                exit(0);
            }

            default:
                printf("\nInvalid Choice...\n");
        }
    }

    return 0;
}
