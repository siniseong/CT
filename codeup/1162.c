#include <stdio.h>
 
 
int main (void)
{
    
    int a,b,c, d;
    scanf("%d %d %d ",&a , &b, &c);
    d = a - b + c; 
    
    if( !(d%=10) ){printf("대박");} 
    else {printf("그럭저럭");}
 
    return 0;
}
