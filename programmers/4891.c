#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int score[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &score[i]);
    }
    for(int i=0; i< n-1; i++){
        for(int j=0; j< n-1;j++){
            if(score[j] > score[j+1]){
                int temp;
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }
    printf("%d\n", score[n-1]-score[0]);
    return 0;
}