
#include <bits/stdc++.h>
#include <algocpp/string/split.hpp>
using namespace std;

int main()
{
	auto x = algocpp::string::split("ABC", "B");
	for (int i = 0; i < x.size(); i++)
	{
		cout << x[i] << " ";
	}

	cout << endl;
}
