#include <iostream>

using namespace std;

// Fungsi ganjil apa genap ya
string ganjil_genap(int angka) {

    if (angka % 2==0) {
    return "genap";
    }
    return "ganjil";
}
int main()
{
    int angka;
    cout << "masukan bilangannya: ";
    cin >> angka;
    // TAMPILAN GANJIL/AGENAP
    cout << angka << " adalah bilangan " << ganjil_genap(angka) <<endl;

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
