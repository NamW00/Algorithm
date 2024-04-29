#include <iostream>

using namespace std;

#define SIZE 4
#define INF 1000000

class Graph
{
private:
	int distance[SIZE][SIZE] =
	{
		{0, 5, INF, 8},
		{7, 0, 9, INF},
		{2, INF, 0, 4},
		{INF, INF, 3, 0}
	};
public:
	Graph(/* args */)
	{
		
	}

	void FloyedWarshall()
	{	
		// 각 노드값 거쳐가는 경우
		for (int k = 0; k < SIZE; k++)
		{
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					if (distance[i][k]+distance[k][j] < distance[i][j])
					{
						distance[i][j] = distance[i][k]+distance[k][j];
					}		
				}	
			}
		}
	}

	void Show()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout << distance[i][j] << " ";
			}
			cout << endl;
		}
		
	}

};


int main()
{
#pragma region 플로이드 워셜(Floyd Warshall)
	// 모든 지점에서 다른 모든 지점까지의 최단 경로를
	// 모두 구해야 하는 경우 사용하는 알고리즘 입니다.

	// 시간 복잡도 O(n^3) -> 3중 for문 사용
	Graph graph;
	graph.FloyedWarshall();
	graph.Show();
	
#pragma endregion
	return 0;
}