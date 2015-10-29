#include <stdio.h>

int main ()

{
	int a;
	scanf ("%d", &a);
	if (a>=1)
	{
		printf("positif\n");
	}
	else 
	{
		if (a==0)
		{printf ("nol\n");
		}
		if (a<0)
		{printf ("negatif\n");
		}
	}
	
	
return 0;
}
