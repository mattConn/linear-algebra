#include <iostream>
#include <cmath>
#include "vec.h"

using namespace std;

void printV(const vec &v);

int main()
{
	vec v1 = {3,4};
	vec v2 = {5,6};

	vec v3 = addV(v1, v2);

	printV(v3);

	return 0;
}

void printV(const vec &v)
{
	cout << "(";

	int i = 0;
	while(i < v.size()-1)
	{
		cout << v[i] << ", ";
		i++;
	}

	cout << v[i];
	cout << ")" << endl;
}
