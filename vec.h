#include <cmath>
#include <string>
#include <vector>

using namespace std;

typedef vector<double> vec;

double magV(const vec &v)
{
	double sum = 0;

	for(auto &i : v)
		sum += i*i;

	return sqrt(sum);
}

vec addV(const vec &a, const vec &b)
{
	vec sum;

	for(int i=0; i < a.size(); i++)
		sum.push_back(a[i] + b[i]);

	return sum;
}

vec mulV(const double &k, const vec &a)
{
	vec v;

	for(auto &i : a)
		v.push_back(k*i);

	return v;
}

double dotV(const vec &a, const vec &b)
{
	double dot = 0;

	for(auto &i : a)
		for(auto &j : b)
			dot += i*j;

	return dot;
}

double angleV(const vec &a, const vec &b)
{
	return acos( dotV(a,b)/(magV(a) * magV(b)) );
}
