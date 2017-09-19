#include <stdio.h>
int main()
{
	int n, i;
	float firstmax, secondmax=0;
	printf("배열의 크기를 입력하세요:");
	scanf("%d", &n);
	float num[100];
	while (n > 100 || n <= 0)
		printf("Error has been occurred!\n");
	for (i = 0; i < n; i++)
	{
		printf("%d.num[%d]:", i + 1, i);
		scanf("%f", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		firstmax = num[0];
		secondmax =num[1];
		
		if (firstmax < num[i])
		{
		   if (secondmax < firstmax)
			{
				secondmax = firstmax;
			}
		   firstmax = num[i];
			
		}

	}
	printf("가장 큰 수는 %f이며 두번째로 큰 수는 %f입니다.\n",firstmax,secondmax);
	return 0;
}

	