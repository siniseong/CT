#include "stdio.h"
 
 
int main()
{
    int Arr[1000] = {};
    int N;
    
    scanf("%d",&N);
    for(int i = 0; i< N; i++){
        scanf("%d",&Arr[i]);
    }
    for(int x = 0; x< N; x++){
        printf("%d: ",x+1);
        for(int j = 0; j < N; j++){
            if(x != j){
                if(Arr[x] > Arr[j]){printf("> ");}
                else if(Arr[x] < Arr[j]){printf("< ");}
                else{printf("= ");}
            }
        }
        printf("\n");
    }
 
    return 0;
}