#include <iostream>

using namespace std;


int main()
{
#pragma region 탐욕법 (Greedy)
	// 최적의 해를 구하는데에 사용되는 근사적인
	// 방법으로, 여러 경우 중 하나를 결정해야 할 때마다
	// 그 순간에 최적이라고 생각되는 것을 선택해 나가는
	// 방식으로 진행하여 최종적인 해답을 구하는 알고리즘입니다.

	// 1. 탐욕 선택 속성
	// 각 단계에서 '최선의 선택'을 했을 때 전체 문제에 대한
	// 최적의 해를 구할 수 있는 경우입니다.

	// 2. 최적 부분 구조
	// 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성'될
	// 수 있는 경우입니다.

	// Greedy Algorithm의 단계

	// 1. 문제의 최적해 구조를 결정합니다.

	// 2. 문제의 구조에 맞게 선택 절차를 정의합니다.

	// 3. 선택 절차에 따라 선택을 수행합니다.

	// 4. 선택된 해가 문제의 조건을 만족하는지 검사합니다.

	// 5. 조건을 만족하지 않으면 해당 해를 제외합니다.

	// 6. 모든 선택이 완료되면 해답을 검사합니다.

	// 7. 조건을 만족하지 않으면 해답으로 인정되지 않습니다.

	int rest = 0;
	int count_500 = 0;
	int count_100 = 0;
	int count_50 = 0;
	int count_10 = 0;
	int count = 0;

	cout << "보유금액을 입력하시오 : ";
	cin >> rest;
	cout << endl;

	while ((rest/10) != 0)
	{
		if (rest >= 500)
		{
			rest -= 500;
			count_500++;
			count++;
		}
		else if (rest >= 100)
		{
			rest -= 100;
			count_100++;
			count++;

		}
		else if (rest >= 50)
		{	
			rest -= 50;
			count_50++;
			count++;
		}
		else if (rest >= 10)
		{
			rest -= 10;
			count_10++;
			count++;
		}
	}
	
	cout << "나머지 거스름돈 값 : " << rest << endl;
	cout << "최적의 동전 개수 : " << count << endl;
	cout << "500원 : " << count_500 << endl;
	cout << "100원 : " << count_100 << endl;
	cout << "50원 : " << count_50 << endl;
	cout << "10원 : " << count_10 << endl;

#pragma endregion

	return 0;
}
