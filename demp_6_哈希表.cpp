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
	while (h[k] != null && )
}


















