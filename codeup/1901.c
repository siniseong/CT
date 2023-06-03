#include <stdio.h>
void f(int n){
    if(n==0) return;
    f(n-1);
    printf("%d\n",n);
}
int main()
{
    int a;
    scanf("%d",&a);
    f(a);
}