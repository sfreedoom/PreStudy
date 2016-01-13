#include "mytest.h"
#include <iostream>

COperation::COperation()
{
	std::cout << "COperation construtor!" << std::endl;
}

double COperation::getResult()
{
	return double(0);	
}

AddOperation::AddOperation(int lhs, int rhs): m_first(lhs), m_right(rhs){
	std::cout << "AddOperation construtor with Parameter!" << std::endl;
}

double AddOperation::getResult()
{
	return m_first + m_second;
}

Context::Context(COperation* theOP)
{
	myOP = theOP;
}

double Context::getResult()
{
	return myOP->getResult();
}
