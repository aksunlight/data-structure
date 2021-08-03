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