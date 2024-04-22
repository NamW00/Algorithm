	//	include <iostream>

	//	sing namespace std;

	//	define SIZE 8

	//	lass Graph
	//	
	//	rivate:
	//		int parent[SIZE];
	//	ublic:
	//		Graph()
	//		{
	//			for (int i = 1; i < SIZE; i++)
	//			{
	//				parent[i] = i;
	//			}
	//		}

	//		// 부모를 찾는 함수
	//		int Find(int x)
	//		{
	//			if (parent[x] == x)
	//			{
	//				return x;
	//			}
	//			else
	//			{
	//				return parent[x] = Find(parent[x]);
	//			}
	//		}
	//		
	//		// 결합 시키는 함수
	//		void Union(int x, int y)
	//		{
	//			x = Find(x);
	//			y = Find(y);

	//			if (x < y)	// x가 y보다 작으면 x가 y의 부모가 됩니다.
	//			{
	//				if (parent[x] != Find(y))
	//				{
	//					parent[y] = parent[x];
	//				}
	//				else
	//				{
	//					return;
	//				}
	//			}
	//			else // y가 x보다 작으면 y가 x의 부모가 됩니다.
	//			{
	//				if (parent[y] != Find(x))
	//				{
	//					parent[x] = parent[y];
	//				}
	//				else
	//				{
	//					return;
	//				}
	//			}
	//		}
	//		
	//		// 두 입력값이 같은 집합에 존재하는지 판별
	//		bool Same(int x, int y) 
	//		{
	//			return Find(x) == Find(y);
	//		}
	//	
	//		// parent 배열 출력
	//		void Show()
	//		{
	//			for (int i = 1; i < SIZE; i++)
	//			{
	//				cout << parent[i] << " ";
	//			}
	//			cout << endl;
	//		}
//	
	//		~Graph()
	//		{
//	
	//		}
	//	};
//	
	//	int main()
	//	{
	//	#pragma region 유니온 파인드
	//		// 여러 노드가 존재할 때 어떤 노드가 다른노드와 연결되어
	//		// 있는지 확인하는 알고리즘 입니다.
	//		Graph UnionFind;
	//		UnionFind.Union(2, 3);
	//		UnionFind.Union(1, 3);
//	
	//		UnionFind.Union(4, 5);
//	
	//		UnionFind.Show();
//	
	//		cout << "1과 4는 같은 집합인가? : " << UnionFind.Same(1,4) << endl;
	//		cout << "1과 3는 같은 집합인가? : " << UnionFind.Same(1,3) << endl;
	//		
	//		// 유니온 파인드 시간 복잡도
	//		
	//	#pragma endregion
	//		return 0;
	//	}

	#include <iostream>

	using namespace std;

	#define SIZE 10

	class Graph
	{
	private:
	    int parent[SIZE];

	public:
	    Graph()
	    {
	        for (int i = 1; i < SIZE; i++)
	        {
	            parent[i] = i;
	        }
	    }
	
	    int Find(int x)     
	    {
	        if (x == parent[x])
	        {
	            return x;
	        }
	        else
	        {
	            return parent[x] = Find(parent[x]);
	        }              
	    }

	    void Union(int x, int y)
	    {
	        x = Find(x);
	        y = Find(y);
	
	        if (x < y)
	        {
	            // x가 y보다 작으면 x가 y의 부모가 됩니다.
	            parent[y] = x;
	        }
	        else
	        {
	            // y가 x보다 작으면 y가 x의 부모가 됩니다.
	            parent[x] = y;
	        }
	    }

	    bool Same(int x, int y)
	    {
	        x = Find(x);
	        y = Find(y);

	        if (x == y)
	        {
	            return true;
	        }
	        else
	        {
	            return false;
	        }
	    }

		void Show()
		{
			for (int i = 1; i < SIZE; i++)
			{
				cout << parent[i] << " ";
			}
			cout << endl;
		}
	};

	int main()
	{
	#pragma region 유니온 파인드
	    // 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어 
	    // 있는지 확인하는 알고리즘입니다.

	    Graph graph;

	    graph.Union(2, 3);
	    graph.Union(1, 3);

	    // 1 1 1 4 5

	    cout << graph.Same(1, 2) << endl;
	    cout << graph.Same(1, 3) << endl;
	    cout << graph.Same(4, 5) << endl;

		graph.Show();
	    // 유니온 파인드 시간 복잡도
	    // O(MlogN) : M은 연산의 개수, N은 노드의 개수
	    // M이 N^2에 가까울 때는 O(N^2logN)이 됩니다.

	#pragma endregion


	    return 0;
	}

