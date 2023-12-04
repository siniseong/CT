#include<stdio.h>
 
 
int main(){
 
    int n,m;
    scanf("%d %d", &n, &m);
    
    for(int i = n; i<= m; i++){
        for(int j = 1; j <=9; j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        
    }
 
    return 0;
}
