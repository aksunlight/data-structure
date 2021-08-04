//双指针算法一般结构
for (int i = 0, j = 0; i < n; ++j)
{
	if (i < j && check(i, j))	++j;
}
for (int i = 0, j = 0; i < n; ++i)
{
	if (i < j && check(i, j))	++j;
}

//位运算
1.n的二进制表示中第k为是几
n >> k & 1
2.lowbit(x):返回x的最后一位1即最右边的1，如10100的1000又如29100的100
int lowbit(int x)
{
	return x & -x;
}

//离散化，简单说就是由数找下标
vector<int> alls;	//存储所有待离散化的值
sort(alls.begin(), alls.end());	//将所有值排序
alls.erase(alls.unique(alls.begin(), alls.end()), alls.end());	//去掉重复元素
//二分求出x对应的离散化的值
int find(int x)
	int l = 0, r = alls.size() - 1;
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (alls[mid] >= x)	r = mid;
		else	l = mid + 1;
	}
	
	return r + 1;	//由值映射导下标，映射到1，2，3，4，...
}
vector<int> alls;
sort(alls.begin(), alls.end());
alls.erase(alls.unique(alls.begin(), alls.end()), alls.end());
int find(int x)
{
	int l = 0, r = alls.size() - 1;
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (alls[mid] >= x)	r = mid;
		else	l = mid + 1;
	}
	return r + 1;
}
vector<int> alls;
sort(alls.begin(), alls.end());
alls.erase(alls.unique(alls.begin(), alls.end()), alls.end());
int find(int x)
{
	int l = 0, r = alls.size() - 1;
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (alls[mid] >= x)	r = mid;
		else	l = mid + 1;
	}
	return r + 1;
}

//区间合并，将所有存在交集的区间合并
typedef PII pair<int, int>
void merge(vector<PPI>& segs)
{
	vector<PII> res;
	sort(res.begin(), res.end());
	
	int st = -2e9, ed = -2e9;
	for (auto &seg : segs)
	{
		if (ed < seg.first)
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, seg.end);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	segs = seg;
}
typedef pair<int, int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(res.begin(), res.end());
	
	int st = -2e9, ed = -2e9;
	for (auto &seg : segs)
	{
		if (ed < seg.first)
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, sef.second);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	segs = res;
}
typedef pair<int, int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	for (auto &seg : segs)
	{
		if (ed < seg.first)
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, seg.second);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	segs = res;
}
typedef pair<int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	for (auto &seg : segs)
	{
		if (ed < seg.first)	
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = res.first, ed = res.second;
		}
		else	ed = max(ed, seg.second);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	segs = res;
}
typedef pair<int, int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	for (auto &seg : segs)
	{
		if (ed < seg.first)
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, seg.second);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	segs = res;
}
typedef pair<int, int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	for (auto &seg : segs)
	{
		if (ed < seg.first)	
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, seg.second());
	}
	if (st != -2e9)	res.push({st, ed});
	
	segs = res;
}
typedef pair<int, int> PII;
void merge(vector<PII> &segs)
{
	vector<PII> res;
	sort(segs.begin(), segs.end());
	
	int st = -2e9, ed = -2e9;
	for (auto &seg : segs)
	{
		if (ed < seg.first)
		{
			if (st != -2e9)	res.push_back({st, ed});
			st = seg.first, ed = seg.second;
		}
		else	ed = max(ed, seg.second);
	}
	if (st != -2e9)	res.push_back({st, ed});
	
	regs = res;
}
