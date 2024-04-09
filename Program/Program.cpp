#include<iostream>
#include<string>

#define SIZE 5
using namespace std;


int main()
{
#pragma region 거품 정렬 (Bubble Sort)
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘 입니다.

	// 거품 정렬의 시간 복잡도는 O(n^2)입니다.

	// 1회전 -> n번 만큼 반복
	// 2회전 -> n-1번 만큼 반복 
	// int count = 0;
	// int arr[SIZE] = { 1, 7, 3, 9, 2 };
	// 
	// 
	// for (int i = 0; i < SIZE - 1; i++) 
	// {
	// 	for (int j = 0; j < SIZE - i - 1; j++) 
	// 	{
	// 		if (arr[j] > arr[j + 1]) 
	// 		{
	// 			std::swap(arr[j], arr[j + 1]);
	// 		}
	// 	}
	// 	count++;
	// 	
	// 	cout << count << "회전" <<  endl;
	// 	cout << "결과 값 : ";
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		cout << arr[i] << " ";
	// 	}
	// 	cout << endl;
	// }
#pragma endregion
#pragma region 선택 정렬(Selection Sort)
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한 값과
	// 교체하는 방식으로 정렬하는 알고리즘입니다.
	
	// 선택 정렬의 시간 복잡도는 O(n^2)입니다.
	int min, minIndex = 0;
	int count = 1;
	int arr[SIZE] = { 2, 11, 21, 7, 1 };
	

	for (int i = 0; i < SIZE ; i++)
	{
		min = arr[i];
		minIndex = i;
		

		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				minIndex = j;
			}
			
		}
		std::swap(arr[i], arr[minIndex]);
		
		cout << count << "회전" << endl;
		cout << "결과 값 : ";
		for (const int&element: arr)
		{
			cout << element << " ";
		}
		cout << endl;
		count++;
	}
	
#pragma endregion

	
}

