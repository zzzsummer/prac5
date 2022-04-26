#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric
{
     private:
    bool g(int x)
    {
        if ((x > 9 && x < 100 && x != -x))
    
            return true;
        else
            return false;
            
    }

    public:
    void filter(vector<int>vec,int i,vector<int> *v)
    {
        if(i < (vec).size())
        {
            bool twoDigitStates = g((vec)[i]);

            if(twoDigitStates)
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
