#include<stdio.h>
int Q4()
{
    int number_elments;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",&number_elments);
    printf("Input %d number of elements in the array :\n",number_elments);
    int arr[number_elments];
    int i=0;
    for(;i<number_elments;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("\n");
    int *g;
    g=&arr[number_elments-1];
     for(;i>0;i--)
    {
        printf("element - %d : ",i);
        printf("%d\n",*g);
        g--;

    }

}
