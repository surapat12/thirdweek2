#include<stdio.h>
int main()
{
	int sum = 0;
	int y = 1;
	int x = 1;
	printf("Enter the number : ");
	scanf_s("%d", &x);
	while (y <= x)
	{
		if (x % y == 0)
		{
			sum = sum + y;
			printf("+ %d ", y);


		}
		y++;
	}
	printf("= %d", sum);





	return 0;
}