#include <stdio.h>
void f(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main()
{
	
	int a, b, c;
	scnaf("%d %d %d",&a,&b,&c);
	if (a>b)
		f(&a,&b);
	if (b>c)
		f(&b,&a);
		if (a>b)
		f(&a,&b);
		printf("%d %d %d",a,b,c);
}