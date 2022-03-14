#pragma once
#include <vector>
#include <string>
#include "Node.h"
#include <string>
#include <iostream>
using namespace std;

template <class T>

class Graph
{

	

public:

	vector<Node<string>> Nodes;

	void displayVector(vector<T>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}

		cout << endl;
	}
	void AddNode(T data) {

		Nodes.push_back(new Node<T>(data));
	}
};

