#pragma once 
#include <string> 
#include <iostream> 
using namespace std;
class Error 
{
public:
	virtual void what() = 0;
};
class IndexError : public Error // Ошибка в индексе 
{
protected:
	string msg;
public:
	IndexError() { msg = "Ошибка в индексе\n"; }
	virtual void what() { cout << msg; }
};
class SizeError : public Error  // ошибка в размере
{
protected:
	string msg;
public:
	SizeError() { msg = "Ошибка в размере\n"; }
	virtual void what() { cout << msg; }
};
class SizeError2 : public Error
{
protected:
	string msg;
public:
	SizeError2() { msg = "Ошибка в числах\n"; }
	virtual void what() { cout << msg; }
};
