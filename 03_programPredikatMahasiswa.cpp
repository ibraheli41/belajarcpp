// PROGRAM PENENTUAN PREDIKAT MAHASISWA
// Nama         :   Ibrahim Fauzi Rahman 
// NIM / KELAS  :   607022400009 / D3TK-48-01
// TOPIK        :   PERCABANGAN

#include <iostream>                         
using namespace std;   

// DEKLARASI VARIABEL
int nilaiUser1, nilaiUser2, nilaiUser3, nilaiUser4, nilaiUser5;
int inputUser, jumlahNilai, rataRata;
char gradeA = 'A',gradeB = 'B', gradeC = 'C', gradeD = 'D', gradeE = 'E';


void garisTampilan(){           // FUNGSI UNTUK TAMPILAN GARIS
    cout << "======================================================" << endl;
}
void judulProgram(){            // FUNGSI UNTUK JUDUL
    cout << "SELAMAT DATANG PADA PROGRAM GRADING NILAI\n";
    garisTampilan();
    cout << "SILAHKAN INPUT NILAI NILAI PELAJARAN\n";
    garisTampilan();
}
void rataRataUser(){            // FUNGSI UNTUK MENGHITUNG RATA-RATA
    jumlahNilai =  nilaiUser1 + nilaiUser2 + nilaiUser3 + nilaiUser4 + nilaiUser5;
    rataRata = jumlahNilai / 5;
}
void tampilanUntukInput(){      // FUNGSI UNTUK INPUT NILAI
    cout << "Masukkan Nilai 1 : "; cin >> nilaiUser1;
    cout << "Masukkan Nilai 2 : "; cin >> nilaiUser2;
    cout << "Masukkan Nilai 3 : "; cin >> nilaiUser3;
    cout << "Masukkan Nilai 4 : "; cin >> nilaiUser4;
    cout << "Masukkan Nilai 5 : "; cin >> nilaiUser5;
    rataRataUser();
}

void kataApresiasiAB(){         // FUNGSI UNTUK MENAMPILKAN NILAI RATA-RATA DAN KATA-KATA APRESIASI
    cout << " SELAMAT !! NILAI ANDA\n";
    cout << "RATA-RATA NILAI KAMU ADALAH : " << rataRata << endl;
}

void kataApresiasiC(){          // FUNGSI UNTUK MENAMPILKAN NILAI RATA-RATA DAN KATA-KATA APRESIASI
    cout << " SELAMAT !! ANDA MEMILIKI NILAI YANG HAMPIR SAJA TIDAK MENCUKUPI, NAMUN ANDA TELAH SELAMAT DARI ITU, SERING-SERING BELAJAR AGAR TIDAK MENDAPATKAN NILAI SEPERTI INI LAGI YA :)\n";
    cout << "RATA-RATA NILAI KAMU ADALAH : " << rataRata << endl;
}

void kataApresiasiDE(){         // FUNGSI UNTUK MENAMPILKAN NILAI RATA-RATA DAN KATA-KATA APRESIASI
    cout << " MAAF !! SEMESTER DEPAN ANDA MAKSIMAL HANYA DAPAT MENGAMBIL MAKSIMAL 16 SKS\n";
    cout << "RATA-RATA NILAI KAMU ADALAH : " << rataRata << endl;
}

void percabanganGrade() {       // FUNGSI PERCABANGAN
    if (rataRata >= 81 && rataRata <=100) {
        cout << "GRADE " << gradeA;
        kataApresiasiAB();
    }
    else if (rataRata >= 71 && rataRata <=80) {
        cout << "GRADE " << gradeB;
        kataApresiasiAB();
    }   
    else if (rataRata >= 61 && rataRata <=70) {
        cout << "GRADE " << gradeC;
        kataApresiasiC();
    }   
    else if (rataRata >= 51 && rataRata <=60) {
        cout << "GRADE " << gradeD;
        kataApresiasiDE();
    }  
    else if (rataRata <=50) {
        cout << "GRADE " << gradeE;
        kataApresiasiDE();
    }
    else if (rataRata >= 101) {
        cout << "Tidak Mungkin, Anda mungkin salah memasukkan nilai" << endl;
    }
}
void hasilAkhir(){          // FUNGSI UNTUK MENAMPILKAN HASIL AKHIR
    garisTampilan();
    cout << "Maka HASIL Akhir Anda Adalah : " << endl;
    garisTampilan();
    percabanganGrade();
    garisTampilan();
    cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI" << endl;
    garisTampilan();
}

int main () {              // FUNGSI MAIN
    judulProgram();
    tampilanUntukInput();
    hasilAkhir();
    char keluar; 
    
    cout << "\nTekan huruf sembarang kemudian enter untuk keluar\n";
    cin >> keluar;
    return 0;
}