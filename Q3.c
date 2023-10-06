#include<string.h>
int Q3()
{
    int i=0;
char s[100];
printf("Input a string : ");
gets(s);
char *p=&s;
p+=strlen(s);
printf("Reverse of the string is : ");
for(;i<=strlen(s);i++)
{printf("%c",*p);p--;}
}
