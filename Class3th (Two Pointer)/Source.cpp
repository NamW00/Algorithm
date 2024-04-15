#include <iostream>

#define SIZE 6

using namespace std;

int main()
{
#pragma region 투 포인터
	// 두 개의 포인터를 두고 값들을 비교하여
	// 문제를 해결하는 알고리즘입니다.
	// 원하는 값은 M이라고 잡고 start, end를 인덱스 0번째 값으로 설정해 놓는다.
	// 여기서 부분합 sum은 start와 end가 가리키는 값의 합을 가리킨다.
	//	int count = 0;
	//	int sum = 0;
	//	int start = 0;
	//	int end = 0;
	//	int M = 5;
	//	int arr[SIZE] = { 2, 3, 1, 4, 2, 5 };
	//	// start값이 end값보다 크다면 반복문이 종료가 되어야한다.
	//	
	//	while (start <= end)
	//	{	
	//		// 1. 현재 부분합이 M이상이면 start를 1씩 증가합니다.
	//		if (sum >= M)
	//		{
	//			sum -= arr[start++];
	//		}
	//		else if (end >= SIZE)
	//		{
	//			break;
	//		}	
	//		// 2. 현재 부분합이 M미만이면 end를 1씩 증가합니다.
	//		else
	//		{
	//			sum += arr[end++];
	//		
	//		}
	//		// 3. 현재 부분합이 M과 같다면 count값을 증가시킵니다.
	//		if (sum == M)
	//		{
	//			count++;
	//		}
	//	}
	//	
	//	std::cout << "Value of Count : " << count << endl;
#pragma endregion

#pragma region 최소공배수
	//	int a;
	//	int b;
	//	int count = 1;
	//	
	//	cout << "A, B값을 입력하시오 : ";
	//	cin >> a >> b;
	//	
	//	for (int i = 2; i <= b; i++)
	//	{
	//		if (a % i == 0 && b % i == 0)
	//		{
	//			count *= i;
	//			a /= i;
	//			b /= i;
	//			i--;
	//		}
	//	}
	//	
	//	cout << "최소공배수 : " << count * a * b << endl;
#pragma endregion

	return 0;
}