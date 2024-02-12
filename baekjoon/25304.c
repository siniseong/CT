#include <stdio.h>

int main()
{
    int X, N, a, b, c = 0;

    scanf("%d\n%d", &X, &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);

        c += (a * b);
    }

    if (X == c)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
