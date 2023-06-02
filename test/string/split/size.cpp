
#include <bits/stdc++.h>
#include <string/split.hpp>
using namespace std;

int main()
{
    auto x = algocpp::string::split("ABCDE", "BC");
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
}
