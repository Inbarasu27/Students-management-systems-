#include <string.h>
#include "student.h"

void sort_roll(ST *);
void sort_name(ST *);
void sort_percentage(ST *);

void sort(ST *ptr)
{
    int ch;

    printf("\n1 : Sort by Roll Number");
    printf("\n2 : Sort by Name");
    printf("\n3 : Sort by Percentage");
    printf("\nEnter Your Choice : ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            sort_roll(ptr);
            break;

        case 2:
            sort_name(ptr);
            break;

        case 3:
            sort_percentage(ptr);
            break;

        default:
            printf("Invalid Choice\n");
    }
}

void sort_roll(ST *ptr)
{
    ST *arr[100], *temp;
    int i, j, n = 0;

    while(ptr != NULL && n < 100)
    {
        arr[n++] = ptr;
        ptr = ptr->next;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i]->roll > arr[j]->roll)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted by Roll Number\n");
    printf("\nRoll\tName\tPercentage\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n",
               arr[i]->roll, arr[i]->name, arr[i]->per);
}

void sort_name(ST *ptr)
{
    ST *arr[100], *temp;
    int i, j, n = 0;

    while(ptr != NULL && n < 100)
    {
        arr[n++] = ptr;
        ptr = ptr->next;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(strcmp(arr[i]->name, arr[j]->name) > 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted by Name\n");
    printf("\nRoll\tName\tPercentage\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n",
               arr[i]->roll, arr[i]->name, arr[i]->per);
}

void sort_percentage(ST *ptr)
{
    ST *arr[100], *temp;
    int i, j, n = 0;

    while(ptr != NULL && n < 100)
    {
        arr[n++] = ptr;
        ptr = ptr->next;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i]->per < arr[j]->per)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted by Percentage\n");
    printf("\nRoll\tName\tPercentage\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n",
               arr[i]->roll, arr[i]->name, arr[i]->per);
}
