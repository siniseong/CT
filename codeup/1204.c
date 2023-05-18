#include <stdio.h>
int main (void)
{
    
    int num;
    scanf("%d",&num);
    printf("%d",num);
    if(num%10 == 1){
        if(num == 11){printf("th");}
        else{printf("st");}
    }
    else if(num%10 == 2){
        if(num == 12){printf("th");}
        else{printf("nd");}
    }
    else if(num%10 == 3){
        if(num == 13){printf("th");}
        else{printf("rd");}
    }
    else{ printf("th");}
 
    return 0;
}