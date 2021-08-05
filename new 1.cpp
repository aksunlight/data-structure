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



