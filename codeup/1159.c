#include<stdio.h>
 
int main(void)
{
    int num;
    scanf("%d",&num);
    if((num>=50 && num <=70) || (num%6 == 0)) printf("win");
    else printf("lose");
 
    return 0;
}
