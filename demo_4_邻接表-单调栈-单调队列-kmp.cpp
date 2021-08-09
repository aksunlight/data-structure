//邻接表模拟单链表
const int N = 100010;
int e[N], ne[N];	//e数组存储节点值，ne数组存储节点的下一个节点标号
int head = -1, idx = 0;	//head表示头结点的下标，idx存储当前用到了那个点
//将节点从头插入
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	++idx;
}
//将节点插入k号节点后
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	++idx;
}
//删除k号节点后的点
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cout << e[i] << endl;
const int N = 100010;
int idx = 0, head = -1;
int e[N], ne[N];
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	++idx;
}
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k]
	ne[k] = idx;
	++idx;
}
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cout << e[N] << endl;
const int N = 100010;
int head = -1, idx = 0;
int e[N], ne[N];
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	++idx;
}
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	++idx;
}
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cut << e[i] << endl;
const int N = 100010;
int head = -1, idx = 0;
int e[N], ne[N];
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++
}
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
}
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cout << e[i] << endl;
const int N = 100010;
int head = -1, idx = 0;
int e[N], ne[N];
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
}
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
}
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cout << e[i] << endl;
const int N = 100010;
int head = -1, idx = 0;
int e[N], ne[N];
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
}
void add_to_k(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
}
void delete_k(int k)
{
	ne[k] = ne[ne[k]];
}
for (int i = head; i != -1; i = ne[i])	cout << e[i] << endl;

//邻接表模拟双链表
const int N = 100010;
int e[N], l[N], r[N], idx;
void init(void)
{
	r[0] = 1, l[1] = 0;	//取巧，0点右边是1，1点左边是0
	idx = 2;
}
//下标是k的点的右边插入x
void add(int k, int x)
{
	e[idx] = x;
	r[idx] = r[k];
	l[idx] = k;
	l[r[k]] = idx;
	r[k] = idx;
	idx++;
}
//删除第k号节点
void remove(int k)
{
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}
const int N = 100010;
int e[N], l[N], r[N], idx;
void init()
{
	r[0] = 1;
	l[1] = 0;
	idx = 2;
}
void insert(int k, int x)
{
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx;
	idx++;
}
void remove(int k)
{
	l[r[k]] = l[k];
	r[l[k]] = r[k];
}
for (int i = 0; i != 1; i = r[i])	cout << e[i] << endl;
const int N = 100010;
int e[N], r[N], l[N], idx;
void init()
{
	r[0] = 1;
	l[1] = 0;
	idx = 2;
}
void insert(int k, int x)
{
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx;
	idx++;
}
void remove(int k)
{
	l[r[k]] = l[k];
	r[l[k]] = r[k];
}

//栈
const int N = 100010;
int st[N], tt;
void push(int x)
{
	st[++tt] = x;
}
void pop()
{
	tt--;
}
int top()
{
	return st[tt];
}
bool empty()
{
	if (tt > 0)	return false;
	else	return true;
}
const int N = 100010;
int st[N], tt;
void push(int x)
{
	st[++tt] = x;
}
void pop()
{
	tt--;
}
st[tt];
if (tt > 0)
	
//队列
const int N = 100010;
int que[N], head = 0, tail = -1;
void push(int x)
{
	que[++tail] = x;
}
void pop()
{
	head++;
}
que[head];
if (head <= tail)

//单调栈，给定一个序列，求每一数左边离他最近的且比他小的数是那个
const int N = 100010;
int stk[N], tt;
for (int i = 0; i < n; ++i)
{
	int x;
	cin >> x;
	while (tt && stk[tt] >= x)	tt--;
	if (tt)	cout << stk[tt] << ' ';
	else	cout << -1 << ' ';
	stk[++tt] = x;
}
//单调队列，用于求滑动窗口的最大/最小值
const int N = 100010;
int a[N], que[N], head = 0, teil = -1;
for (int i = 0; i < n; ++i)	//最小
{
	if (head <= tail && i - k + 1 > que[head])	head++;
	while (head <= tail && a[que[tail]] >= a[i])	tail--;
	que[++tail] = i;
	if (i >= k - 1)	cout << a[que[head]];
}
for (int i = 0; i < n; ++i)	//最大
{
	if (head <= tail && i - k + 1 > que[head])	head++;
	while (head <= tail && a[que[tail]] <= a[i])	tail--;
	que[++tail] = i;
	if (i >= k - 1)	cout << a[que[head]];
}

//KMP算法
next[i] = j ==> p[1, j] == p[i - j + 1, i];
int n, m;	//n为模式串长度，m为原字符串长度
char p[N], s[M];	//p为模式串，s为原字符串
int ne[N];
//求next的过程
for (int i = 2, j = 0; i <= n; i ++ )
{
    while (j && p[i] != p[j + 1]) j = ne[j];
    if (p[i] == p[j + 1]) j ++ ;
    ne[i] = j;
}
// 匹配
for (int i = 1, j = 0; i <= m; i ++ )
{
    while (j && s[i] != p[j + 1]) j = ne[j];
    if (s[i] == p[j + 1]) j ++ ;
    if (j == n)
    {
        j = ne[j];
        // 匹配成功后的逻辑
		printf("%d ", i - n + 1);
    }
}

