#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[30];
    float per;
    struct student *next;
}ST;

void add(ST **);
void del(ST **);
void show(ST *);
void mod(ST *);
void sort(ST *);
void save(ST *);
void load(ST **);
