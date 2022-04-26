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
    vector<int> L(size);
    // int a[20]= {17,18,19,20,-21,90,49,213,-321,-32,44,-244,04,45,55,94,65,76,-43,22};
    // for (int i = 0; i < size; i++)
    // {
    //     L.push_back(a[i]);
   // }
    
   cout << "enter 20 interger "<<endl;
   for(int i = 0; i < size; i++)
    {
       cin >> L[i]; 
    }
   show(L); 

    vector<int> L1 = L , L2 ,L3 ;
    MapAbsoluteValue mapAbs;
    MapTriple mapTri;
    FilterOdd filodd;
    ReduceGCD reGCD;
    ReduceMinimum remin;
    L1 = mapAbs.map(L1);
    show(L1);
    L1 = mapTri.map(L1);
    show(L1);
    L2 = filodd.filter(L1);
    show(L2);
    int kl = remin.reduce(L2);
    //cout << "min L2: "<< minValue << endl;


    return 0;
}