﻿#include <iostream>

using namespace std;

#define SIZE 8

void QuickSort(int arr[], int start, int end)
{
	// 1. 종료 조건
	if (start >= end)
	{
		return;
	}
	
	// 2.  pivot 변수의 값을 설정합니다.
	int pivot = start;
	
	// 3. left 변수의 값을 설정합니다.
   	int left = start + 1;

	// 4. right 변수의 값을 설정합니다.
	int right = end;
	// 5. left가 right보다 값이 커지기 전까지 반복하면 된다.
	while (left <= right)
	{
		// 6. left의 값이 end보다 작거나 같고 list[left]가
		// 	  list[pivot]보다 작거나 같을 때 까지 반복합니다.
		while (left <= end && arr[pivot] >= arr[left])
		{
			left++;	
		}
		
		// 7. right의 값이 pivot보다 크면 right의 값을 감소시킵니다.
		while (right > start && arr[pivot] <= arr[right])
		{
			right--;
		}

		// 8. left의 값이 right보다 클 땐, list[pivot]과 list[right]의 값을 바꿉니다.
		if (left > right)
		{
			std::swap(arr[pivot], arr[right]);
		}
		// 9. left의 값보다 right값이 클 땐,arr[left]과 arr[right]의 값을 바꿉니다.
		else
		{
			std::swap(arr[left],arr[right]);
		}
	}

	// 10. 피벗을 기준으로 나누어진 두 배열에 대해
	// 	   재귀적으로 퀵정렬을 호출합니다.
	QuickSort(arr, start, right - 1);		
	QuickSort(arr, right + 1, end);	
}
int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 해당 기준점을 기준으로
	// 배열을 나누고 한 쪽에는 기준점보다 작은 값들이
	// 위치하고 다른 한 쪽에는 기준점보다 큰 값들이 위치하도록 합니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵정렬을 호출하여 
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬하는 알고리즘 입니다.
	
	// 퀵 정렬은 평균적으로 O(n log n)의 시간 복잡도를 가지며
	// 최악의 경우 O(n^2)의 시간 복잡도를 가집니다.
#pragma endregion
	int arr[SIZE] = {5, 9, 6, 2, 1, 3, 4, 7};

	QuickSort(arr, 0, SIZE-1); 

	for (const int&element : arr)
	{
		cout << element << " ";
	}
	

	return 0;
}