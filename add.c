#include "student.h"
static int roll;
void set_roll(ST *p){
	int max=0;
	while(p!=NULL){
		if(p->roll>max)
			max=p->roll;
		p=p->next;
	}
	roll=max+1;
}

void add(ST **ptr)
{
	int op;
	do{
    ST *temp, *p;
    ST **last;
    set_roll(*ptr);

    temp = (ST *)malloc(sizeof(ST));

    while(1)
    {
        p = *ptr;

        while(p)
        {
            if(p->roll == roll)
                break;

            p = p->next;
        }

        if(p == NULL)
            break;

        roll++;
    }

    temp->roll = roll;

    printf("Enter Name : ");
    scanf("%s", temp->name);

    printf("Enter Percentage : ");
    scanf("%f", &temp->per);

    temp->next = NULL;
    last = ptr;

    while(*last!=NULL)
	    last=&(*last)->next;
    *last=temp;
    printf("\n----------------------------------\n");
    printf("\t1 . Add student\n\t2 . HOME");
    printf("\n----------------------------------\n");
   printf("Enter Your Choice: ");
   scanf("%d",&op);
	}while(op==1); 
}
