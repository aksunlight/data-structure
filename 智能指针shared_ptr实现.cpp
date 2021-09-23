//环行引用
class Node
{
public:
	Node()
	{
		cout << "Node()" << endl;
	}
	~Node()
	{
		cout << "~Node()" << endl;
	}
private:
	shared_ptr<Node> m_pre;
	shared_ptr<Node> m_next;
};

int main()
{
	share_ptr<Node> p1(new Node());
	share_ptr<Node> p2(new Node());
	
	p1->m_next = p2;
	p2->m_pre = p1;
}


//智能指针shared_ptr代码实现
template<typename T>
class SharePtr
{
public:
	SharePtr(): m_ptr(nullptr), m_count(new size_t(0))	{}
	SharePtr(T* t = nullptr): m_ptr(t), m_count(new size_t)
	{
		if (m_ptr == nullptr)	m_count = 0;
		else	m_count = 1;
	}
	
	//拷贝构造函数
	SharePtr(const SharePtr& p): m_ptr(p.m_ptr), m_count(p.m_count)
	{
		if (m_ptr != nullptr)	++(*m_count);
	}
	
	//拷贝赋值运算
	SharePtr& operator=(const SharePtr& p)
	{
		if (m_ptr != p.m_ptr)
		{
			if (m_ptr != nullptr && --(*m_count) == 0)
			{
				delete m_ptr;
				delete m_count;
				m_ptr = nullptr;
				m_count = nullptr;
			}
			m_ptr = p.m_ptr;
			m_count = p.m_count;
			if (m_ptr != nullptr)	++(*m_count);
		}
		return *this;
	}

	T& operator*()
	{
		return *m_ptr;
	}
	T* operator->()
	{
		return m_ptr;
	}
	
	~SharePtr()
	{
		if (m_ptr != nullptr && --(*m_count) == 0)
		{
			delete m_ptr;
			delete m_count;
			m_ptr = nullptr;
			m_count = nullptr;
		}
	}
private:
	T* m_ptr;
	size_t* m_count;
};