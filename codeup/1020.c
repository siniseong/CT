#include <stdio.h>

int main(void)
{
    int front_num, rear_num;
    scanf("%d-%d", &front_num, &rear_num);
    printf("%06d%07d", front_num, rear_num);

    return 0;
}