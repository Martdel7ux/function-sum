//
//  main.cpp
//  function sum
//
//  Created by MARTIN on 28/05/2021.
//

#include <iostream>
#include "sum.h"

using namespace std;

int main()
{int num, num1;
    
    menu();
    
    cout<<"enter a number"<<endl;
    cin>>num;
    
    cout<<"enter another number"<<endl;
    cin>>num1;
    
    cout<<"sum is"<<sumofrange(num, num1);
    
    
    return 0;
}
