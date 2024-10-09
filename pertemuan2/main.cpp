#include <iostream>

using namespace std;

int main()
{
    string nama;
    int usia;

    cout << "masukan nama : ";
    cin >> nama;
    cout << "masukan usia : ";
    cin >> usia;

    // pake lopping for , me looping nama
    for (int j = 0; j < usia; j++){
        cout << nama << endl;
    }

    // pake lopping while , me looping nama
    int k = 0;
    while (k < usia) {
    cout << nama << endl;
    k++;
  }

  // pake lopping do while , me looping nama
  int l = 0;
    do {
    cout << nama << endl;
    l++;
    }
    while (l < usia);

    return 0;
}
