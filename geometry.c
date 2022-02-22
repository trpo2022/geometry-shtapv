#include <stdio.h>
#include <math.h>
int main()
{
	float x, y, z, s, p;
	printf("Enter circle x,y and radius: ");
	scanf(" circle(%f, %f, %f)", &x, &y, &z);
	if (z > 0)
	{
		s = M_PI * z * z;
		p = M_PI * z * 2;
		printf("Perimetr: %f\nS: %f\n", s, p);
	}
	return 0;
}
