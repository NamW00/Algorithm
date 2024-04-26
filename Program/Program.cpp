#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 8

class Graph
{
private:
	vector<int> edge[SIZE];
	int inDegree[SIZE];
	
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			inDegree[i] = 0;
		}
		
	}

	void ConnectEdge(int x, int y)
	{
		edge[x].push_back(y);
		//degree까지 증가
		inDegree[y]++;
	}

	void Sort()
	{
		queue<int> q;

		for (int i = 1; i < SIZE; i++)
		{
			if (inDegree[i] == 0)
			{
				q.push(i);
			}	
		}
		
		for (int i = 1; i < SIZE; i++)
		{
			if (q.empty())
			{
				cout << "cycle 발생" << endl;
				return;
			}

            int x = q.front();

            q.pop();

            cout << x << " ";

            for (int j = 0; j < edge[x].size(); j++)
            {
                int y = edge[x][j];

                inDegree[y]--;

                if (inDegree[y] <= 0)
                {
                    q.push(y);
                }
                
            }		
		}

	}
};
int main()
{
#pragma region 실행 코드
	Graph graph;
	graph.ConnectEdge(1, 2);
	graph.ConnectEdge(1, 5);

	graph.ConnectEdge(2, 3);

	graph.ConnectEdge(3, 4);
	graph.ConnectEdge(3, 5);

	graph.ConnectEdge(4, 6);

	graph.ConnectEdge(5, 6);

	graph.ConnectEdge(6, 7);

	graph.Sort();




#pragma region 
	return 0;
}
