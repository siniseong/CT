#include <stdio.h>
int main()
{
    int n;
    n>=1 && n<=1000;
    scanf("%d",&n);
    if(n%2==0)printf("%d is even",n);
    else if (n%2!=0 || n==1)printf("%d is odd",n);
}