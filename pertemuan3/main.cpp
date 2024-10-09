/*
#include <iostream>
using namespace std;
// gae fungsi minimum e
int min(int x, int y) {
    if (x < y) {
    return x;
    } else {
    return y;
    }
}
int main() {
    int x, y;
    // leboke nilai sek
    cout << "masukkan nilai pertamane: ";
    cin >> x;
    cout << "masukkan nilai keduane: ";
    cin >> y;
    // terus nyeluk fungsine
    int nilai_terkecil = min(x, y);
    cout << "nilai terkecil dari kedua bilangan diatas adalah : " << nilai_terkecil << endl;
    return 0;
}/*



/*
buat maksimum
#include <iostream>
using namespace std;
// Fungsi untuk mencari nilai maksimum
int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x, y;
    // Memasukkan nilai x dan y
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    // Memanggil fungsi untuk mencari nilai maksimum
    int nilaiMaksimum = max(x, y);
    cout << "Nilai maksimum adalah: " << nilaiMaksimum << endl;

    return 0;
}*/

/*
#include <iostream>
using namespace std;
// gae fungsi minimum e
int min(int x, int y) {
if (x < y) {
    return x;
    } else {
    return y;
    }
}
int main() {
    // langsung netap ne nilai
    int x = 10;
    int y = 20;
    cout<< "Nilai x: "<<x<< endl;
    cout<< "Nilai y: "<<y<< endl;
    // nyeluk fungsi
    int nilai_terkecil = min(x, y);
    cout<<"nilai terkecil dari kedua bilangan diatas adalah : "<< nilai_terkecil<< endl;
    return 0;
}*/

//pakai looping
#include <iostream>
using namespace std;
// Fungsi untuk mencari nilai minimum
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    // nyebutne angkane
    int x = 10;
    int y = 20;
    // looping e 10 kaali
    cout << "nilai minimum nya : "<< min(x, y) << endl;
    for (int i = 0; i < 10; i++) {
        // sak loopingan nilai ne di tambah 1
        x++;
        y++;
        // output gae looping
        cout << "looping ke: " << (i + 1) << ": " << min(x, y) << endl;
    }
    return 0;
}





