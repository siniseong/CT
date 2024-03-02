#include <stdio.h>
#include <string.h>
int count_vowels(const char *str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); ++i)
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    char str[51];
    int n;
    scanf("%d", &n);
    scanf("%s", str);
    printf("%d\n", count_vowels(str));

    return 0;
}
