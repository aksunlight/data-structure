//Trie树：高效的存储和查找字符串集合的数据结构
// 0号点既是根节点，又是空节点
// son[][]存储树中每个节点的子节点
// cnt[]存储以每个节点结尾的单词数量
const int N = 10010;
int son[N][26], cnt[N], idx;
void insert(char str[])
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	son[p][u] = ++dex;
		p = son[p][u];
	}
	
	++cnt[p];
}
int find(char str[])
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	return 0;
		p = son[p][u];
	}
	
	return cnt[p];
}
const int N = 100010;
int son[N][26], cnt[N], idx;
void insert(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	son[p][u] = ++idx;
		p = son[p][u];
	}
	
	cnt[p]++;
}
int find(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	return 0;
		p = son[p][u];
	}
	
	return cnt[p];
}
const int N = 100010;
int son[N][26], cnt[N], idx;
void insert(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	son[p][u] = ++idx;
		p = son[p][u];
	}
	
	p = son[p][u];
}
int find(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	return 0;
		p = son[p][u];
	}
	
	return cnt[p];
}
const int N = 100010;
int son[N][26], cnt[N], idx;
void insert(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	son[p][u] = ++idx;
		p = son[p][u];
	}
	
	++cnt[p];
}
int find(char* str)
{
	int p = 0;
	for (int i = 0; str[i]; ++i)
	{
		int u = str[i] - 'a';
		if (!son[p][u])	return 0;
		p = son[p][u];
	}
	
	return cnt[p];
}

//并查集：多个集合，每个集合有一个代表，集合里的节点都有一个父节点，结合代表是根节点，他的父节点是自己
const int N = 100010;
int p[N];
//返回x的祖宗节点（代表）
int find(int x)
{
	if (p[x] != x)	p[x] = find(p[x]);
	return p[x];
}
//初始化
for (int i = 1; i <= n; ++i)	p[i] = i;	//初始时每个节点为一个集合
//合并两个集合
p[find(a)] = find(b);
p[find(b)] = find(a);
const int N = 100010;
int p[N];
int find(int x)
{
	if (x != p[x])	p[x] = find(p[x]);
	return p[x];
}
for (int i = 1; i <= n; ++i)	p[i] = i;
p[find(a)] = find(b);
p[find(b)] = find(a);
const int N = 100010;
int p[N];
int find(int x)
{
	if (x != p[x]) p[x] = find(p[x]);
	return p[x];
}
for (int i = 1; i <= n; ++i)	p[i] = i;
p[find(a)] = find(b);
p[find(b)] = find(a);
const int N = 100010;
int p[N], size[N];	//size数组存储每个集合元素个数
int find(int x)
{
	if (x != p[x])	p[x] = find(p[x]);
	return p[x];
}
for (int i = 1; i <= n; ++i)
{
	p[i] = i;
	size[i] = 1;
}
size[find(b)] += size[find(a)];
p[find(a)] = find(b);
const int N = 100010;
int p[N], size[N];
int find(int x)
{
	if (x != p[x])	p[x] = find(p[x]);
	return p[x];
}
for (int i = 1; i <= n; ++i)
{
	p[i] = i;
	size[i] = 1;
}
size[find(b)] += size[find(a)];
p[find(a)] = find(b);

//手动的小跟堆
const int N = 100010;
int heap[N], size;
//down操作
void down(int u)
{
	int k = u;
	if (2 * u <= size && heap[k] > heap[2 * u])	k = 2 * u;
	if (2 * u + 1 <= size && heap[k] > heap[2 * u + 1])	k = 2 * u + 1;
	if (k != u)	
	{
		swap(heap[k], heap[u]);
		down(k);
	}
}
//up操作
void up(int u)
{
	while (u / 2 && heap[u] < heap[u / 2])
	{
		swap(heap[u], heap[u / 2]);
		u >>= 1;
	}
}
//建堆
for (int i = size / 2; i >= 1; --i)	
{
	down(i);
}
const int N = 100010;
int heap[N], size;
void down(int u)
{
	int k = u;
	if (2 * u <= size && heap[k] > heap[2 * i])	k = 2 * i;
	if (2 * u + 1 <= size && heap[k] > heap[2 * i + 1])	k = 2 * i + 1;
	if (k != u)
	{
		swab(heap[k], heap[u]);
		down(heap[k]);
	}
}
void up(int u)
{
	while (u / 2 && heap[u] < heap[u / 2])
	{
		swap(heap[u], heap[u / 2]);
		u >>= 1;
	}
}
for (int i = size / 2; i >= 1; --i)	down(i);
const int N = 100010;
int heap[N];
void down(int u, int size)
{
	int k = u;
	if (2 * u <= size && heap[k] > heap[2 * u])	k = 2 * i;
	if (2 * u + 1 <= size && heap[k] > heap[2 * u + 1])	k = 2 * i + 1;
	if (k != u)
	{
		swap(heap[k], heap[u]);
		down(k, size);
	}
}
void up(int u)
{
	while (u / 2 && heap[u] < heap[u / 2])
	{
		swap(heap[u], heap[u / 2])
		u >>= 1;
	}
}
for (int i = size / 2; i >= 1; --i)	down(i);
const int N = 100010;
int heap[N];
void down(int u, int size)
{
	int k = u;
	if (2 * u <= size && heap[k] > heap[2 * u])	k = 2 * u;
	if (2 * u + 1 <= size && heap[k] > heap[2 * u + 1])	k = 2 * u + 1;
	if (k != u)
	{
		swap(heap[k], heap[u]);
		down(k, size);
	}
}
void up(int u)
{
	while (u / 2 && heap[u] > heap[u / 2])
	{
		swap(head[u], head[u / 2]);
		u >>= 1;
	}
}
for (int i = size / 2; i >= 1; --i)	down(i);
const int N = 100010;
void down(int u, int size)
{
	int k = u;
	if (2 * u <= size && heap[k] > heap[2 * u])	k = 2 * u;
	if (2 * u + 1 <= size && heap[k] > heap[2 * u + 1])	k = 2 * u + 1;
	if (k != u)
	{
		swap(heap[u], heap[k]);
		down(k);
	}
}
void up(int u)
{
	while (u / 2 && heap[u] < heap[u / 2])
	{
		swap(heap[u], heap[u / 2]);
		u >>= 1;
	}
}
for (int i = size / 2; i >= 1; --i)	down(i);



