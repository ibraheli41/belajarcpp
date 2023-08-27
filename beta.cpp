/* 

KONVERSI SUHU VIA TERMINAL 
Cara bikin hidup tambah ribet
Iseng-iseng by Ibe Ibrahim using C++
2023, 28 August.

*/

#include <iostream>
using namespace std;

/* 
Mengubah integer angka menjadi double 
(apakah ini bisa diringkas?) 
*/

double empat = 4;
double lima = 5;
double sembilan = 9;

/* Membuat Class Celcius yang memiliki fungsi sesuai rumus */
class Celcius {
    public:
        int CtoK(int a) {
            return a + 273.15;
        }
        int CtoF(int a) {
            double sembilan = 9;
            double lima = 5;
            double pembagian1 = sembilan / lima;
            double perkalian = pembagian1 * a + 32;
            return perkalian;
        }
        int CtoR(int a) {
            double empat = 4;
            double lima2 = 5;
            double pembagian2 = empat / lima2;
            double perkalian2 = pembagian2 * a;
            return perkalian2;
        }
        int CtoC(int a) {
            return a;
        }
};

/* Membuat Class Fahrenheit yang memiliki fungsi sesuai rumus */
class Fahrenheit {
    public:
        int FtoF(int a) {
            return a;
        }
        int FtoC(int a) {
            double f = a - 32;
            double bagi = lima / sembilan;
            return f * bagi;
        }
        int FtoK(int a) {
            double f = a;
            double bagi2 = lima / sembilan;
            return f + 459.67 * bagi2; 
        }
        int FtoR(int a) {
            double f = a;
            double bagi3 = empat / sembilan;
            double kurang = f - 32;
            return bagi3 * kurang;
        }
};

/* Membuat Class Kelvin yang memiliki fungsi sesuai rumus */
class Kelvin {
    public:
        int KtoF(int a) {
            double b = a * sembilan / lima;
            return b - 459.67;
        }
        int KtoC(int a) {
            double k = a;
            return k - 273.15;
        }
        int KtoK(int a) {
            return a; 
        }
        int KtoR(int a) {
            double c = empat / lima;
            double b = a - 273;
            return b * c;
        }
};

/* Membuat Class Reamur yang memiliki fungsi sesuai rumus */
class Reamur {
    public:
        int RtoF(int a) {
            double b = a * 2.25;
            return b + 32;
        }
        int RtoC(int a) {
            return a / 0.8;
        }
        int RtoK(int a) {
            double b = a / 0.8;
            return b + 273.15 ; 
        }
        int RtoR(int a) {
            return a;
        }
};

/* FUNGSI UTAMA (MAIN) */
int main() 
{
    /* Memanggil Class Celcius; Fahrenheit; Kelvin; Reamur; */
    Celcius c;
    Fahrenheit f;
    Kelvin k;
    Reamur r;

    /* Menyimpan nilai dan pilihan */
    double nilai = 0;
    int pilihan = 0;
    bool keluar = false;

    /* Menggunakan do while */
    do 
    {
        /* Menampilkan pilihan ke Terminal */
        cout << "1) Celcius\n2) Reamur\n3) Fahrenheit\n4) Kelvin\n5) Keluar" << endl;
        cout << "Apa yang akan dikonversikan? " << endl;
        cin >> pilihan;

        /* Menggunakan switch yang di dalamnya ada case {1,2,3,4,5} untuk menjalankan perintah user sesuai input cin >> pilihan,  */
        switch (pilihan) {
            
            /* kasus apabila user menginput (1) maka akan menyuruh user untuk menginput nilai */
            case 1:
                cout << "Masukan nilai derajat Celcius: ";
                cin >> nilai;
                
                /* Menggunakan do while untuk case 1*/
                do 
                {   
                    /* Menampilkan pilihan dan menginput pilihan dari user*/
                    cout << "\n1) Celcius\n2) Reamur\n3) Fahrenheit\n4) Kelvin\n5) Keluar" << endl;
                    cout << "Celcius menuju? " << endl;
                    cin >> pilihan;

                    /* Menggunakan switch */
                    switch (pilihan) 
                    {   
                        /* Menampilkan nilai akhir sesuai dengan pilihan */
                        case 1:
                            cout << "Nilainya adalah " << c.CtoC(nilai) << endl;
                            break;
                        case 2:
                            cout << "Nilainya adalah " << c.CtoR(nilai) << endl;
                            break;
                        case 3:
                            cout << "Nilainya adalah " << c.CtoF(nilai) << endl;
                            break;
                        case 4:
                            cout << "Nilainya adalah " << c.CtoK(nilai) << endl;
                            break;
                        
                        /* Menampilkan Terima kasih dan membuat user keluar dari program dengan membuat keluar = true */
                        case 5:
                            cout << "Terima Kasih!" << endl;
                            keluar = true;
                            break;
                        default:
                            cout << "Pilihan yang anda masukan salah!" << endl;
                            break;
                    }
                } 
                
                /* User akan keluar apabila keluar = true */
                while (!keluar);
                break;

            /* kasus apabila user menginput (2) maka akan menampilkan tampilan berikutnya */
            case 2:
                cout << "Masukan nilai derajat Reamur: ";
                cin >> nilai;
                
                do {
                    cout << "\n1) Celcius\n2) Reamur\n3) Fahrenheit\n4) Kelvin\n5) Keluar" << endl;
                    cout << "Reamur menuju? " << endl;
                    cin >> pilihan;

                    switch (pilihan) 
                    {
                        case 1:
                            cout << "Nilainya adalah " << r.RtoC(nilai) << endl;
                            break;
                        case 2:
                            cout << "Nilainya adalah " << r.RtoR(nilai) << endl;
                            break;
                        case 3:
                            cout << "Nilainya adalah " << r.RtoF(nilai) << endl;
                            break;
                        case 4:
                            cout << "Nilainya adalah " << r.RtoK(nilai) << endl;
                            break;
                        case 5:
                            cout << "Terima Kasih!" << endl;
                            keluar = true;
                            break;
                        default:
                            cout << "Pilihan yang anda masukan salah!" << endl;
                            break;
                    }
                } while (!keluar);
                break;
            
            /* kasus apabila user menginput (3) maka akan menampilkan tampilan berikutnya */
            case 3:
                cout << "Masukan nilai derajat Fahrenheit: ";
                cin >> nilai;

                do {
                    cout << "\n1) Celcius\n2) Reamur\n3) Fahrenheit\n4) Kelvin\n5) Keluar" << endl;
                    cout << "Fahrenheit menuju? " << endl;
                    cin >> pilihan;

                    switch (pilihan) 
                    {
                        case 1:
                            cout << "Nilainya adalah " << f.FtoC(nilai) << endl;
                            break;
                        case 2:
                            cout << "Nilainya adalah " << f.FtoR(nilai) << endl;
                            break;
                        case 3:
                            cout << "Nilainya adalah " << f.FtoF(nilai) << endl;
                            break;
                        case 4:
                            cout << "Nilainya adalah " << f.FtoK(nilai) << endl;
                            break;
                        case 5:
                            cout << "Terima Kasih!" << endl;
                            keluar = true;
                            break;
                        default:
                            cout << "Pilihan yang anda masukan salah!" << endl;
                            break;
                    }
                } while (!keluar);
                break;
            
            /* kasus apabila user menginput (4) maka akan menampilkan tampilan berikutnya */   
            case 4:
                cout << "Masukan nilai derajat Kelvin: ";
                cin >> nilai;
                
                do {
                    cout << "\n1) Celcius\n2) Reamur\n3) Fahrenheit\n4) Kelvin\n5) Keluar" << endl;
                    cout << "Kelvin menuju? " << endl;
                    cin >> pilihan;

                    switch (pilihan) 
                    {
                        case 1:
                            cout << "Nilainya adalah " << k.KtoC(nilai) << endl;
                            break;
                        case 2:
                            cout << "Nilainya adalah " << k.KtoR(nilai) << endl;
                            break;
                        case 3:
                            cout << "Nilainya adalah " << k.KtoF(nilai) << endl;
                            break;
                        case 4:
                            cout << "Nilainya adalah " << k.KtoK(nilai) << endl;
                            break;
                        case 5:
                            cout << "Terima Kasih!" << endl;
                            keluar = true;
                            break;
                        default:
                            cout << "Pilihan yang anda masukan salah!" << endl;
                            break;
                    }
                } while (!keluar);
                break;
            
            /* kasus apabila user menginput (5) maka akan menampilkan tampilan berikutnya 
            dan keluar dari program Conversi Suhu */
            case 5:
                cout << "Selamat tinggal! Terima Kasih!" << endl;
                keluar = true;
                break;
            
            /* kasus apabila user menginput tidak sesuai intruksi pilihan */
            default:
                cout << "Pilihan yang anda masukan salah!" << endl;
                break;
        }
    } while (!keluar);
}

/* Masih beta bang, masukan dan dukungan sangat berarti untuk mengembangkan program ini lebih baik :)) */