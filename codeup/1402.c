#include <stdio.h>

int main()
{
    int a;
    int buf[1000]={};
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&buf[i]);
    }
    for(int x=a-1;x>=0;x--){
        printf("%d ",buf[x]);
    }
}
