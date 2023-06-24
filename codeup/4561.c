#include <stdio.h>
 
int main() {
    int inputNumber[7];
    int sum = 0, minNumber = 100;
    int cnt = 0;
    for(int i=0; i<7; i++){
        scanf("%d", &inputNumber[i]);
        if(inputNumber[i] % 2 == 1){
            sum += inputNumber[i];
            if(minNumber > inputNumber[i]){
                minNumber = inputNumber[i];
            }
        }else{
            cnt++;
            if(cnt == 7){
                sum = -1;
            }
        }
    }
    printf("%d\n%d", sum, minNumber);
    
    return 0;
}
