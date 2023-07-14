#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%2d%2d%2d-%1d%6d",&a,&b,&c,&d,&e);
    
    
    printf("19%02d/%02d/%02d",a,b,c);
    
    if(d%2==0 ? 'F' : 'M')
    printf(" %c",d==1||d==3 ? 'M':'F');
    
    
    
}