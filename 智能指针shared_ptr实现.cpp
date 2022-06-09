//环行引用
/*
#include <iostream>
using namespace std;
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
*/

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

#pragma once
#include <utility>
#include <assert.h>
#include <string.h>

namespace trivial
{

// A trivial String class that designed for write-on-paper in an interview
class String
{
 public:
  String()
    : data_(new char[1])
  {
    *data_ = '\0';
  }

  String(const char* str)
    : data_(new char[strlen(str) + 1])
  {
    strcpy(data_, str);
  }

  String(const String& rhs)
    : data_(new char[rhs.size() + 1])
  {
    strcpy(data_, rhs.c_str());
  }
  /* Implement copy-ctor with delegating constructor in C++11
  String(const String& rhs)
    : String(rhs.data_)
  {
  }
  */

  ~String() noexcept
  {
    delete[] data_;
  }

  /* Traditional:
  String& operator=(const String& rhs)
  {
    String tmp(rhs);
    swap(tmp);
    return *this;
  }
  */
  // In C++11, this is unifying assignment operator
  String& operator=(String rhs) // yes, pass-by-value
  {
    // http://en.wikibooks.org/wiki/More_C++_Idioms/Copy-and-swap
    swap(rhs);
    return *this;
  }

  // C++11 move-ctor
  String(String&& rhs) noexcept
    : data_(rhs.data_)
  {
    rhs.data_ = nullptr;
  }

  /* Not needed if we have pass-by-value operator=() above,
   * and it conflits. http://stackoverflow.com/questions/17961719/
  String& operator=(String&& rhs)
  {
    swap(rhs);
    return *this;
  }
  */

  // Accessors

  size_t size() const
  {
    return strlen(data_);
  }

  const char* c_str() const
  {
    return data_;
  }

  void swap(String& rhs)
  {
    std::swap(data_, rhs.data_);
  }

 private:
  char* data_;
};

class String
{
	private:
		char* data_;
	public:
		String() : data_(new char[1])
		{
			*data_ = '\0';
		}
		String(const char* str) : data_(new char[strlen(str) + 1])
		{
			strcpy(data_, str);
		}
		String(const String& s) : data_(new char[s.size() + 1])
		{
			strcpy(data_, s.c_str());
		}
		/*
		String(const String& s) : String(s.data_)
		{
			
		}
		*/
		String(String&& s)	noexcept : data_(s.data_)
		{
			s.data_ = nullptr;
		}

		~String()	noexcept
		{
			delete[] data_;
		}

		String& operator=(String s)
		{
			swap(s);
			return *this;
		}
		/* Traditional:
        String& operator=(const String& rhs)
        {
            String tmp(rhs);
            swap(tmp);
            return *this;
        }
		/* Not needed if we have pass-by-value operator=() above,
         * and it conflits. http://stackoverflow.com/questions/17961719/
        String& operator=(String&& rhs)
        {
            swap(rhs);
            return *this;
        }
  		*/
	  	
		size_t size()	const
		{
			return strlen(data_);
		}
		const char* c_str()	const
		{
			return data_;
		}
		void swap(String& s)
		{
			std::swap(data_, s.data_);
		}
};
class String
{
	private:
		char* data_;
	
	public:
		String() : data_(new char[1])
		{
			*data_ = '\0';
		}
		String(const char* s) : data_(new char[strlen(s) + 1])
		{
			strcpy(data_, s);
		}
		String(const String& s) : data_(new char[s.size() + 1])
		{
			strcpy(data_, s.c_str());
		}
		String(String&& s) noexcept : data_(s.data_)
		{
			s.data_ = nullptr;
		}
		~String() noexcept
		{
			delete[] data_;
		}
		String& operator=(String s)
		{
			swap(s);
			return *this;
		}
		size_t size() const
		{
			return strlen(data_);
		}
		const char* c_str() const
		{
			return data_;
		}
		void swap(String& s)
		{
			std::swap(data_, s.data_);
		}
};

}

namespace trivial2
{

// string in C++11 with a length member
class String
{
 public:
  String() noexcept
    : data_(nullptr), len_(0)
  { }

  ~String()
  {
    delete[] data_;
  }

  // only read str when len > 0
  String(const char* str, size_t len)
    : data_(len > 0 ? new char[len+1] : nullptr), len_(len)
  {
    if (len_ > 0)
    {
      memcpy(data_, str, len_);
      data_[len_] = '\0';
    }
    else
    {
      assert(data_ == nullptr);
    }
  }

  String(const char* str)
    : String(str, strlen(str))
  { }

  String(const String& rhs)
    : String(rhs.data_, rhs.len_)
  { }

  String(String&& rhs) noexcept
    : data_(rhs.data_), len_(rhs.len_)
  {
    rhs.len_ = 0;
    rhs.data_ = nullptr;
  }

  String& operator=(String rhs)
  {
    swap(rhs);
    return *this;
  }

  void swap(String& rhs) noexcept
  {
    std::swap(len_, rhs.len_);
    std::swap(data_, rhs.data_);
  }

  // const char* data() const { return c_str(); }
  const char* c_str() const noexcept { return data_ ? data_ : kEmpty; }
  size_t size() const noexcept { return len_; }

 private:
  char* data_;
  size_t len_;
  static const char kEmpty[];
};

// const char String::kEmpty[] = "";
}