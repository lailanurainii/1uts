#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
int angka,random;
char lagi;

cout << "TEBAK ANGKA\n";//awalan
cout << "-------------------\n";

do
{cout << "Masukkan angka antara 1-100\n";
srand(time(NULL)); //membuat bibit random
random=rand() % 100 + 1; //mengacak angka 1 - 100

 do 
 {
cout << "Masukkan angka : ";
cin >> angka;
if (angka<random) 
{ cout << "Angka kurang besar! "; << endl }
else if (angka>random)
{ cout << "Angka kurang kecil! " << endl; }
else 
{ cout << "Anda benar!" << endl; }
 }
while (angka!=random) ; //jika angka tidak sama dengan random,
//maka user diminta untuk menginputkan angka kembali.
cout << "Main lagi? y/t\n";
cin >> lagi;
}
while(lagi=='y'); //jika lagi = y, maka permainan akan diulang.

return 0;
}