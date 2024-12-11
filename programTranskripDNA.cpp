#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk transkripsi DNA ke RNA
string transkripsiDNAkeRNA(const string& dna) {
    string rna = "";
    for (char basa : dna) {
        if (basa == 'A') {
            rna += 'U';
        } else if (basa == 'T') {
            rna += 'A';
        } else if (basa == 'C') {
            rna += 'G';
        } else if (basa == 'G') {
            rna += 'C';
        } else {
            rna += '?'; // Jika ada basa yang tidak valid
        }
    }
    return rna;
}

int main() {
    string dna;

    // Input DNA dari pengguna
    cout << "Masukkan untaian DNA (A, T, C, G): ";
    cin >> dna; cout << "\n";

    // Transkripsi DNA ke RNA
    string rna = transkripsiDNAkeRNA(dna);

    // Menampilkan hasil transkripsi
    cout << "=================================" << "\n";
    cout << "DNA: " << dna << endl;
    cout << "Hasil transkripsi RNA: " << rna << endl;
    cout << "=================================" << "\n\n";

    return 0;
}
