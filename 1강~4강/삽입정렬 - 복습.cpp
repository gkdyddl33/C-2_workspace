#include<stdio.h>

int main()
{
	// (1)insertion sort -> 1,10,5,8,7,6,4,3,2,9
	// : �� ���ڸ� ������ ��ġ�� �����ϴ� ���
	//   ���� �迭�� �ʿ��� ���� ��ġ�� �ٲ۴�.

	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
	}

	// (2)insertion sort -> 10(�Է�) : 26 5 37 1 61 11 59 15 48 19
	int n;
	int array[101];

	int i, j, temp, n;
	scanf("%d", &n); // n�� �����Է�
	for (i = 0; i < n; i++) // 10���� ���ڸ� �Է��Ѵ�
	{
		scanf("%d", &array[i]);
	}
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j > 0 && array[j - 1] > array[j]) // ��������
		{
			temp = array[j - 1];
			array[j - 1] = array[j];
			array[j] = temp;
			j--;
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d", array[j]);
		}
		printf("\n");
	}

	return 0;
}