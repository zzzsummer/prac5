#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric
{
    private:
    int binaryOperator(int x,int y)
    {
        if (x == 0)
            return y;
        return binaryOperator(y % x,x);
    }
    
    public:
    void reduce(vector<int> vec,int i,int *gcdVal)
    {
        if(i < (vec).size())
        {
            *gcdVal = binaryOperator(*gcdVal,vec[i]);
            i = i + 1;

            reduce(vec, i, gcdVal);
        }
    }

    int reduce(vector<int> vec)
    {
        int gcd = vec[0], i = 0;
        reduce(vec, i, &gcd);
        return gcd;
    }
};

