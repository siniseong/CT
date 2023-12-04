#include<stdio.h>
 
int main(){
    
    int n;
    scanf("%d",&n);
    int m = 0;
    while(n != 0){
        n = n/10;
        m++;
    }
 
    printf("%d",m);
    return 0;
}
