#include <stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);

    int sum = 0;
    for(int i = 1; i<=a; i++){
        scanf("%d",&b);
        if(b%5 == 0) {
            sum += b;
        }
    }
    printf("%d",sum);
}
