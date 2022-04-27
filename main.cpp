#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <iostream>


using namespace std;

void show(vector<int> vecValue) 
{
    for (int i = 0; i < vecValue.size();i++)
    {
        cout << vecValue[i] << " ";
    }
    cout << endl; 
    for(int i = 0; i<20; i++){
        cout << "+++++" ;
    }
    cout << endl;
    
}

int main()
{
    
    const int size = 20;
    vector<int> L;

//     int a[size]= {17,18,19,20,-21,90,49,213,-321,-32,44,-244,04,45,55,94,65,76,-43,22};
//     for (int i = 0; i < size; i++)
//     {
//         L.push_back(a[i]);
//    }
    
    cout << "enter 20 interger "<<endl;
    int count = 0,i;
    while (cin >> i)
    {
        L.push_back(i);
        cout << "left:" << 19-count << endl;
        count++;
        if (count == size)
        break;
    }
    cout << "Sample input:";
    show (L);

    //vector<int> L1 = L , L2 ,L3 ;
    MapAbsoluteValue mapAbs;
    MapTriple mapTri;
    FilterOdd filodd;
    FilterForTwoDigitPositive filtwo;
    ReduceGCD reGCD;
    ReduceMinimum reMin;
    L = mapAbs.map(L);
    //show(L);
    L = mapTri.map(L);
    //show(L);
    L = filtwo.filter(L);
    L = filodd.filter(L);
    //show(L);
     

    
    int valGCD = reGCD.reduce(L);
    int valMin = reMin.reduce(L);;
    cout << "Output: "  << valMin << " " << valGCD << endl;
    
    return 0;
}
 
