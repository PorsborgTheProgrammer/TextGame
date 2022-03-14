#pragma once
#include "Node.h"
template <class T>

class Edge
{

private:

	T dataFrom;
	T dataTo;
	void setNodeFrom(T from)
	{
		from = dataFrom;
	}

	void setNodeTo(T to)
	{
		to = dataTo;
	}

public:

	Node<T> From;

	T getDataNodeFrom()
	{
		return From;
	}

	Node<T> To;

	T getDataNodeTo()
	{
		return To;
	}
};

