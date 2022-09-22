#include <stdio.h>
int main()
{
	int num;
	printf("Input number\n");
		scanf_s("%d", &num);
		if (num > 4 || num < 0)
			printf("Incorrect number, please try again");
		if (num == 1)
		{
			printf("informatika\n");
			printf("english\n");
		}
		if (num == 2)
		{
			printf("informatika\n");
				printf("english\n");
		}
		if (num == 3)
		{
			printf("kulturologiya\n");
			printf("matematika\n");
			printf("english\n");
		}
		if (num == 4)
		{
			printf("kulturologiya\n");
			printf("matematika\n");
			printf("english\n");
		}
	return 0;
}