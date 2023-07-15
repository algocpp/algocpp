
# `algocpp::array::count`

## Description

`algocpp::array::count` (hereafter `count`) is a function for fast counting of elements in an array.

## Time

Assuming the number of elements is $N$

$O(N \log N)$

## Example

```cpp
#include <iostream>
#include <vector>
#include <algocpp/array.hpp>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 3};

    // 1
    cout << algocpp::array::count(a, 1) << endl;

    // 2
    cout << algocpp::array::count(a, 3) << endl;

    // 0
    cout << algocpp::array::count(a, 5) << endl;
}

```
