
#include <iostream>
#include <algocpp/all.hpp>
using namespace std;

int main()
{
	string a, b, c;
	cin >> a >> b >> c;

	cout << algocpp::string::replace(a, b, c, 1) << endl;
}
