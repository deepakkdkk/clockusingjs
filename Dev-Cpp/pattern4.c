#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if ((j >= n - i + 1) && (j <= n + i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("This output belongs to your 2K20/B10/14 and Deepak ");
    return 0;
}
