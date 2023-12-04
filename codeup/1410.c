#include<stdio.h>
 
 
int main(){
    
 
        
    char buf[100001];
    
    gets(buf);
    int a = 0;
    int b = 0;
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '('){
            a++;
        }
        else if(buf[i] == ')'){
            b++;
        }
    }
    printf("%d %d",a,b);
    
 
    return 0;
    
 
}
