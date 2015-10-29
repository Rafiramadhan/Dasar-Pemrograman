#include <stdio.h>
#include <math.h>
int main()

{
	int a,c;
	int b;
	scanf("%d", &a);
	c=(1/2);
	//b=pow(a,c);
	b=1;
	while(b<a)
	{
		b=b*2;
	}
	//printf("%d", b);
	
	if(a==b)
	{
		printf("ya\n");
	}
	else
	{
		printf("bukan\n");
	}
	
	
	
return 0;
}
