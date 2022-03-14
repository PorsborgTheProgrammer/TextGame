#pragma once
#include <vector>
#include <string>
#include "Node.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T>

class Graph
{

private: 

	vector<Node<string>> Nodes;
	
public:



	vector<Node<string>> GetGraph() {
		return Nodes;
	}

	void displayVector(vector<T>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}

		cout << endl;
	}
	void AddNode(T& data) {

		Nodes.push_back(new Node<T>(data));
	}

	void AddDirectionalEdge(T& from, T& to) {

	/*	Node<T> from = find(Nodes.begin(), Nodes.end(), item) != Nodes.end();*/
	}
};

