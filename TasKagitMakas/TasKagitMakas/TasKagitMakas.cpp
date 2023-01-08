// TasKagitMakas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int i, kagit = 1, makas = 2, tas = 3, oyuncu = 0, Bilgisayar = 0, secim;
    //srand((unsigned)time(NULL));
    srand(time(NULL));
    cout << "secim yapınnız: kagit(1),makas(2),tas(3): " << endl;
    for (int i = 0; i < 5; i++)
    {
     cin >> secim;
      int bilgisayar =( rand() % 3 ) + 1;
        cout << bilgisayar << endl;
        if (secim==1)
        {
            if (bilgisayar==1)
            {
                cout << "Berabere" << endl;
                cout << " " << endl;
            }
             if (bilgisayar==2)
            {
                cout << "Kazanan Bilgisayar" << endl;
                Bilgisayar = Bilgisayar + 1;
                cout << " " << endl;
            }
             if (bilgisayar==3)
            {
                cout << "kazanan oyuncu" << endl;
                oyuncu = oyuncu + 1;
                cout << " " << endl;
            }
        }
        else if (secim==2)
        {
            if (bilgisayar==1)
            {
                cout << "Kazanan oyunucu" << endl;
                oyuncu = oyuncu + 1;
                cout << " " << endl;
               
            }
             if (bilgisayar==2)
            {
                cout << "Berabere" << endl;
                cout << " " << endl;
                    
            }
             if (bilgisayar==3)
            {
                cout << "Kazanan Bilgisayar" << endl;
                Bilgisayar = Bilgisayar + 1;
                cout << " " << endl;
            }
           
        }
        else if (secim==3)
        {
            if (bilgisayar==1)
            {
                cout << "Kazanan Bİlgisayar" << endl;
                Bilgisayar = Bilgisayar + 1;
                cout << " " << endl;
              
                    
            }
             if (bilgisayar==2)
            {
                cout << "Kazanan oyuncu" << endl;
                oyuncu = oyuncu + 1;
                cout << " " << endl;
               
            }
             if (secim==3)
            {
                cout << " Berabere" << endl;
                cout << " " << endl;

            }
        }
        else
        {
            cout << "Hatalı seçim yapılmıştır" << endl;
            cout << " " << endl;
        }
    }
    cout <<" "<< endl;
    cout << " " << endl;
 
    if (oyuncu > Bilgisayar)
    {
        cout << "Oyun siz kazandınız" << endl;
        cout << "Bilgisayar puan: " << Bilgisayar << endl;
        cout << "oyuncu puan: " << oyuncu << endl;

    }
    else if (oyuncu < Bilgisayar)
    {
        cout << "Oyun bilgisayar kazandı" << endl;
        cout << "Bilgisayar puan: " << Bilgisayar << endl;
        cout << "oyuncu puan: " << oyuncu << endl;
    }
    else 
    {
        cout << "Oyunu berabere"  << endl;
        cout << "Bilgisayar puan: " << Bilgisayar << endl;
        cout << "oyuncu puan: " << oyuncu << endl;
    }
    return 0;
}
