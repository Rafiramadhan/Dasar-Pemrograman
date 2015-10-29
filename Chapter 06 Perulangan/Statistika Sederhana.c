#include <stdio.h>

int main()

{
	int a,b,c,d,e;
	d=-100000;
	e=100000;
	
	scanf("%d",&a);
	
	for (b=0;b<a;b++)
	{
		scanf("%d",&c);
		
		if(c>=d)
		{d=c;
		}
		if(c<=e)
		{e=c;
		}
		
	}
	printf("%d %d\n", d, e);	
	
return 0;
}
