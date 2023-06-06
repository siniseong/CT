#include<stdio.h>
 
int main(){
 
    int a,b;
    int arr[10000000] = {};
    int c;
 
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &c);
        arr[c] = 1;
    }
    
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &c);
        printf("%d ", arr[c]);
    }
    
 
    return 0;
    
 
}