#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
    srand(time(0));
    int angkaTebakan = rand() % 100 + 1;
    int tebakan;
    int jumlahTebakan = 0;
    bool berhasil = false;

    cout << "Selamat datang di Permainan Tebak Angka!" << endl;

    while (!berhasil) //perulangan
    {
        cout << "Masukkan tebakan Anda (1-100): ";
        cin >> tebakan;
        jumlahTebakan++;

        if (tebakan == angkaTebakan) //keputusan
        {
            berhasil = true;
            cout << "Selamat! Anda berhasil menebak angka " << angkaTebakan << " dengan " << jumlahTebakan << " tebakan." << endl;
        } 
        else if (tebakan < angkaTebakan) {
            cout << "Tebakan Anda terlalu rendah. Coba lagi!" << endl;
        } 
        else {
            cout << "Tebakan Anda terlalu tinggi. Coba lagi!" << endl;
        }
        
    }

    return 0;
}