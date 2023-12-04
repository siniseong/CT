#include<stdio.h>
 
 
int main(){
    
    int buf[10] = {};
    
    for (int i = 0; i<10; i++){
        scanf("%d",&buf[i]);
    }
    
    int a;
    scanf("%d",&a);
    
    printf("%d",buf[a-1]);
    
    return 0;
  
    
 
}
