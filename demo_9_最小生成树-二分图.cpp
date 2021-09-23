//最小生成树算法：普利姆算法（prim）
//思路：类似dijskr算法，每次把离集合距离最小的点加入集合
#include<iostream>
#
using namespace std;

const int N = 110, INF = 0x3f3f3f3f;
int n, m;
int g[N][N];
int dist[N];	//表示t点到集合的最小距离
bool st[N];

int prim()
{
	memset(dist, 0x3f, sizeof dist);
	
	int res = 0;
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
		
		if (i && dist[t] == INF)	return INF;
		if (i)	res += dist[t];
		st[t] = true;
		
		for (int j = 1; j <= n; ++j)	dist[j] = min(dist[j], g[t][j]);
	}
	
	return res;
}

int main()
{
	cin >> n >> m;
	memset(g, 0x3f, sizeof g);
	while(m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	
	int t = prim();		//t存取最小生成树边权之和，t==INF则是不连通的
	if (t == INF)	cout << "impossible" << endl;
	else	cout << t << endl;
	
	return 0;
}

//最小生成树算法：克鲁斯卡尔算法（kruskal）
//思路：将所有边按权重从小到大排序，之后枚举每条边
//如果边连接的两个点不连通则将这条边加入(使用并查集解决)
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 110;
int n, m;
int p[N];

struct Edge
{
	int a, b, w;
	bool operator<(const Edge& W)const
	{
		return w < W.w
	}
}edge[N];

void find(int x)
{
	if (p[x] != x)
	{
		p[x] = find(p[x]);
	}
	return p[x];
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int a, b, w;
		cin >> a >> b >> w;
		edge[i] = {a, b, w};
	}
	sort(edge, edge + m);
	
	for (int i = 1; i <= n; ++i)	p[i] = i;
	
	int ret = 0, cnt = 0;
	for (int i = 0; i < m; ++i)	//从下到大枚举所有边
	{
		int a = edge[i].a, b = edge[i].b, w = edge[i].w;
		a = find(a), b = find(b);
		if (a != b)
		{
			p[a] = b;
			res += w;	//res存最小生成树所有边的权重之和
			cnt++;	//cnt存储最小生成树的边数
		}
	}
	
	if (cnt < n - 1)	cout << "图不联通，没有最小生成树" << endl;
	else	cout << res << endl;
	
	return 0;
}

//二分图或称为二部图：可以分为两部分
#include<iostream>
#include<cstrig>
#include<algorithm>
using namespace std;

const int N = 110, M = 220;
int n, m;
int h[N], e[M], ne[M], idx;
int color[N];

void add(int a, int b)
{
	e[idx] = a, ne[idx] = h[a], h[a] = idx++;
}

bool dfs(int u, int c)	//通过判断是否存在奇数环确定是否是二部图
{
	color[u] = c;
	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!color[j])
		{
			if (!dfs(j, 3 - c))	return false;
		}
		else if (color[j] == c)	return false;
	}
	return true;
}

int main()
{
	cin >> n >> m;
	memset(h, -1, sizeof h);
	
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		add(a, b), add(b, a);
	}
	
	bool flag = true;
	for (int i = 1; i <= n; ++i)
	{
		if (!color[i])
		{
			if (!dfs(i, 1))
			{
				flag = false;
				break;
			}
		}
	}
	if (flag)	cout << "此图是二部图" << endl;
	else	cout << "此图不是二部图" << endl; 
	
	return 0;
}

//二分图的最大匹配
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 510, M = 1000010;
int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];
bool st[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
bool find(int x)
{
	for (int i = h[x]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j])
		{
			st[j] = true;
			if (match[j] == 0 || find(match[j]))
			{
				match[j] = x;
				return true;
			}
		}
	}
	return false;
}

int main()
{
	cin >> n1 >> n2 >> m;
	memset(h, -1, sizeof h);
	
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	
	int res = 0;
	for (int i = 1; i <= n1; ++i)
	{
		memset(st, false, sizeof st);
		if (find(i))	++res;
	}
	cout << res << endl;
	
	return 0;
}
