#include <stdio.h>
 
int main()
{
    int a[100][100] = {};  
    
    int h,w,n,l,d,x,y;
    
    scanf("%d %d",&h,&w); 
    scanf("%d",&n);       
    
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d %d",&l,&d,&x,&y); 
        if(d == 0){
            for(int j = 0; j<l; j++){
                a[x][y+j] = 1;
            }
        }
        else{
            for(int j = 0; j<l; j++){
                a[x+j][y] = 1;
            }
        }
    }
    
    for (int i = 1; i <= h; i++) 
    {
        for (int j = 1; j <= w; j++) 
        {
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }
    
    return 0;
}