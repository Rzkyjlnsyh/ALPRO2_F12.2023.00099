#include <iostream>

using namespace std;

// Fungsi ganjil apa genap
string ganjil_genap(int angka) {
    if (angka % 2 == 0) {
    return "genap";
    }
    return "ganjil";
}
// Fungsi kelipatan 3
string kelipatan_tiga(int angka) {
    if (angka % 3 == 0) {
    return "kelipatan 3";
    }
    return "bukan kelipatan 3";
}
int main() {
    int angka;
    cout << "masukkan bilangannya: ";
    cin >> angka;
    // TAMPILAN GANJIL/GENAP
    cout << angka << " adalah bilangan " << ganjil_genap(angka) << endl;
    // TAMPILAN KELIPATAN 3
    cout << angka << " itu " << kelipatan_tiga(angka) << endl;
    return 0;
}



/* CONTOH KALO FUNGSI MAX SAMA GANJIL GENAP DI PADU */


/*#include <iostream>
using namespace std;
// ini maximum
int max(int a, int b){
    if (a > b){
    return a;
    }
    return b;
}
// ini tentukan ganjil genap
string ganjil_genap(int hasil) {
    if (hasil % 2 == 0) {
    return "genap";
    }
    return "ganjil";
}
int main()
{
    int x;
    int y;
    cout << "masukan angka pertama : ";
    cin >> x;
    cout << "masukan angka kedua : ";
    cin >> y ;
    // tentukan bilangan terbesar nya
    int terbesar = max(x, y);
    cout << "Bilangan terbesar: " << terbesar << endl;
    // Menampilkan apakah bilangan terbesar ganjil atau genap
    cout << terbesar << " adalah bilangan " << ganjil_genap(terbesar) << endl;
    return 0;
}*/
