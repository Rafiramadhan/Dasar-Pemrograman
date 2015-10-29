#include <stdio.h>
#include <math.h>

int main ()

{
	int a,b,c,d,e,f,g;
	scanf ("%d %d %d %d", &a,&b,&c,&d);
	
	e=fabs(c-a);
	f=fabs(d-b);
	g=e+f;
	printf ("%d\n", g);
	
	
	
return 0;
}
