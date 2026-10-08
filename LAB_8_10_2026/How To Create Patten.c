#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter Size N:- ");
    scanf("%d",&N);

    printf("Square Pattern Of Size %d is\n",N);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
