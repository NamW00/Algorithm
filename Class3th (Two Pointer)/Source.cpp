#include <iostream>

#define SIZE 6

using namespace std;

int main()
{
#pragma region �� ������
	// �� ���� �����͸� �ΰ� ������ ���Ͽ�
	// ������ �ذ��ϴ� �˰����Դϴ�.
	// ���ϴ� ���� M�̶�� ��� start, end�� �ε��� 0��° ������ ������ ���´�.
	// ���⼭ �κ��� sum�� start�� end�� ����Ű�� ���� ���� ����Ų��.
	//	int count = 0;
	//	int sum = 0;
	//	int start = 0;
	//	int end = 0;
	//	int M = 5;
	//	int arr[SIZE] = { 2, 3, 1, 4, 2, 5 };
	//	// start���� end������ ũ�ٸ� �ݺ����� ���ᰡ �Ǿ���Ѵ�.
	//	
	//	while (start <= end)
	//	{	
	//		// 1. ���� �κ����� M�̻��̸� start�� 1�� �����մϴ�.
	//		if (sum >= M)
	//		{
	//			sum -= arr[start++];
	//		}
	//		else if (end >= SIZE)
	//		{
	//			break;
	//		}	
	//		// 2. ���� �κ����� M�̸��̸� end�� 1�� �����մϴ�.
	//		else
	//		{
	//			sum += arr[end++];
	//		
	//		}
	//		// 3. ���� �κ����� M�� ���ٸ� count���� ������ŵ�ϴ�.
	//		if (sum == M)
	//		{
	//			count++;
	//		}
	//	}
	//	
	//	std::cout << "Value of Count : " << count << endl;
#pragma endregion

#pragma region �ּҰ����
	//	int a;
	//	int b;
	//	int count = 1;
	//	
	//	cout << "A, B���� �Է��Ͻÿ� : ";
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
	//	cout << "�ּҰ���� : " << count * a * b << endl;
#pragma endregion

	return 0;
}