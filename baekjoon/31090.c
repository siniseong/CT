#include <stdio.h>

int check_good_bye(int n)
{
    int last_two_digits = n % 100;

    if ((n + 1) % last_two_digits == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        if (check_good_bye(N))
        {
            printf("Good\n");
        }
        else
        {
            printf("Bye\n");
        }
    }

    return 0;
}
