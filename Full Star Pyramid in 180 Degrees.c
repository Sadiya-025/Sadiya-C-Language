//Full Star Pyramid in 180 Degrees
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the No. of Columns you Wish to Print:\n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--)
    {
        for (j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

