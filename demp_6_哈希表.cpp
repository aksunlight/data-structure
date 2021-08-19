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




















