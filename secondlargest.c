#include <stdio.h>
int main()
{
	int n, i;
	float firstmax, secondmax=0;
	printf("�迭�� ũ�⸦ �Է��ϼ���:");
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
	printf("���� ū ���� %f�̸� �ι�°�� ū ���� %f�Դϴ�.\n",firstmax,secondmax);
	return 0;
}

	