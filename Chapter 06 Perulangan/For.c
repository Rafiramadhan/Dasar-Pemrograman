#include <Stdio.h>

int main ()
{
	int a,b,c,d;
	d=0;
	scanf("%d", &a);
	
	for (b=0;b<a;b++)
	{
		scanf("%d",&c);
		d=d+c;
	}
	printf("%d\n", d);
	
	
	
return 0;
}
