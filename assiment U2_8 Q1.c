#include<stdio.h>
int main()
{
	int m=29;
	printf("Address of m : %d\n",&m);
		printf("Value of m : %d\n\n",m);
	int *ab=&m;
        printf("Now ab is assigned with the address of m.\n\nAddress of pointer ab : %d \n",ab);
            printf("Content of pointer ab : %d\n\n",*ab);
    m=34;
        printf(" The value of m assigned to 34 now.\n\nAddress of pointer ab : %d \n",ab);
            printf("Content of pointer ab : %d\n\n",*ab);
    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now.\n\nAddress of m : %d\n",&m);
		printf("Value of m : %d",m);
}
