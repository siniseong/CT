#include <stdio.h>

int main(void)
{
    char txt[30] = "";
    scanf("%s", txt);
    for (int i = 0; txt[i] != '\0'; i++)
    {
        printf("\'%c\'\n", txt[i]);
    }
    return 0;
}
