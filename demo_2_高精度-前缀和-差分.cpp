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















