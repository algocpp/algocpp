#include <bits/stdc++.h>
#include <algocpp/all.hpp>
using namespace std;

int main()
{
	vector<int>
		a = {1, 2, 3},
		b = {1, 2, 4};

	a.emplace_back(1);

	cout << algocpp::array::apply(a, b, [](int x, int y)
								  { return x + y; });

	return 0;
}
