//哈希表的存储结构：开链法存储、开放地址法存储
//拉链法哈希：
const int N = 100010;
int h[N], e[N], ne[N], idx;
memset(h, -1, sizeof(h));
//哈希表中插入一个数
void insert(int x)
{
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}
//在哈希表中查询某个数是否存在
bool find(int x)
{
	int k = (x % N + N) % N;
	for (int i = h[k]; i != -1; i = ne[i])
	{
		if (x == ne[i])
		{
			return true;
		}
	}
	return false;
}
const int N = 100010;
int h[N], e[N], ne[N], idx;
memset(h, -1, sizeof(h));
void insert(int x)
{
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}
bool find(int x)
{
	int k = (x % N + N) % N;
	for (int i = h[k]; i != -1; i = ne[i])
	{
		if (e[i] == x)
		{
			return true;
		}
	}
	return false;
}
const int N = 100010;
int h[N], e[N], ne[N], idx;
memset(h, -1, memset(h));
void insert(int x)
{
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}
bool find(int x)
{
	int k = (x % N + N) % N;
	for (int i = h[k];; i != -1; i = ne[i])
	{
		if (x == e[i])	return true;
	}
	return false;
}
const int N = 100010;
int h[N], e[N], ne[N], idx;
memset(h, -1, sizeof(h));
void insert(int x)
{
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}
bool find(int x)
{
	int k = (x % N + N) % N
	for (int i = h[k]; i != -1; i = ne[i])
	{
		if (x == e[i])	return true;
	}
	return false;
}
const int N = 100010;
int h[N], e[N], ne[N], idx;
memset(h, -1, sizeof(h));
void insert(int x)
{
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
}
bool find(int x)
{
	int k = (x % N + N) % N;
	for (int i = h[k]; i != -1; i = ne[i])
	{
		if (x == e[i])	return true;
	}
	return false;
}

//开放寻址法
const int N = 200003, null = 0x3f3f3f3f;
int h[N];
memset(h, 0x3f, sizeof(h));
//如果x在哈希表中，返回x的下标；如果x不在哈希表中，返回x应该插入的位置
int find(int x)
{
	int k = (x % N + N) % N;
	while (h[k] != null && h[k] != x)
	{
		++k;
		if (k == N)	k = 0;
	}
	return k;
}
const int N = 200003, null = 0x3f3f3f3f;
int h[N];
memset(h, 0x3f, sizeof h);
int find(int x)
{
	int k = (x % N + N) % N;
	while (h[k] != null && h[k] != x)
	{
		++k;
		if (k == N)	k = 0;
	}
	return k;
}
const int N = 200003, null = 0x3f3f3f3f;
int h[N];
memset(h, 0x3f, sizeof h);
int find(int x)
{
	int k = (x % N + N) % N;
	while (h[k] != null && h[k] != x)
	{
		++k;
		if (k == N)	k = 0;
	}
	return k;
}
const int N = 200003, null = 0x3f3f3f3f;
int h[N];
memset(h, 0x3f, sizeof h);
int find(int x)
{
	int k = (x % N + N) % N;
	while (h[k] != null && h[k] != x)
	{
		++k;
		if (k == N)	k = 0;
	}
	return k;
}

//字符串哈希：字符串前缀哈希法，把一个字符串转换为数字再哈希
//可以用于快速判断两个字符串是否相等
typedef unsigned long long ULL;
const int N = 100010, P = 131;	//P也可以为13331
ULL h[N], p[N];
//初始化
p[0] = 1;
for (int i = 1; i <= n; ++i)
{
	p[i] = p[i - 1] * P;
	h[i] = h[i - 1] * P + str[i];
}
UUL get(int l, int r)
{
	return h[r] - h[l - 1] * p[r - l + 1];
}
typedef long long int ULL;
const int N = 100010, P = 131;
UUL h[N], p[N];
p[0] = 1;
for (int i = 1; i <= n; ++i)
{
	p[i] = p[i - 1] * P;
	h[i] = h[i - 1] * P + str[i];
}
UUL get(int l , int r)
{
	return h[r] - h[l- 1] * p[r - l + 1];
}
const int N = 100010, P = 131;
int h[N], p[N];
p[0] = 1;
for (int i = 1; i <= n; ++i)
{
	p[i] = p[i - 1] * P;
	h[i] = h[i - 1] * P + str[i];
}
UUL get(int l, int r)
{
	return h[r] - h[l - 1] * p[r - l + 1];
}
const int N = 100010, P = 131;
int h[N], p[N];
p[0] = 1;
for (int i = 1; i <= n; ++i)
{
	p[i] = p[i - 1] * P;
	h[i] = h[i - 1] * P + str[i];
}
UUL get(int l, int r)
{
	return h[r] - h[l - 1] * p[r - l + 1];
}

//stl常用容器
vector：size(), empty(), clear(), front(), back(), push_back(), pop_back(), begin(), end(), [], <
list
deque
array
stack
queue
priority_queue
map, multimap
set, multiset
unordered_map, unordered_multimap
unordered_set, unordered_multiset
pair<>用于存储二元组，p.first, p.second, <, 初始化pair<int, int> p; p = make_pair(10, 1)/p = {20, 2}


pre = NULL;
cur = head;
temp = null;


















