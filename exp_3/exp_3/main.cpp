//
//  main.cpp
//  exp_3
//
//  Created by ecenur on 5.10.2016.
//  Copyright © 2016 ecenur. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x,y;
    
    cout << "Carpim Tablosu icin bir sayi yaziniz :\n";
    cin >> x;

        for (y=1;y<11;y++)
        {
            printf("\n%d x %d=%d",x,y,x*y);
        }

    return 0;
}
