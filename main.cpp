#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char pilihan;
 do {
    cout << " ~~~~~~~~~~[ PEMESANAN TIKET FILM ]~~~~~~~~~~~~\n\n";

    cout << " PROMO: DISKON 40% !!! *setiap pembelian diatas 5 buah tiket \n\n";

    cout << " ============================================= " << endl;
    cout << " || KODE FILM ||  NAMA FILM  || HARGA TIKET || " << endl;
    cout << " ============================================= " << endl;
    cout << " ||    1.     ||  Armagedon  || Rp. 35.000  || " << endl;
    cout << " ============================================= " << endl;
    cout << " ||    2.     ||  DisneyLand || Rp. 45.000  || " << endl;
    cout << " ============================================= " << endl;
    cout << " ||    3.     ||  ToyStory   || Rp. 60.000  || " << endl;
    cout << " ============================================= " << endl;
    cout << " ||    4.     ||  Chickens   || Rp. 75.000  || " << endl;
    cout << " ============================================= " << endl;
    cout << endl;

    cout << " Masukan kode Film (1-4) : "; cin >> a;
    cout << " Masukan jumlah pembelian : "; cin >> b;
    cout << endl;


    switch (a) {

    case 1: {
        int HTM = 35000;
        int disc = HTM * b;
        cout << " Harga Tiket Rp : " << HTM << endl;
        cout << " Jumlah Pembelian : " << b << endl;
        if (b>=5) {
            disc = 35000 * b * 0.6;
        cout << " Harga Setelah Diskon : " << disc << endl;
        }
        else if (b<5) {
            disc = 35000 * b;
        cout << " Total Harga : " << disc << endl;
        }
        break;


    }

    case 2: {
        int HTM = 45000;
        int disc = HTM * b;
        cout << " Harga Tiket Rp : " << HTM << endl;
        cout << " Jumlah Pembelian : " << b << endl;
        if (b>=5) {
            disc = 45000 * b * 0.6;
        cout << " Harga Setelah Diskon : " << disc << endl;
        }
        else if (b<5) {
            disc = 45000 * b;
        cout << " Total Harga : " << disc << endl;
        }
        break;


    }

    case 3: {
        int HTM = 60000;
        int disc = HTM * b;
        cout << " Harga Tiket Rp : " << HTM << endl;
        cout << " Jumlah Pembelian : " << b << endl;
        if (b>=5) {
            disc = 60000 * b * 0.6;
        cout << " Harga Setelah Diskon : " << disc << endl;
        }
        else if (b<5) {
            disc = 60000 * b;
        cout << " Total Harga : " << disc << endl;
        }
        break;

    }

    case 4: {
        int HTM = 75000;
        int disc = HTM * b;
        cout << " Harga Tiket Rp : " << HTM << endl;
        cout << " Jumlah Pembelian : " << b << endl;
        if (b>=5) {
            disc = 75000 * b * 0.6;
        cout << " Harga Setelah Diskon : " << disc << endl;
        }
        else if (b<5) {
            disc = 75000 * b;
        cout << " Total Harga : " << disc << endl;
        }
        break;

    }


   default:
    cout << " Maaf, kode film pilihan anda tidak valid, silakan pilih angka diantara 1, 2, 3 atau 4. Terima Kasih! " << endl;
    cout << endl;


    } cout << " Apakah anda ingin memesan tiket lagi? (Y/N) "; cin >> pilihan;
      cout << endl;

        }
while (pilihan == 'Y'|| pilihan == 'y');
            cout << " Terimakasih Sudah Memesan tiket Film " << endl;
            cout << endl;













}


