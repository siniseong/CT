#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d",&a,&b);

    if(a>b)
        for(int i = b; i<=a; i++){
            printf("%d ",i);
        }

    if(a<=b)
        for(int i = a; i < b+1; i++){
            printf("%d ",i);
        }

}
