//快速排序模板--基于分治
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
作者：yxc
链接：https://www.acwing.com/blog/content/277/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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

//归并排序--基于分治
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
作者：yxc
链接：https://www.acwing.com/blog/content/277/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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

//二分查找，找出左半段的右边界1和右半段的左边界2
bool check(int x)	{...}	//检查x是否满足某种性质
int bsearch_1(int l, int r)	//找出左半段的右边界
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (check(mid))	l = mid;
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
		if (check(mid))	r = mid;
		else l = mid + 1;
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
bool check(int x)	{...}
int bsearch_1(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (check(mid))	r = mid;
		else	l = mid + 1;
	}
	
	return l;
}
int bsearch_2(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (check(mid))	l = mid;
		else	r = mid - 1;
	}
	
	return l;
}
double check(double x)	{...}
double bsearch(double l, double r)
{
	const double eps = 1e-6;
	while (r - l > eps)
	{
		double mid = (l + r) / 2;
		if (check(mid))	r = mid;
		else l = mid;
	}
	return l;
}
int check(int x)	{...}
int bsearch_1(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (check(mid))	r = mid;
		else l = mid + 1;
	}
	return l;
}
int bsearch_2(int l, int r)
{
	while (l < r)
	{
		int mid = (l + r + 1) >> 1;
		if (check(mid))	l = mid;
		else r = mid - 1;
	}
	return l;
}
double check(double x)	{...}
double bsearch_3(double l, double r)
{
	const double eps = 1e-6;
	while (r - l > eps)
	{
		double mid = (l + r) / 2;
		if (check(mid))	r = mid;
		else l = mid;
	}
	return l;
}
















