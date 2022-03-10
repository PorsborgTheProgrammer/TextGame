#pragma once
#include <vector>
#include <string>

template <class T>

class Graph
{

private: vector<T>
public:



	Graph();
	void displayVector(vector<T>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
};


