#include "stdio.h"
 
int main()
{
    int matrix[11][11] = {};  //[세로][가로]
    for(int j = 1; j<=10; j++ ){
        for(int i = 1; i<=10; i++ ){
            scanf("%d ",&matrix[j][i]);
        }
    }
    int x,y;
    x = 2;
    y = 2;
    
    while(1){
 
        
        if(matrix[x][y] == 0){
            matrix[x][y] = 9;
            y ++;
        }
        if(matrix[x][y] == 1){
            y --;
            x++;
        }
        
        if(matrix[x][y] == 2){
            matrix[x][y] = 9;
            break;
        }
        else if(matrix[x][y+1] == 1 && matrix[x+1][y] == 1){
            if(matrix[x][y] == 0){
                matrix[x][y] = 9;
            }
            break;
        }
        
        
 
        
    }
    
    for(int i = 1; i <= 10; i++){
        for(int j =1; j <= 10; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
 
