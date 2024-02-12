#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define MAX_SIZE 30000

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int T, n, count = 0, prime_count = 0;
    int primes[MAX_SIZE], super_primes[MAX_SIZE];

    for (int i = 2; count < MAX_SIZE; i++)
    {
        if (is_prime(i))
        {
            primes[count++] = i;
        }
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (is_prime(i + 1))
        {
            super_primes[prime_count++] = primes[i];
        }
    }

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        printf("%d\n", super_primes[n - 1]);
    }

    return 0;
}
