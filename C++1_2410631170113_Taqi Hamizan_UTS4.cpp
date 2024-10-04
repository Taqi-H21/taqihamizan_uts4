#include<iostream>
using namespace std;
int main()
{
int n;
cout << "Masukan Angka : ";
cin >> n;
for (int i = 1; i <= n; i++)
{
    if (i % 2 == 0)
        cout << "Bilangan Genap : " << endl << i << endl;
    else
        cout << "Bilangan Ganjil : " << endl << i << endl;
}

return 0;
}
