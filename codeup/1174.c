#include <stdio.h>

int main(){
    

int a,b;
scanf("%d %d",&a,&b);
a+=24;
b=b+a*60;
b-=30;
a = b/60;
a = a%24;
b = b%60;

printf("%d %d",a,b);
}