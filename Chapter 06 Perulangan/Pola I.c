#include <stdio.h>

int main()
{
	int a,b,c;
	scanf ("%d %d", &a,&b);
	
	for (c=1;c<=a;c++)
	{
			
		if(c%b==0)
		{
			printf("*");
		}
		else
		{
			printf("%d", c);
		}
		if(c!=a)
		{
		printf(" ");
		}

	}
	printf("\n");
	
	
return 0;
}
