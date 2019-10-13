#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	a=a*b*c;
	printf("%-.3f",a);
	return 0;
}
