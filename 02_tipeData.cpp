// Mini Program untuk Perhitungan Luas Lingkaran, Volume Balok, dan Volume Tabung.
// Nama :    Ibrahim Fauzi Rahman 
// NIM  :    607022400009

#include <iostream>                         
using namespace std;                        

long double panjang, lebar, tinggi, luas, volume, jari2, phi = 3.14;
int userInput;

void volumeBalok() {                                                 
    volume = panjang * lebar * tinggi;
    cout << "\nVolume Balok adalah: " << volume << "m^3" << endl;
}
void programVolumeKubus(){                          
    cout << "\nPerhitungan Volume Balok" << endl;
    cout << "Masukkan panjang: "; cin >> panjang;
    cout << "Masukkan lebar: "; cin >> lebar;
    cout << "Masukkan tinggi: "; cin >> tinggi;
    volumeBalok();
}
void luasLingkaran(){                               
    luas = phi * jari2 * jari2;
    cout << "\nLuas lingkaran adalah: " << luas << "m^2" << endl;
}
void programLuasLingkaran(){                       
    cout << "\nPerhitungan Luas Lingkaran" << endl;
    cout << "Masukkan nilai jari-jari:"; cin >> jari2;
    luasLingkaran();
}
void volumeTabung(){
    volume = luas * tinggi;   
    cout << "Volume Tabung adalah: " << volume << "m^3" << endl;
}
void programVolumeTabung(){                         
    cout << "\nPerhitungan Volume Tabung" << endl;
    programLuasLingkaran();
    cout << "Masukkan Tinggi Tabung: "; cin >> tinggi;
    volumeTabung();
}

void tampilanKotak(){
    cout << "=======================================================================================" << endl;
    cout << "=                                                                                     =" << endl;
    cout << "=                    SELAMAT DATANG DI MENU PERHITUNGAN BANGUN RUANG                  =" << endl;
    cout << "=                                                                                     =" << endl;
    cout << "=======================================================================================" << endl;
}

void judulProgram() {
    tampilanKotak();
    cout << "1. Perhitungan Luas Lingkaran \n2. Perhitungan Volume Tabung \n3. Perhitungan Volume Balok\n" << endl;
}

void inputUser(){                    
    cout << "Input: "; cin >> userInput;
    if (userInput == 1)
        programLuasLingkaran();
    else if (userInput == 2)
        programVolumeTabung();
    else if (userInput == 3)
        programVolumeKubus();
    else cout << "Anda salah memasukan pilihan" << endl;
    }
    
int main() {  
    judulProgram();
    inputUser();

    char keluar; 
    cout << "\nTekan huruf sembarang kemudian enter untuk keluar\n";
    cin >> keluar;
}

