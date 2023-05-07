#pragma once
#include <iostream>
using namespace std;

struct Node // узел
{
	Node* prev = nullptr, * next = nullptr; // указатели
	int data = 0; // ключ
};

class List 
{
private:
	int size; // размер
	Node* head = nullptr, * tail = nullptr;
public:
	// конструкторы и деструктор
	List();
	List(int s);
	List(const List&);
	~List();
	// методы работы со списком
	int front() { return head->data; };
	int back() { return tail->data; };
	void pushback(int data);
	void pushfront(int data);
	void popback();
	void popfront();
	bool empty() { return size == 0; };
	// перегрузка операций
	List& operator=(const List&);
	int& operator[](int index);
	int& operator()();
	int& operator+(int);
	List operator*(List&);
	friend ostream& operator <<(ostream&, const List&);
	friend istream& operator >>(istream&, const List&);
};
