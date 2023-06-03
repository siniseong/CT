#include<stdio.h>

int f(int n){
	if(n==0){return n;}
	printf("%d\n",n);
	n--;
	f(n);
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
}