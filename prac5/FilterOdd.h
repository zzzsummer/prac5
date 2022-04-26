#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric
{
    private:
    bool g(int x)
    {
        return (x % 2) != 0;
    }

    public:
    void filter(vector<int>vec,int i,vector<int> *v)
    {
        if(i < (vec).size())
        {
            bool oddState = g((vec)[i]);

            if(oddState)
            {
                (*v).push_back((vec)[i]);
            }
            i += 1;
            filter(vec,i,v);
        }
    }

    vector<int> filter(vector<int> vec)
    {
        vector<int> v;
        int i = 0;
        filter(vec,i,&v);
        return v;
    }
};