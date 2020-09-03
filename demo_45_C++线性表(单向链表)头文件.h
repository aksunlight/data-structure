//#pragma once
#include<iostream>
using namespace std;

template <typename T>
struct Node
{
	T t;  //用户数据域
	struct Node<T>* next;  //链表域 
};

template <typename T>
class LinkList
{
	public:
		LinkList();
		~LinkList();
	public:
		int getlen();
		int insert(T &t, int pos);
		int get(int pos, T &t);
		int del(int pos, T &t);
		int cle();
	private:
		int length;
		Node<T>* head;
};

template <typename T>
LinkList<T>::LinkList()
{
	head = new Node<T>;
	head->next = NULL;
	length = 0;
}

template <typename T>
LinkList<T>::~LinkList()
{
	Node<T>* tmp = NULL;
	while(head != NULL)
	{
		tmp = head->next;
		delete head;
		head = tmp;
	}
}

template <typename T>
LinkList<T>::cle()
{
	Node<T>* tmp = NULL;
	while(head != NULL)
	{
		tmp = head->next;
		delete head;
		head = tmp;
	}
	
	head = new Node<T>;
	length = 0;
	return 0;
}

template <typename T>
int LinkList<T>::getlen()
{
	return length;
}

template <typename T>
int LinkList<T>::insert(T &t, int pos)
{
	Node<T>* current = head;
	Node<T>* tmp = new Node<T>;
	tmp->next = NULL;
	
	for(int i = 0; i < pos; i++)
	{
		current = current->next;
	}
	
	tmp->t = t;
	tmp->next = current->next;
	current->next = tmp;
	length++;
	
	return 0;
}

template <typename T>
int LinkList<T>::get(int pos, T &t)
{
	Node<T>* current = head;
	
	for(int i = 0; i < pos; i++)
	{
		current = current->next;
	}
	
	t = current->next->t;
	
	return 0;
}

template <typename T>
int LinkList<T>::del(int pos, T &t)
{
	Node<T>* current = head;
	
	for(int i = 0; i < pos; i++)
	{
		current = current->next;
	}
	
	Node<T>* tmp = current->next;
	current->next = tmp->next;
	
	t = tmp->t;
	delete tmp;
	length--;
	
	return 0;
}

