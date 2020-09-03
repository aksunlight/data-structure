#include<stdio.h>
#include<stdlib.h> 
#include<stdbool.h> 
#define n 10 

int a[n] = {0};
int b[n + 1] = {0}; 

//为数组赋值 
void assignment(void)
{
	for(int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	} 
}

void assignmentb(void)
{
	for(int i = 1; i < n + 1; i++)
	{
		b[i] = rand() % 100;
	} 
}

//打印数组 
void print(void)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void printb(void)
{
	for(int i = 1; i < n + 1; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}

//直接插入排序
//稳定且算法时间复杂度为O(n^2) 
void InsertSort(void)
{
	int i, j;
	for(i = 1; i < n; i++)
	{
		if(a[i] < a[i - 1])
		{
			int tmp = a[i];
			for(j = i - 1; tmp < a[j]; j--)  //比较 
			{
				a[j + 1] = a[j];  //移动 
			}
			a[j + 1] = tmp;
		}
	}
}

//折半插入排序
//稳定且算法时间复杂度为O(n^2) 
void BinarySort(void)
{
	int i, j, low, high, mid;
	for(i = 1; i < n; i++)
	{
		int tmp = a[i];
		low = 0;
		high = i - 1;
		while(low <= high)  //默认原数列递增有序，递增有序还需要排序吗，这个没什么用 
		{
			mid = (low + high) / 2;
			if(a[mid] > tmp)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		for(j = i - 1; j >= high + 1; j++)
		{
			a[j + 1] = a[j];
		}
		a[high + 1] = tmp;
	}
} 

//希尔排序
//取一个小于n的步长d1，把表中全部记录分成d1个组 
//然后在各组中直接插入排序，然后取第二个步长d2<d1
//重复上述过程直到d=1，即所有记录在同一组中
//最后再进行一次直接插入排序即得到有序记录表 
//不稳定且算法时间复杂度为O(n^1.3)
void ShellSort(void)
{
	int i, j, dk;
	for(dk = n / 2; dk >= 1; dk /= 2)
	{
		for(i = dk; i < n; i++)
		{
			if(a[i] < a[i - dk])
			{
				int tmp = a[i];
			    for(j = i - dk; tmp < a[j]; j -= dk)
			    {
			    	a[j + dk] = a[j];
				}
				a[j + dk] = tmp;
			}
		}
	} 
}

//冒泡排序
//稳定且算法时间复杂度为O(n^2) 
void BubbleSort(void)
{
	for(int i = 0; i < n - 1; i++)
	{
		bool flag = false;  //表示本趟冒泡是否发生交换的标志 
//		for(int j = n - 1; j > i; j--)  //把小的往前冒 
//		{
//			if(a[j - 1] > a[j])
//			{
//				int tmp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = tmp;
//				flag = true;  //本趟排序发生了交换 
//			}
//    	}
        for(int j = 0; j < n - i - 1; j++)  //把大的往后冒 
    	{
    		if(a[j] > a[j + 1])
    		{
    			int tmp = a[j];
    			a[j] = a[j + 1];
    			a[j + 1] = tmp;
    			flag = true;  //本趟排序发生了交换
			}
		}
		if(flag = false)
    	{
    		return;
		}
	}
}

//快速排序的基本思想是基于分治法的：在带排序表L[1...n] 
//中任取一个元素pivot作为基准，通过一趟排序将带排序表
//划分成独立的两部分L[1...k-1]1和L[k+1...n]2，使得1中所有
//元素小于pivot，2中所有元素大于或等于pivot，则pivot放在了
//最终位置L[k]上，这个过程就是一趟快排，最后分别递归地对两个
//子表重复上述过程，直到每部分内只有一个元素或空为止，即所有元素
//放在了其最终位置 
//不稳定且时间复杂度为nlog2n 
void QuickSort(int low, int high)
{
	if(low >= high)
	{
		return;
	}
	int i = low, j = high, x = a[low];
	while(i < j)
	{
		while(i < j && a[j] >= x)
		{
			j--;
		}
		if(i < j)
		{
			a[i++] = a[j];
		}
		while(i < j && a[i] < x)
		{
			i++;
		}
		if(i < j)
		{
			a[j--] = a[i];
		}
	}
	a[i] = x;
	QuickSort(low, i - 1);
	QuickSort(i + 1, high);
} 

//简单选择排序
//不稳定且算法时间复杂度为O(n^2)
void SelectSort(void)
{
	for(int i = 0; i < n - 1; i++)
	{
//      边比较边交换 
//		for(int j = i + 1; j < n; j++)
//		{ 
//			if(a[j] < a[i])
//			{
//				int tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		} 
//      先找下标再交换元素 
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
        	if(a[j] < a[min])
        	{
        		min = j;
			}
		}
		if(min != i)
		{
			int tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
} 

void AdjustDown(int k, int len)
{
	int tmp = b[k];  //或者a[0] = a[k] 
	for(int i = 2 * k; i <= len; i *= 2)
	{
		if(i < len && b[i] < b[i + 1])
		{
			i++;  //取key较大的子节点的下标 
		}
		if(tmp >= b[i])
		{
			break;
		} 
		else
		{
			b[k] = b[i];
			k = i;  //k是被筛选节点最终位置下标 
		}
	}
	b[k] = tmp;
}

void BulidMaxHeap(int len)
{
	for(int i = len / 2; i > 0; i--)  //从i=[n/2]到i=1反复调整堆 
	{
		AdjustDown(i, len);  //对以i节点为根的子树进行筛选 
	}
} 

void HeapSort(int len)
{
	BulidMaxHeap(len);
	for(int i = len; i > 1; i--)  //n-1趟交换和健堆过程 
	{
		int tmp = b[1];
		b[1] = b[i];
		b[i] = tmp;
		AdjustDown(1, i - 1);  //把剩余的i-1个元素整理成堆 
	}
}

int main(void)
{
	/*********插入排序*********/
	assignment(); 
	printf("未排序\n"); 
	print();
	InsertSort();  
	printf("直接插入排序\n"); 
	print();
	
//	assignment(); 
//	printf("未排序\n"); 
//	print();
//	BinarySort();  
//	printf("折半插入排序\n"); 
//	print();
	
	assignment(); 
	printf("未排序\n"); 
	print();
	ShellSort();  
	printf("希尔排序\n"); 
	print();
    
	/*********交换排序*********/
	assignment(); 
	printf("未排序\n"); 
	print();
	BubbleSort();  
	printf("冒泡排序\n"); 
	print();
	
	assignment(); 
	printf("未排序\n"); 
	print();
	QuickSort(0, n - 1);  
	printf("快速排序\n"); 
	print();
	
	/*********选择排序*********/
	assignment(); 
	printf("未排序\n"); 
	print();
	SelectSort();  
	printf("简单选择排序\n"); 
	print();
	
	assignmentb(); 
	printf("未排序\n"); 
	printb();
	HeapSort(n);  
	printf("堆排序（大根堆）\n"); 
	printb();
	
//堆排序是一种树形选择排序方法，它的特点是：在排序过程中，将L[1...n]回看成是一棵完全二叉树
//的顺序存储结构，利用完全二叉树中双亲结点和孩子结点之间的内在关系，在当前无序区中选择关键字最大
//（或最小）的元素。
//堆的定义如下：n个关键字序列L[1...n]称为堆，当且仅当该序列满足：
//L(i)<L(2i)且L(i)<L(2i+1)或L(i)>L(2i+1)且L(i)>L(2i)
//排序的关键是构造初始堆，对初始序列建堆，就是一个反复筛选的过程。n个结点的完全二叉
//树，最后一个结点是第正[n/2]个结点的孩子。对第[n/2]个结点为根的了树筛选（对于大根堆；
//若根结点的关键字小于左右子女中关键字较大者，则交换），使该子树成为堆。之后向前依次对
//各结点([n/2]-1到1）为根的子树进行筛选，看该结点值是否大于其左右子结点的值，若不是，将
//左右子结点中较大值与之交换，交换后可能会破坏下一级的堆，于是继续采用上述方法构造下一
//级的堆，直到以该结点为根的子树构成堆为止。反复利用上述调整堆的方法建堆，直到根结点。
//应堆这种数据结构进行排序的思路很简单，首先将存放在L[1...n]中的n个元素建成初始堆
//由于堆本身的特点（以大顶堆为例）堆顶元素就是最大值。输出堆顶元素后，通常将堆底
//元素送入堆顶，此时根结点己不满足人顶堆的性质，堆被破坏，将堆顶元素向下调整使其
//继续保持大顶堆的性质，再输出堆顶元素。如此重复，直到堆中仅剩下一个元素为止。

    return 0;
}
