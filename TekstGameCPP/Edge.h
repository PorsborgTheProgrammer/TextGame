#pragma once
#include "Node.h"
template <class T>

class Edge
{

private:
	void setNodeFrom(T d)
	{
		data = d;
	}

	void setNodeTo(T d)
	{
		data = d;
	}

public:

	Node<T> From;

	T getDataNodeFrom()
	{
		return From;
	}

	Node<T> To;

	T getDataNodeFrom()
	{
		return To;
	}
};

