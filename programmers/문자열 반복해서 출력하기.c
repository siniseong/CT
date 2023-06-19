#include <stdio.h>
int main()
{
    char str[11]={};
    int n;
    scanf("%s",&str);
    scanf("%d",&n);
    n>=1 && n<=5;
    for(int i = 0; i<n; i++)
    {
        printf("%s",str);
    }
}