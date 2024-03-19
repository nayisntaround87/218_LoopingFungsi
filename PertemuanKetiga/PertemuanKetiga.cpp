// PertemuanKetiga.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i;
    string nama;

    for (i = 7; i > 0; i--)
    {
        cout << i << ", " << "NAYEY" << endl;

    }

    for(i = 0;i < 5; i++)
    {
        cout << "Masukan Nama = ";
        cin >> nama[i];
    }

    cout << endl;
        cout << "===============" << endl;
        cout << "KUMPULAN NAMA NAMA" << endl;


    for (i=0;i < 5;i++) 
    {

        cout << "NAMANYA ADALAH" << nama[i] << endl;
    }

}
