#include <iostream>
using namespace std;

int main()
{


int bilangan;

srand(time(0));

bilangan = rand() % 10;

while (bilangan%2)
{
    cout << "bilangan " << bilangan << "adalah Ganjil" << endl;
    bilangan = rand() % 10;
}
cout << "bilangan " << bilangan << "adalah Genap" << endl;

}
