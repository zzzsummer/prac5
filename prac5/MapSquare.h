#pragma once
#include "MapGeneric.h"

class MapSquare : public MapGeneric
{
private:
    int f (int x)
    {
        return x * x;
    }
public:
    void map(vector<int> *v, int i)
    {
        if ( i < (*v).size())
        {
            int value = f((*v)[i]);
            (*v)[i] = value;
            i += 1;
            map(v,1);
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


