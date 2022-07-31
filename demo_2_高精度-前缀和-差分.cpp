//高精度加法
//C = A + B, A >= 0, B >= 0
vector<int> add(vector<int> &A, vector<int> &B)
{
    if (A.size() < B.size())	return add(B, A);

    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size(); i ++ )
    {
        t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }

    if (t) C.push_back(t);
    return C;
}
vector<int> add(vector<int>& A, vector<int>& B)
{
	if (A.size() < B.size())	return add(B, A);
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size(); ++i)
	{
		t += A[i];
		if (i < B.size())	t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t)	C.push_back(t);
	return C;
}
vector<int> add(vector<int> &A, vector<int> &B)
{
	if (A.size() < B.size())	return add(B, A);
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size(); ++i)
	{
		t += A[i];
		if (i < B.size())	t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t)	C.push_back(t);
	return C;
}
vector<int> add(vector<int>& A, vector<int>& B)
{
	if (A.size() < B.size())	return add(B, A);
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size(); ++i)
	{
		t += A[i];
		if (i < B.size())	t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t)	C.push_back(t);
	return C;
}
vector<int> add(vector<int> &A, vector<int> &B)	//A和B数组存储大整数的逆序，返回的数组也是大整数的逆序
{
	vector<int> C;
	int t = 0;	//t表示进位，初始为0
	
	for (int i = 0; i < A.size() || i < B.size(); ++i)
	{
		if (i < A.size())	t += A[i];
		if (i < B.size())	t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	C.push_back(1);
	
	return C;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || i < b.size(); ++i)
	{
		if (i < a.size())	t += a[i];
		if (i < b.size())	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return c;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || i < b.size(); ++i)
	{
		if (i < a.size())	t += a[i];
		if (i < b.size())	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return c;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || i < b.size(); ++i)
	{
		if (i < a.size())	t += a[i];
		if (i < b.size())	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return c;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || i < b.size(); ++i)
	{
		if (i < a.size())	t += a[i];
		if (i < b.size()) 	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return t;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	while (int i = 0; i < a.size() || i < b.size(); ++i)
	{
		if (i < a.size())	t += a[i];
		if (i < b.size())	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return c;
}
vector<int> add(vector<int> &a, vector<int> &b)
{
	if (a.size() < b.size())	return add(b, a);
	
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size(); ++i)
	{
		t += a[i];
		if (i < b.size())	t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	
	if (t)	c.push_back(1);
	
	return c;
}

//高精度减法（都转为大的整数减小的整数, a的位数大于等于b）
// C = A - B, 满足A >= B, A >= 0, B >= 0
bool cmp(vector<int>& A, vector<int>& B)
{
	if (A.size() != B.size())	return A.size() > B.size();
	for (int i = A.size() - 1; i >= 0; --i)
	{
		if (A[i] != B[i])
		{
			return A[i] > B[i];
		}
	}
	return true;
}
vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size(); i ++ )
    {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }

    while (C.size() > 1 && C.back() == 0) C.pop_back();	//去掉前导零
    return C;
}
int main()
{
	string a, b;
	vector<int> A, B;
	cin >> a >> b;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		A.push_back(a[i] - '0');
	}
	for (int i = b.size() - 1; i >= 0; --i)
	{
		B.push_back(b[i] - '0');
	}
	if (cmp(A, B))
	{
		auto C = sub(A, B);
		for (int i = C.size() - 1; i >= 0; --i)
		{
			printf("%d", C[i]);
		}
	}
	else
	{
		auto C = sub(B, A);
		printf("-");
		for (int i = C.size() - 1; i >= 0; --i)
	    {
			printf("%d", C[i]);
		}
	}

	return 0;
}
vector<int> sub(vector<int>& a, vector<int>& b)
{
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else	t = 0;
	}
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	return c;
}
vector<int> sub(vector<int>& a, vector<int>& b)
{
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		if (t < 0)	t = 1;
		else	t = 0;
	}
	while (b.size() > 1 && b.back() == 0)	c.pop_back();
}
vector<int>	sub(vector<int> &a, vector<int> &b)	////A和B数组存储大整数的逆序，返回的数组也是大整数的逆序
{
	vector<int> c;
	int t = 0;	//借位
	
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size)	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else	t = 0;
	}
	
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> sub(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else	t = 0;
	}
	
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> sub(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else	t = 0;
	}
	
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> sub(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else t = 0;
	}
	
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> sub(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size(); ++i)
	{
		t = a[i] - t;
		if (i < b.size())	t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)	t = 1;
		else	t = 0;
	}
	
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}

//高精度乘法，大正数乘一个普通的正数，注意这里使用大数的每一位乘普通的数
vector<int> mul(vector<int> &a, int b)
{
	vector<int> c;
	int t = 0;	//表示进位
	
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}
vector<int> mul(vector<int>& a, int b)
{
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	return c;
}
vector<int> mul(vector<int>& a, int b)
{
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	return c;
}
vector<int> mul(vector<int> &a, int b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}
vector<int> mul(vector<int> &a, int b)
{
	vector<int> c;
	int t = 0;
	
	for(int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}
vector<int> mul(vector<int> &a, int b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || t, ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}
vector<int> mul(vector<int> &a, int b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}

//高精度除法，大正数除一个普通的正数，模拟除法
vector<int> div(vector<int> &a, int b, int &r)	//a / b = c...r
{
	vector<int> c;
	r = 0;	//r为余数
	
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r %= b;
	}
	
	reserve(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> div(vector<int>& a, int b, int& r)
{
	vector<int> c;
	r = 0;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r = r % b;
	}
	reserve(c.begin(), c.end());
	while (c.siez() > 1 && c.back() == 0)	c.pop_back();
	return c;
}
vector<int> div(vector<int>& a, int b, int& r)
{
	vector<int> c;
	int r = 0;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r = r % b;
	}
	reserve(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	return c;
}
vector<int> div(vector<int>& a, int b, int& r)
{
	vector<int> c;
	int r = 0;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r = r % b;
	}
	reserver(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	return c;
}
vector<int> div(vector<int>& a, int b, int& r)
{
	vector<int> c;
	int r = 0;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r %= 10;
	}
	reserver(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	return c;
}
vector<int> div(vector<int> &a, int b, int &r)
{
	vector<int> c;
	r = 0;
	
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / b);
		r %= b;
	}
	
	reserve(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> div(vector<int> &a, int b, int &r)
{
	vector<int> c;
	r = 0;
	
	for (int i = a.size() - 1; i >= 0; --i)
	{
		r = r * 10 + a[i];
		c.push_back(r / 10);
		r %= 10;
	}
	
	reserve(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}
vector<int> div(vector<int> &a, int b, int &r)
{
	vector<int> c;
	r = 0;
	
	for (int i = a.size() - 1, i >= 0; --i)
	{
		r = 10 * r + a[i];
		c.push_back(r / b);
		r %= b;
	}
	
	c.reservve(c.begin(), c.end());
	while (c.size() > 1 && c.back() == 0)	c.pop_back();
	
	return c;
}

//一维前缀和
const int N = 100010
int a[N], s[N];
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	a[i] = a[i] + a[i - 1];		//自己变成自己的前缀和
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
for (int i = 1; i <= n; ++i)
{
	s[i] = s[i - 1] + a[i];
}
//二维前缀和，s[i][j]表示a[1~i][1~j]的所有数的和，即左上矩阵和
const int N = 100010;
int a[N][N], s[N][N];
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	}
}
//求左上角为x1y1右下角为x2y2的矩形的所有数的和
sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	}
}
sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	}
}
sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= n; ++j)
	{
		s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	}
}
sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];

//差分：已知原数组a，构造b数组使得ai=b1+b2...+bi，即原数组是差分数组的前缀和
//一维差分，原数组是差分数组的前缀和，原数组从a[l]到a[r]每个数加c只要差分数组b[l] = b[l] + c, b[r + 1] = b[r + 1] - c之后求前缀和即可得到所求的a
//最开时a是已经给出的，b是全0的，可以看成a从全0开始[1, 1]加a[1]，[2, 2]加a[2]，...，[n, n]加a[n]，这样做完后b[i]就有了
//a是原数组，b是差分数组，b上求前缀和即修改后的a数组
void insert(int b[], int l, int r, int c)
{
	b[l] += c;
	b[r + 1] -= c;
}
for (int i = 1; i <= n; ++i)	insert(b, i, i, a[i]);	//构造好了差分数组
//insert(b, l, r, c)	//对原数组[l, r]区间中的每个数加上c
for (int i = 1; i <= n; ++i)
{
	b[i] = b[i - 1] + b[i];	//又把b数组变成了自己的前缀和，返回原数组
}
void insert(int b[], int l, int r, int c)
{
	b[l] += c;
	b[r + 1] -= c;
}
for (int i = 1; i <= n; ++i)
{
	b[i] = b[i - 1] + b[i];
}
void insert(int b[], int l, int r, int c)
{
	b[l] += c;
	b[r + 1] -= c;
}
for (int i = 1; i <= n; ++i)
{
	b[i] = b[i - 1] + b[i];
}
//二维前差分，b[i][j]表示b[1-i][1-j]的所有数的和为a[i][j]，即左上矩阵和等于前缀和，它和一维差分类似
//a是原数组，b是差分数组，b上求前缀和即修改后的a数组
void insert(int** b, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		insert(b, i, j, i, j, a[i][j]);	//构造差分数组
	}
}
//insert(b, x1, y1, x2, y2, c);	//原数组一个小矩形加上一个数
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];	//差分数组转为前缀和
	}
}
void insert(int** b, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x2 + 1][y1] -= c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
}
void insert(int** b, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
}
void insert(int** a, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
}
void insert(int** b, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
}
void insert(int** b, int x1, int y1, int x2, int y2, int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= n; ++j)
	{
		b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
	}
}





