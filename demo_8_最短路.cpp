//单源最短路（无负权边）：dijkstra算法（n^2，适用与稠密图，稠密图一般用邻接矩阵存储）
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int g[N][N];
int dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof st);
	dist[1] = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int t = -1;
		for (int j = 1; j <= n; ++j)
		{
			if (!st[j] && (st == -1 || dist[t] > dist[j]))
			{
				t = j;
			}
		}
		
		st[t] = true;
		for (int j = 1; j <= n; ++j)
		{
			if (dist[j] > dist[t] + g[t][j])
			{
				dist[j] = dist[t] + g[t][j];
			}
			//上面if判断等同于：dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	
	memset(g, 0x3f, sizeof g);
	
	for (int j = 0; j < m; ++j)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int g[N][N], dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int t = -1;
		for (int j = 1; j <= n; ++j)
		{
			if (!st[j] && (t == -1 || dist[t] > dist[j]))
			{
				t = j;
			}
		}
		
		st[t] = true;
		for (int j = 1; j <= n; ++j)
		{
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int g[N][N], dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int t = -1;
		for (int j = 1; j <= n; ++j)
		{
			if (!st[j] && (t == -1 || dist[t] > dist[j]))
			{
				t = j;
			}
		}
		st[t] = true;
		for (int j = 1; j <= n; ++j)
		{
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	memset(g, 0x3f, sizeof g);
	
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int g[N][N], dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int t = -1;
		for (int j = 1; j <= n; ++j)
		{
			if (!st[j] && (t == -1 || dist[t] > dist[j]))
			{
				t = j;
			}
		}
		
		st[t] = true;
		for (int j = 1; j <= n; ++j)
		{
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	memset(g, 0x3f, sizeof g);
	
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

//堆优化的dijkstra，时间复杂度nlogm，适用与正权边及稀疏图(边数小于点数)，稀疏图一般用邻接表存储
#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N = 510;
int n, m;
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool st[N];

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;

	priority_queue<PII, vector<PII>, greater<PII>> q;
	q.push({ 0, 1 });

	while (q.size())
	{
		auto t = q.top();
		q.pop();

		int u = t.second, ver = t.first;
		if (st[u])	continue;
		st[u] = true;

		for (int i = h[u]; i != -1; i = ne[i])
		{
			int j = e[i];
			if (dist[j] > ver + w[i])
			{
				dist[j] = ver + w[i];
				q.push({ dist[j], j });
			}
		}
	}

	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);

	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
	}

	int ret = dijkstra();
	cout << ret << endl;

	return 0;
}

#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N = 510;
int n, m;
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c; ne[idx] = h[a], h[a] = idx++;
}

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	queue<PII, vector<PII>, greater<PII>> q;
	q.push({0, 1});
	
	while (q.size())
	{
		auto t = q.top();
		q.pop();
		
		int u = t.second, ver = t.first;
		if (st[u])	continue;
		st[u] = true;
		
		for (int i = h[u]; i != -1; i = ne[i])
		{
			int j = e[i];
			if (dist[j] > ver + w[i])
			{
				dist[j] = ver + w[i];
				q.push({dist[j], j});
			}
		}
		
		if (dist[n] == 0x3f3f3f3f)	return -1;
		return dist[n];
	}
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	queue<PII, vector<PII>, greater<PII>> q;
	q.push({0, 1});
	
	while (q.size())
	{
		auto t = q.top();
		q.pop();
		
		int u = t.second, ver = t.first;
		if (st[u])	continue;
		st[u] = true;
		
		for (int i = h[u], i != -1; i = ne[i])
		{
			int j = e[i];
			if (dist[j] > ver + w[i])
			{
				dist[j] = ver + w[i];
				q.push({dist[j], j});
			}
		}
	}
	
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h)
	
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
	}
	
	int ret = dijkstra();
	cout << ret << endl;
	
	return 0;
}

//bellman-ford算法：求单源最短路径，可以有负权边，时间复杂度nm
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510, M = 1100;
int n, m;
int dist[N], backup[N];
struct Edge{
	int a, b, w;
}edges[M];

int bellman-ford()
{
	memset(dist, 0x3f, sizeof dist);
	
	for (int i = 0; i < n; ++i)
	{
		memcpy(backup, dist, sizeof dist)
		for (int j = 0; j < m; ++j)
		{
			int a = edges[j].a, b = edges[j].b, w = edges[j].w;
			dist[b] = min(dist[b], backup[a] + w);
		}
	}
	
	if (dist[n] > 0x3f3f3f3f / 2)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	
	for (int i = 0; i < m; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		edges[i] = {a, b, c};
	}
	
	int ret = bellman_ford();
	cout << ret << endl;
	
	return 0;
}

//spfa算法（bellman-ford算法优化）：求单源最短路径，可以有负权边，时间复杂度一般为m
#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;

const int N = 510;
int n, m;
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool st[N];

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int spfa()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0;
	
	queue<int> q;
	q.push(1);
	st[1] = true;	//点1已经在队列中
	
	while (q.size())
	{
		int t = q.front();
		q.pop();
		st[t] = false;
		
		for (int i = h[t]; i != -1; i = ne[i])
		{
			int j = e[i];
			if (dist[j] > dist[t] + w[i])
			{
				dist[j] = dist[t] + w[i];
				if (!st[j])
				{
					st[j] = true;
					q.push(j);
				}
			}
		}
	}
	if (dist[n] == 0x3f3f3f3f)	return -1;
	return dist[n];
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
	}
	
	int ret = spfa();
	cout << ret << endl;
	
	return 0;
}
