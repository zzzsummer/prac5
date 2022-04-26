#pragma once
#include <vector>
using namespace std;

class ReduceGeneric
{
    private:
    int binaryOperator(int x, int y)
    {
        return 0;
    }

    public:
    virtual int reduce(vector<int> vec) = 0;


};