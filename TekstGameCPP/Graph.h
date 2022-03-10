#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

template <class T>

class Graph
{

private: vector<T> vector1;
public:


	void displayVector(vector<T>& v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		
		cout << endl;
	}
};


