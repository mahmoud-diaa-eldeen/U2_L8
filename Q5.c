#include<string.h>
#include<stdio.h>
struct st
{
    char name[100] ;
    int id;
};
int Q5()
{
    struct st empl ={"Alex",1002};
    struct st *p;
    p=&empl;
    printf("Exmployee Name : %s\n",p->name);
    printf("Employee ID : %d",p->id);
}
