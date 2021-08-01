//高精度加法
vector<int> add(vector<int> &A, vector<int> &B)	//A和B数组存储大正数的逆序，返回的数组也是大正数的逆序
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

//高精度减法（都转为大的正数减小的正数, a的位数大于b或者位数相同）
vector<int>	sub(vector<int> &a, vector<int> &b)	////A和B数组存储大正数的逆序，返回的数组也是大正数的逆序
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
	
	for(int i = 0; i < a.size(); ++i)
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
	
	while (int i = 0; i < a.size(); ++i)
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
	
	while (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return c;
}
vector<int> mul(vector<int> &a, vector<int> &b)
{
	vector<int> c;
	int t = 0;
	
	for (int i = 0; i < a.size() || t; ++i)
	{
		if (i < a.size())	t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	
	return t;
}
vector<int> mul(vector<int> &a, vector<int> &b)
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
//二维前缀和
const int N = 100010;
int a[N][N], b[N][N];
for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m; ++j)
	{
		s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	}
}
求左上角为x1y1右下角为x2y2的矩形的所有数的和
sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];

//一维差分，原数组是差分数组的前缀和，原数组从a[l]到a[r]每个数加c只要差分数组b[l] = b[l] + c, b[r + 1] = b[r + 1] - c之后求前缀和即可得到所求的a
//最开时a是已经给出的，b是全0的，可以看成a从全0开始[1, 1]加a[1]，[2, 2]加a[2]，...，[n, n]加a[n]









