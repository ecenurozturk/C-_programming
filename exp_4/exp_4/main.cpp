//
//  main.cpp
//  exp_4
//
//  Created by ecenur on 6.10.2016.
//  Copyright © 2016 ecenur. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
     int x=0,y=1,sayi,i,degisken;
    
    cout << "Kac tane Fibonacci sayisi istiyorsun? :\n";
    cin >> sayi;
    
    cout << x<<" ";
    cout << y<<" ";
    
    for(i=0;i<sayi-2;++i)
        
    {
        
        cout << x+y<<" ";
        
        degisken=x;
        
        x=y;
        
        y=degisken+y;
        
        
        
    }

    return 0;
}
