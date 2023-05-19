#include <stdio.h>
 
 
int main(){
 
    int a[50];
    int b[50];
    char c[50][50] = {};
    
    int d;
    scanf("%d",&d);
    
    for(int i = 0; i < d; i++){
        scanf("%s %d",c[i],&a[i]);
        b[i] = a[i];
    } 
    
    int temp =0 ;
    for(int i = 0 ; i < d-1 ; i ++) {
        for(int j = i+1 ; j < d ; j ++) {
            if(b[i] < b[j]) {
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    
    for(int i = 0 ; i <  d ; i ++) {
        if(a[i] == b[2]){
            printf("%s",c[i]);
        }
    }
    
    return 0;
    
 
}
