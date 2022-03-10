#include "Graph.h"
#include <vector>
#include "Node.h"
#include <string>

using namespace std;


template <class T>


void displayVector(vector<T>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}


vector<Node<string>> Nodes;
