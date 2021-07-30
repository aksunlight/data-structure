//快速排序模板--基于分治
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
void quick_sort(int a[], int l; int r)
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

//归并排序--基于分治
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





















