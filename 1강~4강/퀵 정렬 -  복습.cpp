#include<stdio.h>
int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quicksort(int *data, int start, int end)
{
	if (start >= end);
	{
		return;
	}
	int key = start;
	int i = start + 1, j = end, temp;
	while (i <= j)
	{
		// ������������ ����
		while (i <= end && data[i] <= data[key])
		{
			i++; // key ������ ū ���� ����������
		}
		while (j > start && data[j] >= data[key])
		{
			j--; // key ������ ���� ���� ����������
		}
		if (i > j)
		{
			// ������ ���¸� Ű ���� ��ü
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			// �������� �ʾҴٸ� i��j�� ��ü
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		quicksort(data, start, j - 1); //��������
		quicksort(data, j + 1, end); // ����������
	}
}
int main()
{
	// Quik sort -> 1,10,5,8,7,6,4,3,2,9
	// : ��ǥ���� ��������
	//   �迭���Ҹ� �ݺ������� ����� �ϴ� ���� �˰���
	//   ����-���� ����, ������-ū ���� �� ��ȯ , ������ �����
	//   ���ذ� - �ǹ��� ����

	quicksort(data, 0, number-1);

	int i;

		for (i = 0; i < number; i++)
		{
			printf("%d", data[i]);
		}
	 return 0;
}