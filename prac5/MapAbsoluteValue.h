#include "MapGeneric.h"

class MapAbsoluteValue : public MapGeneric
{
    private:
    int f(int x)
    {
        if(x < 0)
        {
            return -1 * x;
        }
        return x;
    }
    
    public:

    void map(vector<int>*v,int i)
    {
        if (i < (*v).size())
        {
            int value = f((*v)[i]);
            (*v)[i] = value;
            i += 1;
            map(v,i);
        }
    }

    vector<int> map(vector<int> vec)
    {
        vector<int> v;
        v = vec;
        map(&v,0);
        return v;
    }

};