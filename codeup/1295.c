#include<stdio.h>
 
 
int main(){
    char txt[1000] = {};
    char trans_txt[1000] = {};
    scanf("%s",txt);
    for (int i = 0; txt[i] != '\0'; i++) {
        
        if(txt[i]>=65 && txt[i]<=90){ //소문자면
            trans_txt[i] = txt[i] + 32;
        }
        else if(txt[i] >= 97 && txt[i] <=122){ //대문자면
            trans_txt[i] = txt[i] - 32;
        }
        else{
            trans_txt[i] = txt[i];
        }
        
    }
    printf("%s", trans_txt);
    return 0;
}

