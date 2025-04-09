#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            printf("Got the number - %d", i);
            break; // when i will be 5 the loop will be end
        }
    }

    return 0;
}