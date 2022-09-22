#include <stdio.h>
#include <math.h>
main()
{
	float x1, y1, x2, y2, x3, y3, c1, c2, c3;
	printf("A: x1 = ");
	scanf_s("%f", &x1); printf("y1 = "); scanf_s("%f", &y1);
	printf("B: x2 = ");
	scanf_s("%f", &x2); printf("y2 = "); scanf_s("%f", &y2);
	printf("C: x3 = ");
	scanf_s("%f", &x3); printf("y3 = "); scanf_s("%f", &y3);
	c1 = sqrt(x1 * x1 + y1 * y1);
	c2 = sqrt(x2 * x2 + y2 * y2);
	c3 = sqrt(x3 * x3 + y3 * y3);
	if (c1 < c2 && c1 < c3)
	{
		printf("\nPoint A is the closest\n");
	}
	else if (c2 < c1 && c2 < c3)
	{
		printf("\nPoint B is the closest\n");
	}
	else if (c3 < c1 && c3 < c2)
	{
		printf("\nPoint C is the closest\n");
	}
	else printf("Correct your points\n");
	return 0;
}
