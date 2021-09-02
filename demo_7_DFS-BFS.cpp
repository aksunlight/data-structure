//深度优先搜索DFS
//例题：给定一个整数n，将数字1~n排成一排，将会有很多排列方法
//		现在，请你按照字典序将所有的排序方法输出
//思路：按序给出每位该放的数，1--、12-、123、13-、132、2--、21-......
#include<iostream>
using namespace std;
const int N = 10010;
int n;
int path[N];
bool st[N];
void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; ++i)	printf("%d ", path[i]);
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!st[i])
		{
			path[u] = i;
			st[i] = true;
			dfs(u + 1);
			st[i] = false;
		}
	}
}
int main()
{
	cin >> n;

	dfs(0);

	return 0;
}
const int  N = 10010;
int n;
int path[N];
bool st[N];
void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; ++i)	cout << path[i];
		cout << endl;
		return;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		if (!st[i])
		{
			path[u] = i;
			st[i] = true;
			dfs(u + 1);
			st[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	dfs(0);
	return 0;
}
const int N = 10010;
int n;
int path[N];
bool st[N];
void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; ++i)	printf("%d", path[i]);
		printf("\n");
		return 0;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		if (!st[i])
		{
			path[u] = i;
			st[i] = true;
			dfs(u + 1);
			st[i] = false;
		}
	}
}
int main()
{
	scanf("%d", &n);
	dfs(0);
	return 0;
}

//深度优先搜索DFS
//例题：n-皇后问题是指将n个皇后放在n*n的国际象棋棋盘上，使得皇后不能相互攻击到
//		即任意两个皇后都不能处于同一行、同一列或同一斜线上，给出n请输出所有摆法
//思路1：先选择第一行放的位置再选择第二行放的位置再选择第三行放的位置...，即3-------、37------...
const int N = 20;
int n;
char g[N][N];
bool col[N], dg[N], udg[N];
void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; ++i)	puts(g[i]);
		puts("");	//puts输出字符后会自动换行
		return;
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (!col[i] && !dg[i + u] && !udg[i - u + n])
		{
			g[u][i] = 'Q';
			col[i] = dg[i + u] = udg[i - u + n] = true;
			dfs(u + 1);
			col[i] = dg[i + u] = udg[i - u + n] = false;
			g[u][i] = '.';
		}
	}
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			g[i][j] = '.';
		}
	}
	dfs(0);
	return 0;
}
const int N = 20;
int n;
char g[N][N];
bool col[N], dg[N], udg[N];
void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; ++i)	puts(g[i]);
		puts("");
		return;
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (!col[i] && !dg[i + u] && !udg[i - u + n])
		{
			g[u][i] = 'Q';
			col[i] = dg[i + u] = udg[i - u + n] = true;
			dfs(u + 1);
			col[i] = dg[i + u] = udg[i - u + n] = false;
			g[u][i] = '.';
		}
	}
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)	
	{
		for (int j = 0; j < n; ++j)
		{
			g[i][j] = '.';
		}
	}
	dfs(0);
	return 0;
}

//思路2：一个格子一个格子的枚举
const int N = 20;
int n;
char g[N][N];
bool row[N], col[N], dg[N], udg[N];
void dfs(int x, int y, int s)
{
	if (y == n)
	{
		y = 0;
		++x;
	}
	if (x == n)
	{
		if (s == n)
		{
			for (int i = 0; i < n; ++i)	puts(g[i]);
			puts("");
		}
		return;
	}
	
	//选择不放皇后
	dfs(x, y + 1, s);
	
	//选择放皇后
	if (!row[x] && !col[y] && !dg[y + x] && !udg[y - x + n])
	{
		g[x][y] = 'Q';
		row[x] = col[y] = dg[y + x] = udg[y - x + n] = true;
		dfs(x, y + 1, s + 1);
		row[x] = col[y] = dg[y + x] = udg[y - x + n] = false;
		g[x][y] = '.';
	}
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)	
	{
		for (int j = 0; j < n; ++j)
		{
			g[i][j] = '.';
		}
	}
	dfs(0, 0, 0);
	return 0;
}
const int N = 20;
int n;
char g[N][N];
int row[N], col[N], dg[N], udg[N];
void dfs(int x, int y, int u)
{
	if (y == n)
	{
		y = 0;
		++x;
	}
	if (x == n)
	{
		if (u == n)
		{
			for (int i = 0; i < n; ++i)	puts(g[i]);
			puts("");
		}
		return;
	}
	//不安置皇后
	dfs(x, y + 1, u);
	//安置皇后
	if (!row[x] && !col[y] && !dg[x + y] && !udg[y - x + n])
	{
		g[x][y] = 'Q';
		row[x] = col[y] = dg[x + y] = udg[y - x + n] = true;
		dfs(x, y + 1, u + 1);
		row[x] = col[y] = dg[x + y] = udg[y - x + n] = false;
		g[x][y] = '.';
	}
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			g[i][j] = '.';
		}
	}
	dfs(0, 0, 0);
	return 0;
}

//BFS的模板（使用队列）
//例题：走迷宫
//给定一个n*m的二维整数数组，用来表示一个迷宫，数组中只包含0或1，其中0表示可以走的路
//1表示不可以通过的墙壁，问从(1, 1)到(n, m)至少需要移动多少次
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 110;
int n, m;
int g[N][N];
int d[N][N];	//存储从起点到（i，j）走过的距离

int bfs()
{
	queue<PII> q;
	q.push({ 0, 0 });

	memset(d, -1, sizeof d);
	d[0][0] = 0;

	int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = t.first + dx[i], y = t.second + dy[i];
				if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
				{
					d[x][y] = d[t.first][t.second] + 1;
					q.push({ x, y });
				}
		}
	}

	return d[n - 1][m - 1];
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> g[i][j];
		}
	}

	cout << bfs() << endl;

	return 0;
}
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

typedef pair<int, int> PII;

const int N = 110;
int n, m;
int g[N][N];
int d[N][N];
PII dest[N][N];

void print(int x, int y)
{
	if (d[x][y] == -1)
	{
		cout << "无法顺利到达终点" << endl;
		return;
	}
	if (dest[x][y] != make_pair(0, 0))
	{
		print(dest[x][y].first, dest[x][y].second);
	}
	else
	{
		cout << 0 << ' ' << 0 << endl;
	}
	cout << x << ' ' << y << endl;
}

int bfs()
{
	queue<PII> q;
	q.push({ 0, 0 });

	memset(d, -1, sizeof d);
	d[0][0] = 0;

	int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = t.first + dx[i], y = t.second + dy[i];
			if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
			{
				q.push({ x, y });
				d[x][y] = d[t.first][t.second] + 1;
				dest[x][y] = t;
			}
		}
	}
	print(n - 1, m - 1);

	return d[n - 1][m - 1];
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> g[i][j];
		}
	}
	cout << bfs() << endl;
	return 0;
}
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

typedef pair<int, int> PII;
const int N = 102;
int g[N][N], d[N][N];
PII dest[N][N];

void print(int x, int y)
{
	if (d[x][y] == -1)
	{
		cout << "无法到达目标点" << endl;
		return;
	}
	if (dest[x][y] != make_pair(0, 0))
	{
		print(dest[x][y].first, dest[x][y].second);
	}
	else
	{
		cout << 0 << ' ' << 0 << endl;
	}
	cout << x << ' ' << y << endl;
}

void bfs()
{
	queue<PII> q;
	q.push({0, 0});
	
	memset(d, -1, sizeof d);
	d[0][0] = 0;
	
	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
	for (int i = 0; i < 4; ++i)
	{
		int x = t.first + dx[i], y = t.second + dy[i];
		if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
		{
			q.push({x, y});
			d[x][y] = d[t.first][t.second] + 1;
			dest[x][y] = t;
		}
	}
	print(n - 1, m - 1);
	return d[n - 1][m - 1];
}

int main()
{
	cin >> n >> y;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> g[i][j];
		}
	}
	
	cout << bfs() << endl;
	
	return 0;
}

//树和图的深度优先遍历
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100010, M = N * 2;
int h[N], e[M], ne[M], idx;
bool st[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u)
{
	st[u] = true;
	cout << u << ' ';

	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j])
		{
			dfs(j);
		}
	}

	return;
}

int main()
{
	int n;
	cin >> n;	//树有n个结点，n - 1条边

	memset(h, -1, sizeof h);

	for (int i = 0; i < n - 1; ++i)
	{
		int x, y;
		cin >> x >> y;
		add(x, y), add(y, x);
	}

	dfs(2);

	return 0;
}

//树的深度优先遍历，树的深度
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100010, M = N * 2;
int h[N], e[M], ne[M], idx, n;
bool st[N];
int ans = N;

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int dfs(int u)
{
	st[u] = true;
	int sum = 1, ret = 0;

	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j])
		{
			int s = dfs(j);
			ret = max(ret, s);
			sum += s;
		}
	}

	ret = max(ret, n - sum);
	ans = min(ans, ret);

	return sum;
}

int main()
{
	cin >> n;	//树有n个结点，n - 1条边

	memset(h, -1, sizeof h);

	for (int i = 0; i < n - 1; ++i)
	{
		int x, y;
		cin >> x >> y;
		add(x, y), add(y, x);
	}

	dfs(1);
	cout << ans;

	return 0;
}

//图的宽度优先遍历，拓扑图（有向无环图）拓扑序列
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

const int N = 100010, M = N * 2;
int h[N], e[M], ne[M], idx, n, m;
int q[N], d[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool topsort()
{
	int hh = 0, tt = -1;
	
	for (int i = 1; i <= n; ++i)
		if (!d[i])
			q[++tt] = i;
	
	while (hh <= tt)
	{
		int t = q[hh++];
		for (int i = h[t], i != -1; i = ne[i])
		{
			int j = e[i];
			d[j]--;
			if (d[j] == 0)	q[++tt] = j;
		}
	}
	
	return tt == n - 1;
}

int main()
{
	cin >> n >> m;
	memset(d, -1, sizeof d);
	
	for (int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		add(x, y);
		d[y]++;
	}
	
	if (topsort())
	{
		for (int i = 0; i < n; ++i)	cout << q[i] << ' ';
	}
	else
	{
		puts("-1");
	}
	
	return 0;
}