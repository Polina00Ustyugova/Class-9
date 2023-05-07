#pragma once 
#include <string> 
#include <iostream> 
using namespace std;
class Error 
{
public:
	virtual void what() = 0;
};
class IndexError : public Error // ������ � ������� 
{
protected:
	string msg;
public:
	IndexError() { msg = "������ � �������\n"; }
	virtual void what() { cout << msg; }
};
class SizeError : public Error  // ������ � �������
{
protected:
	string msg;
public:
	SizeError() { msg = "������ � �������\n"; }
	virtual void what() { cout << msg; }
};
class SizeError2 : public Error
{
protected:
	string msg;
public:
	SizeError2() { msg = "������ � ������\n"; }
	virtual void what() { cout << msg; }
};
