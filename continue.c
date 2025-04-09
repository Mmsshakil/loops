#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 5)
        {
            printf("skip the value\n");
            continue; // when the value of i will be 5, loop will skip the value
        }
        printf("%d\n", i);
    }

    return 0;
}