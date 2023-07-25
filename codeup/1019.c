#include <stdio.h>
int main()
{
    int y;
    int m;
    int d;

    scanf("%d.%d.%d", &y, &m, &d);
    printf("%04d.%02d.%02d", y, m, d);

    return 0;
}