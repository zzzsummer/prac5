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
#include <string>

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
    
    int number;
    vector<int> L;
    cout << "enter 20 interger "<<endl;
    while (cin >> number)
        {
            L.push_back(number);
        if (cin.get() == '\n')
            break;
        }  
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
 

 
