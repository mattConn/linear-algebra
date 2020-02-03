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

vec sumV(vector<vec> L)
{
	vec sum(L[0].size(), 0);

	for(int i=0; i < L.size(); i++) // rows 
		for(int j=0; j < sum.size(); j++) // cols 
			sum[j] += L[i][j];

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
