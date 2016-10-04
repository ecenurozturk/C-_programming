//
//  main.cpp
//  exp_1
//
//  Created by ecenur on 4.10.2016.
//  Copyright © 2016 ecenur. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int bolunen,bolum,bolen,kalan;
    
    cout << "Bolunen sayiyi yaziniz :\n";
    cin >> bolunen;
    cout << "Bolen sayiyi yaziniz :\n";
    cin >> bolen;
    
        if(bolen<bolunen & bolunen>=0)
        {
            
            bolum=bolunen/bolen;
            kalan=bolunen%bolen;
            
            cout << "Bölüm :\n"<<bolum<<endl;
            cout << "Kalan :\n"<<kalan<<endl;
    
        }
        else
        {
             cout << "Girdiginiz sayi islem icin uygun degil\n"<<bolum<<endl;
        }
  
    
    return 0;
}
