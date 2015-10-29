#include <stdio.h>

int main()

{
	int a,b,c,d,e,f,g;
	
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		for(c=0;c<=b;c++)
		{
			d=a+d;
			e=d/a-1;
			f=e%10;
			printf("%d", f);
		}
		printf("\n");
	}
	
	
	
return 0;
}
