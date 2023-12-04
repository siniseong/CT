#include <stdio.h>
int main() {
    char a, b;
    scanf("%c %c",&a,&b);

    for(char i = a; i<=b; i++){
        printf("%c ",i);
    }
}
