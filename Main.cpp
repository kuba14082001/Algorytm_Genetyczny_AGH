#include <iostream>
#include <cstdlib> //srand
#include <time.h>
#include "TParam.h"

using namespace std;
int main()
{
    srand(time(0));
    
    TParam param1{1,4,1,2};
    TParam param2{10,20,3};
    TParam param3{0,10,0.5,3.3};

    ////////////////////////////////////////////////////////////

    cout << "param1: ";
    param1.info();

    cout << "param2: ";
    param2.info();

    cout << "param3: ";
    param3.info();

    ////////////////////////////////////////////////////////////

    param2.set_val(100);
    param3.set_val(7.5);

    cout << "==========================\n";
    cout << "AFTER\n";
    cout << "==========================\n";

    cout << "param2: ";
    param2.info();

    cout << "param3: ";
    param3.info();

    ////////////////////////////////////////////////////////////

    return 0;
}