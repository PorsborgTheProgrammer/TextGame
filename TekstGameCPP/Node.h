#pragma once
#include "Edge.h"
#ifndef Node_Included
#define Node_Included
template <class T>
class Node
{
private:
	
	T data;
	void setData(T d)
	{
		data = d;
	}


public:
	
	T getData()
	{
		return data;
	}

	void AddEdge(Node<T> other) {
		

	}
};
#endif
