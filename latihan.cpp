#include <iostream>
#include <string>

using namespace std;

struct Zodiak {
    string nama;
    int mulaiBulan, mulaiHari, akhirBulan, akhirHari;
};

Zodiak daftarZodiak[] = {
    {"CAPRICORN", 12, 22, 01, 19},
    {"AQUARIUS", 01, 20, 02, 18},
    {"PISCES", 02, 19, 03, 20},
    {"ARIES", 03, 21, 04, 19},
    {"TAURUS", 04, 20, 05, 20},
    {"GEMINI", 05, 21, 06, 20},
    {"CANCER", 06, 21, 07, 22},
    {"LEO", 07, 23, 8, 22},
    {"VIRGO", 8, 23, 9, 22},
    {"LIBRA", 9, 23, 10, 22},
    {"SCORPIO", 10, 23, 11, 21},
    {"SAGITTARIUS", 11, 22, 12, 21}
};

string tentukanZodiak(Zodiak daftar[], int n, int hari, int bulan) {
    for (int i = 0; i < n; i++) {
        if ((bulan == daftar[i].mulaiBulan && hari >= daftar[i].mulaiHari) ||
            (bulan == daftar[i].akhirBulan && hari <= daftar[i].akhirHari)) {
            return daftar[i].nama;
        }
    }
    return "Dilihat lagi tanggalnya, ada yang salah tuh!";
}

void tampilkanDaftarZodiak(Zodiak daftar[], int n) {
    cout << "Daftar Zodiak: \n";
    for (int i = 0; i < n; i++) {
        cout << daftar[i].nama << " ("
             << daftar[i].mulaiHari << "-" << daftar[i].mulaiBulan << " sampai "
             << daftar[i].akhirHari << "-" << daftar[i].akhirBulan << ")\n";
    }
}

int main() {
    int hari, bulan, tahun;
    int jumlahZodiak = sizeof(daftarZodiak) / sizeof(daftarZodiak[0]);
    string user, lagi;

    tampilkanDaftarZodiak(daftarZodiak, jumlahZodiak);

    do{
        cout << "\nNama : ";
        cin >> user;
        cout << "Masukkan Tanggal Lahir Anda (dd-mm-yyyy): ";
        cin >> hari >> bulan >> tahun;
        string zodiak = tentukanZodiak(daftarZodiak, jumlahZodiak, hari, bulan);
        cout << "\nTanggal Lahir Anda : " << hari << "-" << bulan << "-" << tahun;
        cout << "\nZodiak Anda adalah : " << zodiak<< endl;

        cout << "\nCek lagi? (y/n) : ";
        cin >> lagi;

    }while (lagi == "y");

    return 0;
}




//pake fungtion nilai 100//
