#include <iostream>
#include <string>
using namespace std;

#define SIZE 5

int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 직접 비교하지 않고, 단순하게
	// 각 숫자가 몇 개 있는지 개수를 세어 저장한 다음
	// 정렬하는 알고리즘 입니다.
	
	//	int arr[] = {1,2,3,4,1,1,5};
	//	int countList[SIZE] = {0,};
	//	int count = 0;
	//	int size = sizeof(arr) / sizeof(arr[0]);
//	
	//	for (int i = 1; i <= size; i++)
	//	{
	//		count = 0;
	//		for (int j = 0; j < SIZE; j++)
	//		{
	//			if (arr[j] == i)
	//			{
	//				count++;
	//			}
	//			countList[i-1] = count;
	//		}
	//		cout << i << "의 개수 : " << count << endl;
	//	}
	//	
	//	cout << "결과 값 : ";
	//	for (const int & element : countList)
	//	{
	//		cout << element << " ";
	//	}
	//	cout << endl;
#pragma endregion
#pragma region 문자열 뒤집기
	//  string content = "Yellow";
//  
	//  for (int i = 0; i <= content.length()/2; i++)
	//  {
	//  	std::swap(content[i],content[SIZE -i -1]);
	//  }
	//  
	//  cout << "결과 값: ";
	//  for (int i = 0; i < SIZE; i++)
	//  {
	//  	cout << content[i] << " ";
	//  }
#pragma endregion
	return 0;
}