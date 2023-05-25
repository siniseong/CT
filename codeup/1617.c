#include <stdio.h>
int f(int a)
{
	int s = 0;
	while(a)
	{
		s = s * 10;
		s = s + a % 10;
		a = a/10; 
	}
	return s;
	
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a+f(a);
	if(b==f(b))
	printf("YES\n");
	else 
	printf("NO\n");
}