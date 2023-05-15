#include <stdio.h>


int main(){

    int a;
    int buf[1000] = {};

    scanf("%d",&a);

    for(int i =0; i<a; i++){
        scanf("%d", &buf[i]);
    }

    int b = 0;
    for(int k = 0; k < a; k++){
        b = k;
        for(int j = 0; j <a; j++){

            printf("%d ",buf[b]);
            b++;
            if(b == a){
                b = 0;
            }
        }
        printf("\n");
    }

    return 0;
}