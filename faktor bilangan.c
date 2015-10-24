#include<stdio.h>

int main()
{
	int a,b,c;
	
	scanf("%d", &b);
	for(a=b;a>0;a--)
	{
		if(b%a==0)
		{
		printf("%d\n",a);
		}
		else
		{
			printf("");
		}
	}
	
	
return 0;
}
