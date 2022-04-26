#pragma once
#include <iostream>
#include <vector>

using namespace std;

class MapGeneric
{
private:

int f(int x);

public:
virtual std::vector<int> map(std::vector<int> vec) = 0;
};

