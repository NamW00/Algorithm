#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Graph
{
private:
	class Edge
	{
	private:
		int x;
		int y;
		int distance;
	public:
		Edge(int x, int y, int distance)
		{
			this->x = x;
			this->y = y;
			this->distance = distance;
		}

		bool operator < (const Edge & edge)
		{
			return this->distance < edge.distance;
		}
	};

	std::vector <Edge> edgeList;
	
public:
	Graph()
	{

	}

	void CreateEdge(int x, int y, int distance)
	{
		edgeList.push_back(Edge(x,y,distance));
	}

	void Show()
	{

	}

	void Sort()
	{
		sort(edgeList.begin(), edgeList.end());
	}
};

int main()
{
#pragma region 신장 트리(Spanning Tree)
	// 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 부분 그래프
	// 그래프의 모든 정점을 최소 비용으로 연결하는 트리
	// 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개인 트리입니다.

	// 최소 비용 신장트리 (Minimum Spanning Tree, MST)
	//	: 그래프의 간선들이 가중치 합의 최소인 신장 트리

	//		 (1)
	//	  1/      \ 3
	//	 (2)-2-(4)-5-(5)
	//	  6 \     / 4
	//		  (3)

	// 모든 노드에 간선이 서로 연결되어 있으면 Cycle
	// 			..				있지 않으면 NoCycle

	
#pragma endregion

#pragma region 크루스칼 알고리즘
	Graph graph;

	graph.CreateEdge(1, 2, 67);
	graph.CreateEdge(1, 4, 28);
	graph.CreateEdge(1, 5, 15);
	graph.CreateEdge(1, 7, 12);

	graph.CreateEdge(2, 4, 60);
	graph.CreateEdge(2, 5, 60);

	graph.CreateEdge(3, 5, 22);
	graph.CreateEdge(3, 6, 33);

	graph.CreateEdge(4, 7, 13);

	graph.CreateEdge(5, 6, 42);
	graph.CreateEdge(5, 7, 73);
	
	// Sort 함수 : #include <algorithm>을 선언해야한다.
	graph.Sort();
#pragma endregion

#pragma region 추가 학습 내용
	// 크루스칼, 프림 트리
#pragma endregion


	return 0;
}

