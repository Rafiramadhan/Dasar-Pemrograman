#include <stdio.h>

int main()

{
	int a,b,c,d;
	
	scanf("%d", &a);
	for (b=0;b<a;b++)
	{
		for(c=0;c<=a-b-2;c++)
		{
			printf(" ");
		}
		for(d=0;d<=b;d++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
	
return 0;
}
