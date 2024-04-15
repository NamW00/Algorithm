#include <iostream>

using namespace std;

#define SIZE 8

void BinarySearch(int list[], int key)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		// 1. 배열의 가운데 요소의 인덱스를 pivot으로 설정합니다.
		int pivot = (left + right) / 2;

		// 2. [pivot]의 값이 찾고자 하는 요소와 같다면 검색을 종료합니다.
		if (list[pivot] == key)
		{
			cout << list[pivot] << "의 index위치 : " << pivot << endl;
			return;
		}
		// 3. [pivot]의 값이 찾는 값보다 크다면 left ~ pivot 사이의 값을 검색합니다.
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		// 4. [pivot]의 값이 찾는 값보다 작다면 pivot ~ right 사이의 값을 검색합니다.
		else
		{
			left = pivot + 1;
		}

	}

	cout << "Key값을 찾지 못했습니다." << endl;


}

int main()
{
#pragma region 이진 탐색
	// 오름차순으로 정렬된 리스트에서 특정한 값의 위치를 찾는 알고리즘입니다.
	// [ 5, 6, 11, 13, 27, 55, 88 ]
	// 여기서 55이라는 값을 찾으려면 배열의 크기의 반으로 나눈다.
	// 찾고자 하는 값이 같으면 바로 그 값을 출력해주면 되고,
	// 찾고자 하는 값보다 작다면 

	//	int list[SIZE] = { 5,6,11,13,27,55,66,99 };
	//	BinarySearch(list, 100);

#pragma endregion

#pragma region 객체지향 5원칙(SOLID)
	// 1. 단일 책임 원칙(SRP - Single Responsibility Principle)
	// 하나의 클래스는 하나의 동작만의 책임을 가지고 있어야 합니다.
	// 하나의 클래스가 여러 책임을 가지고 있다면, 클래스를 분리해야 합니다.

	// 2. 개방 폐쇄 원칙
	// 클래스는 확장에 대해서는 열려 있어야 하지만, 수정에 대해서는 닫혀 있어야 합니다.
	// 본래의 부모 클래스에 대한 수정은 피해야하며, 자식 클래스의 추가나 확장에 관해서는 자유롭게 이루어져야 한다.
	// 다 따로따로 정의해 놓고 Marine, Firebet Ghost

	// 3. 리스코프 치환 원칙
	// 하위 클래스는 상위 클래스에서 가능한 행위를 수행할 수 있어야 하며,
	// 하위 클래스는 상위 클래스의 행위를 변경하지 않고 확장할 수 있어야 한다.
	// 상속을 조금더 구체적으로 짜야한다.

	// 4. 인터페이스 분리 원칙
	// 클라이언트가 자신이 사용하지 않는 함수에 의존하지 않아야 하며,
	// 인터페이스를 구체적으로 작은단위로 분리하여 사용하는 원칙입니다.

	// 5. 의존 역전 원칙
	// 상위 수준(Class)이 하위 수준에 의존하는 전통적인 관계를
	// 반전시킴으로써 상위 수준 모듈이 하위 수준 모듈의
	// 구현에 의존하지 않도록 하는 원칙입니다.
#pragma endregion

	return 0;
}