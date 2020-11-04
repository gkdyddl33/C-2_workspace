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
		// 오름차순으로 정렬
		while (i <= end && data[i] <= data[key])
		{
			i++; // key 값보다 큰 값을 만날때까지
		}
		while (j > start && data[j] >= data[key])
		{
			j--; // key 값보다 작은 값을 만날때가지
		}
		if (i > j)
		{
			// 엇갈린 상태면 키 값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			// 엇갈리지 않았다면 i와j를 교체
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		quicksort(data, start, j - 1); //왼쪽정렬
		quicksort(data, j + 1, end); // 오른쪽정렬
	}
}
int main()
{
	// Quik sort -> 1,10,5,8,7,6,4,3,2,9
	// : 대표적인 분할정복
	//   배열원소를 반복적으로 나누어서 하는 빠른 알고리즘
	//   왼쪽-작은 숫자, 오른쪽-큰 숫자 로 교환 , 반으로 나누어서
	//   기준값 - 피벗값 존재

	quicksort(data, 0, number-1);

	int i;

		for (i = 0; i < number; i++)
		{
			printf("%d", data[i]);
		}
	 return 0;
}