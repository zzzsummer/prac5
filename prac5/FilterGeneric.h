#pragma once
#include <vector>
using namespace std;
class FilterGeneric
{
    private:
    bool g (int value)
    {
        return 0;
    }

    public:
    virtual vector<int> filter (vector<int> vec) = 0;

};