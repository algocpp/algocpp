
#include <iostream>
#include <algocpp/all.hpp>
using namespace std;

int main()
{
	vector<string> a = {"AAa", "hcveio", "vfneio", "AAa"};

	string c;
	cin >> c;
	cout << algocpp::array::count(a, c) << endl;
}
