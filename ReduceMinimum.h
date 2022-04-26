#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric
{
    private:
    int binaryOperator(int x, int y)
    {
        if (x < y)
            return x;
        else
            return y;
    }

    public:
    void reduce(vector<int>vec, int i, int *min)
    {
        if (i < (vec).size())
        *min = binaryOperator (*min,vec[i]);
        i = i + 1;
        reduce(vec,i,min);
    }

    int reduce(vector<int> vec)
    {
        int minVal = vec[0], i = 0;
        reduce(vec,i,&minVal);
        return minVal;
    }
};