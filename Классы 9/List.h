#pragma once
#include <iostream>
using namespace std;

struct Node // ����
{
	Node* prev = nullptr, * next = nullptr; // ���������
	int data = 0; // ����
};

class List 
{
private:
	int size; // ������
	Node* head = nullptr, * tail = nullptr;
public:
	// ������������ � ����������
	List();
	List(int s);
	List(const List&);
	~List();
	// ������ ������ �� �������
	int front() { return head->data; };
	int back() { return tail->data; };
	void pushback(int data);
	void pushfront(int data);
	void popback();
	void popfront();
	bool empty() { return size == 0; };
	// ���������� ��������
	List& operator=(const List&);
	int& operator[](int index);
	int& operator()();
	int& operator+(int);
	List operator*(List&);
	friend ostream& operator <<(ostream&, const List&);
	friend istream& operator >>(istream&, const List&);
};
