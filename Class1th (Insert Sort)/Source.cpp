#include<iostream>
#include<string>

#define SIZE 5

using namespace std;

int main()
{
#pragma region ��ǰ ���� (Bubble Sort)
	// ���� ������ �� ���Ҹ� �˻��Ͽ� �����ϴ� �˰��� �Դϴ�.

	// ��ǰ ������ �ð� ���⵵�� O(n^2)�Դϴ�.

	// 1ȸ�� -> n�� ��ŭ �ݺ�
	// 2ȸ�� -> n-1�� ��ŭ �ݺ� 
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
	// 	cout << count << "ȸ��" <<  endl;
	// 	cout << "��� �� : ";
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		cout << arr[i] << " ";
	// 	}
	// 	cout << endl;
	// }
#pragma endregion
#pragma region ���� ����(Selection Sort)
	// �־��� ����Ʈ �߿� �ּҰ��� ã�Ƽ� �� �տ� ��ġ�� ����
	// ��ü�ϴ� ������� �����ϴ� �˰����Դϴ�.

	// ���� ������ �ð� ���⵵�� O(n^2)�Դϴ�.
	//	int count = 1;
	//	int min, minIndex = 0;
	//	int arr[SIZE] = { 2, 11, 21, 7, 1 };
	//	
	//	for (int i = 0; i < SIZE ; i++)
	//	{
//	
	//		min = arr[i];
	//		minIndex = i;
	//		
	//		for (int j = i + 1; j < SIZE; j++)
	//		{
//	
	//			if (arr[j] < min)
	//			{
	//				min = arr[j];
	//				minIndex = j;
	//			}
	//			
	//		}
	//		std::swap(arr[i], arr[minIndex]);
	//		
	//		cout << count << "ȸ��" << endl;
	//		cout << "��� �� : ";
	//		for (const int&element: arr)
	//		{
	//			cout << element << " ";
	//		}
	//		cout << endl;
	//		count++;
	//	}

#pragma endregion
#pragma region ���� ���� (Insert Sort)
	// data�� �ϳ��� Ȯ���ϸ鼭 �̹� ���ĵ� �κа� ���Ͽ�
	// �ڽ��� ��ġ�� ã�� �����ϴ� ������� �����ϴ� �˰��� �Դϴ�.
	// �ð� ���⵵�� O(n^2) �Դϴ�.
	int key = 0;
	int count = 1;
	int j = 0;

	int arr[SIZE] = { 9, 6, 8, 1, 3 };

	for (int i = 1; i < SIZE; i++)
	{
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
		cout << "ȸ�� �� : " << count << endl;
		cout << "��� �� : ";
		for (const int& element : arr)
		{
			cout << element << " ";
		}
		cout << endl;
		count++;
	}
#pragma endregion
	return 0;
}