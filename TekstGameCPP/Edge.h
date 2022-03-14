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
		return data;
	}

	Node<T> To;

	T getDataNodeFrom()
	{
		return data;
	}
};

