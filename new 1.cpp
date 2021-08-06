//邻接表模拟单链表
const int N = 100010;
int e[N], ne[N];	//e数组存储节点值，ne数组存储节点的下一个节点标号
int head = -1, idx = 0;
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
int e[N], r[N], l[N], idx;
//初始化
void init()
{
	r[0] = 1;
	l[1] = 0;
	idx = 2;
}
//在k节点后插入一个节点
void insert(int k, int x)
{
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx;
	idx++;
}
//删除k号节点
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