#include<stdio.h>
 
 
int main(){
    
 
        
    int Arr_Card[50] = {};
    int a;
    
    scanf("%d",&a);
    
    for(int i = 0; i<a; i++){
        Arr_Card[i] = i+1;
    }
    
    int b;
    for(int j = 0; j<a - 1; j++){
        scanf("%d",&b);
        Arr_Card[b-1] = 0;
    }
    
    for(int k = 0; k<a; k++){
        if(Arr_Card[k] != 0){
            printf("%d",Arr_Card[k]);
        }
    }
    
 
    return 0;
    
 
}