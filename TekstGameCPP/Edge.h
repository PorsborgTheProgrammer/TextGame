#pragma once
#include "Node.h"
#ifndef Edge_Included
#define Edge_Included
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

	Edge(Node<T> from, Node<T> to) {
		this->from = dataFrom;
		this->to = dataTo;
	}

};
#endif
