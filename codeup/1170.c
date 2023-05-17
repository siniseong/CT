#include <stdio.h>
int main()
{
    int a,b,c;
    a<=3;
    b<=6;
    c<=30;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d%d",a,b);
    if(c<=10){
        printf("0%d",c);
    }
    else {
        printf("%d",c);
    }
    
}