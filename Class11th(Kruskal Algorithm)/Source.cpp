#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 8

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

		int & X()
		{
			return x;
		}

		int & Y()
		{
			return y;
		}

		int & Distance()
		{
			return distance;
		}
	};

	std::vector <Edge> edgeList;
	
	int parent[SIZE];
	int sum;
public:
	Graph()
	{
		for (int i = 1; i < SIZE; i++)
		{
			parent[i] = i;
		}
		
	}

	// 부모를 찾는 함수
	int Find(int x)
	{
		if (parent[x] == x)
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	// 노드끼리 연결시키는 함수
	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x < y)	// x가 y보다 작으면 x가 y의 부모가 됩니다.
		{
			if (parent[x] != Find(y))
			{
				parent[y] = parent[x];
			}
			else
			{
				return;
			}
		}
		else // y가 x보다 작으면 y가 x의 부모가 됩니다.
		{
			if (parent[y] != Find(x))
			{
				parent[x] = parent[y];
			}
			else
			{
				return;
			}
		}
	}
	
	// 두 입력값이 같은 집합에 존재하는지 판별
	bool Same(int x, int y) 
	{
		return Find(x) == Find(y);
	}

	void CreateEdge(int x, int y, int distance)
	{
		edgeList.push_back(Edge(x,y,distance));
	}
	
	void Sort()
	{
		sort(edgeList.begin(), edgeList.end());
	}

	void Kruskal()
	{
		// Cycle이 존재하지 않으면 Edge에 있는 distance 값을 sum에 넣어줍니다.
		for (int i = 0; i < edgeList.size(); ++i)
		{
			if (Same(edgeList[i].X(),edgeList[i].y()) == false)
			{
				sum += edgeList[i].Distance();
				Union(edgeList[i].X(),edgeList[i].Y());
			}	
		}
	}

	int & Cost()
	{
		return sum;
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
	// Graph graph;

	//	graph.CreateEdge(1, 2, 67);
	//	graph.CreateEdge(1, 4, 28);
	//	graph.CreateEdge(1, 5, 15);
	//	graph.CreateEdge(1, 7, 12);
//	
	//	graph.CreateEdge(2, 4, 24);
	//	graph.CreateEdge(2, 5, 60);
//	
	//	graph.CreateEdge(3, 5, 22);
	//	graph.CreateEdge(3, 6, 33);
//	
	//	graph.CreateEdge(4, 7, 13);
//	
	//	graph.CreateEdge(5, 6, 42);
	//	graph.CreateEdge(5, 7, 73);
	
	// Sort 함수 : #include <algorithm>을 선언해야한다.
	//	graph.Sort();
#pragma endregion

#pragma region 추가 학습 내용
	// 크루스칼, 프림 트리
#pragma endregion
	Graph graph;
	graph.CreateEdge(1, 2, 15);
    graph.CreateEdge(1, 3, 5);
    graph.CreateEdge(2, 3, 25);
    graph.CreateEdge(2, 5, 36);
    graph.CreateEdge(3, 4, 55);
    graph.CreateEdge(4, 5, 24);
    graph.CreateEdge(4, 6, 28);
    graph.CreateEdge(5, 6, 31);

	graph.Sort();

	graph.Kruskal();

	graph.Cost();


	return 0;
}
