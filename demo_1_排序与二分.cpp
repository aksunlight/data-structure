//快速排序模板--基于分治 O(nlogn)
//1.确定分界点：q[l], q[(l+r)/2], q[r], 随机
//2.调整区间：左边区间里的数都小于等于分界点的值，右边区间的数都大于等于分界点的值
//3.递归处理左右两段
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return; //if (l == r)	return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;

	int x = a[l], i = l - 1, j = r + 1;
	while (i < j)
	{
		do ++i; while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j), quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	while (i < j)
	{
		do ++i; while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j), quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	while (i < j)
	{
		do ++i;	while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j), quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i;	while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int i = l - 1, j = r + 1, x = l + r >> 1;
	while (i < j)
	{
		do ++i;	while(a[i] < a[x]);
		do --j; while(a[j] > a[x]);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j), quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int i = l - 1, j = r + 1, x = l + r >> 1;
	while (i < j)
	{
		do ++i; while(a[i] < a[x]);
		do --j; while(a[j] > a[x]);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j), quick_sort(a, j + 1, r);	
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i;	while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	while (i < j)
	{
		do ++i; while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i; while (a[i] < x);
		do --j; while (a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l; int r)
{
	if (l >= r)	return;
	
	int x = a[l + r >> 1], i = l - 1, j = r + 1;
	while (i < j)
	{
		do ++i; while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	
	int x = a[l], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i; while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i; while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l], i = l - 1, r = r + 1;
	while (i < j)
	{
		do ++i; while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}
void quick_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int x = a[l], i = l - 1, j = r + 1;
	
	while (i < j)
	{
		do ++i;	while(a[i] < x);
		do --j; while(a[j] > x);
		if (i < j)	swap(a[i], a[j]);
	}
	
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}

//归并排序--基于分治 nlogn
//1.确定分界点mid = l + r >> 2
//2.递归排序对半的左右两边
//3.拿左右两边第一个数两两比较进行归并；合二为一
void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int mid = l + r >> 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
        else tmp[k ++ ] = q[j ++ ];

    while (i <= mid) tmp[k ++ ] = q[i ++ ];
    while (j <= r) tmp[k ++ ] = q[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = l + r >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
		if (a[i] <= a[j])	tmp[k++] = a[i++];
		else	tmp[k++] = a[j++];
	while (i <= mid)	tmp[k++] = a[i++];
	while (j <= r)	tmp[k++] = a[j++];
	for (i = l, j = 0; i <= r; ++i, ++j)	a[i] = tmp[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = l + r >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	int i = l, j = mid + 1, k = 0;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[i++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	for (i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[i];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = l + r >> 1;
	
	merge_sort(a, l, mid);
	merge_sort(a, mid + 1, r);
	
	int i = l, j = mid + 1, k = 0;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0, i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
		
	int i = l, j = mid + 1, k = 0;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] = a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}
void merge_sort(int a[], int l, int r)
{
	if (l >= r)	return;
	int mid = (l + r) >> 1;
	merge_sort(a, l, mid), merge_sort(a, mid + 1, r);
	
	int i = l, j = mid + 1, k = 0;
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])	b[k++] = a[i++];
		else	b[k++] = a[j++];
	}
	while (i <= mid)	b[k++] = a[i++];
	while (j <= r)	b[k++] =a[j++];
	
	for (int i = l, j = 0; i <= r; ++i, ++j)	a[i] = b[j];
}

//二分查找，某个整数可以分为左右半段，找出左半段的右边界1和右半段的左边界2
bool check(int x)	{...}	//检查x是否满足某种性质
int bsearch_1(int l, int r)	//找出左半段的右边界
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (check(mid))	l = mid;	//判断mid在不在左半段
		else	r = mid - 1;
	}
	
	return l;
}
bool check(int x)	{...}
int bsearch_2(int l, int r)	//查找右半段的左边界
{
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (check(mid))	r = mid;	//判断mid在不在右半段
		else l = mid + 1;
	}
	
	return l;
}
int bsearch_1(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (check(mid))	l = mid;
		else	r = mid - 1;
	}
	return l;
}
int bsearch_2(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (check(mid))	r = mid;
		else	l = mid + 1;
	}
	return l;
}
bool check(double x) {...}	//检查x是否满足某种性质
double bsearch_3(double l, double r)
{
	const double eps = 1e-6;	 //eps表示精度，取决于题目对精度的要求
	while (r - l > eps)
	{
		double mid = (l + r) / 2;
		if (check(mid))	r = mid;
		else	l = mid;
	}
	return l;
}
//开平方
#include <iostream>
int main()
{
	double x;
	cin >> x;

	double l = 0, r = x;
	while (r - l > 1e-8)    //直接迭代100次 for(int i = 1; i <= 100; ++i)
	{
		double mid = (l + r) / 2;
		if (mid * mid >= x)	r = mid;
		else	l = mid;
	}
	cout << l << endl;

	return 0;
}















